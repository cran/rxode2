rxTest({
  test_that("interpolation functions", {

    tmp <- rxModelVars("locf(a);\n ret=a+b")

    expect_equal(rxNorm(tmp), "locf(a);\nret=a+b;\n")

    expect_equal(as.character(tmp$interp["a"]), "locf")
    expect_equal(as.character(tmp$interp["b"]), "default")

    tmp <- rxModelVars("params(b, a);\nlocf(a);\n ret=a+b")

    expect_equal(as.character(tmp$interp["a"]), "locf")
    expect_equal(as.character(tmp$interp["b"]), "default")

    expect_error(rxModelVars("params(b, a);\nlocf(a);\nnocb(a);\n ret=a+b"))

    tmp <- rxModelVars("params(b, a);\nlinear(a);\n ret=a+b")

    expect_equal(as.character(tmp$interp["a"]), "linear")
    expect_equal(as.character(tmp$interp["b"]), "default")

    tmp <- rxModelVars("params(b, a);\nnocb(a);\n ret=a+b")
    expect_equal(as.character(tmp$interp["a"]), "nocb")
    expect_equal(as.character(tmp$interp["b"]), "default")

    tmp <- rxModelVars("params(b, a);\nmidpoint(a);\n ret=a+b")
    expect_equal(as.character(tmp$interp["a"]), "midpoint")
    expect_equal(as.character(tmp$interp["b"]), "default")


  })

  test_that("ui $interpLines", {

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        cl.wt <- 0
        v.wt <- 0
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        add.sd <- 0.7
      })
      model({
        linear(WT)
        locf(b)
        nocb(c)
        midpoint(d)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)+ WT ^ 2* cl.wt
        v <- exp(tv + eta.v+ WT * v.wt + b + c + d)
        linCmt() ~ add(add.sd)
      })
    }

    ui <- rxode(f)

    expect_equal(ui$interpLines,
                 list(str2lang("linear(WT)"),
                      str2lang("locf(b)"),
                      str2lang("nocb(c)"),
                      str2lang("midpoint(d)")))

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        cl.wt <- 0
        v.wt <- 0
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        add.sd <- 0.7
      })
      model({
        linear(WT)
        locf(b)
        midpoint(d)
        nocb(c)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)+ WT ^ 2* cl.wt
        v <- exp(tv + eta.v+ WT * v.wt + b + c + d)
        linCmt() ~ add(add.sd)
      })
    }

    ui <- rxode(f)

    expect_equal(ui$interpLines,
                 list(str2lang("linear(WT)"),
                      str2lang("locf(b)"),
                      str2lang("nocb(c)"),
                      str2lang("midpoint(d)")))

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        cl.wt <- 0
        v.wt <- 0
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        add.sd <- 0.7
      })
      model({
        locf(WT, b, d, c)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)+ WT ^ 2* cl.wt
        v <- exp(tv + eta.v+ WT * v.wt + b + c + d)
        linCmt() ~ add(add.sd)
      })
    }

    ui <- rxode(f)

    expect_equal(ui$interpLines,
                 list(str2lang("locf(WT, b, d, c)")))

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        cl.wt <- 0
        v.wt <- 0
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        add.sd <- 0.7
      })
      model({
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)+ WT ^ 2* cl.wt
        v <- exp(tv + eta.v+ WT * v.wt + b + c + d)
        linCmt() ~ add(add.sd)
      })
    }

    ui <- rxode(f)

    expect_null(ui$interpLines)

  })


  test_that("interp $simulationModel", {

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        cl.wt <- 0
        v.wt <- 0
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        add.sd <- 0.7
      })
      model({
        linear(WT)
        locf(b)
        nocb(c)
        midpoint(d)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)+ WT ^ 2* cl.wt
        v <- exp(tv + eta.v+ WT * v.wt + b + c + d)
        linCmt() ~ add(add.sd)
      })
    }

    ui <- rxode(f)

    expect_error(ui$simulationModel, NA)

    mod <- ui$simulationModel

    expect_true(rxModelVars(mod)$interp["WT"] == "linear")
    expect_true(rxModelVars(mod)$interp["b"] == "locf")
    expect_true(rxModelVars(mod)$interp["c"] == "nocb")
    expect_true(rxModelVars(mod)$interp["d"] == "midpoint")

    expect_error(ui$simulationIniModel, NA)

    mod <- ui$simulationIniModel

    expect_true(rxModelVars(mod)$interp["WT"] == "linear")
    expect_true(rxModelVars(mod)$interp["b"] == "locf")
    expect_true(rxModelVars(mod)$interp["c"] == "nocb")
    expect_true(rxModelVars(mod)$interp["d"] == "midpoint")

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        cl.wt <- 0
        v.wt <- 0
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        add.sd <- 0.7
      })
      model({
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)+ WT ^ 2* cl.wt
        v <- exp(tv + eta.v+ WT * v.wt + b + c + d)
        linCmt() ~ add(add.sd)
      })
    }

    ui <- rxode(f)


    expect_error(ui$simulationModel, NA)

    mod <- ui$simulationModel

    expect_true(rxModelVars(mod)$interp["WT"] == "default")
    expect_true(rxModelVars(mod)$interp["b"] == "default")
    expect_true(rxModelVars(mod)$interp["c"] == "default")
    expect_true(rxModelVars(mod)$interp["d"] == "default")

    expect_error(ui$simulationIniModel, NA)

    mod <- ui$simulationIniModel

    expect_true(rxModelVars(mod)$interp["WT"] == "default")
    expect_true(rxModelVars(mod)$interp["b"] == "default")
    expect_true(rxModelVars(mod)$interp["c"] == "default")
    expect_true(rxModelVars(mod)$interp["d"] == "default")


  })


  test_that("time varying character/factors should not be interpolated by linear solving", {

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        tviov.cl <- c(0, 0.1)
        iov.cl1 ~ fix(1)
        iov.cl2 ~ fix(1)
        add.sd <- 0.7
      })
      model({
        iov.cl <- sqrt(tviov.cl) * ((OCC=="first") * iov.cl1 +
                                      (OCC=="second") * iov.cl2)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)
        v <- exp(tv + eta.v)
        linCmt() ~ add(add.sd)
      })
    }


    et <- et(amt=100) %>%
      et(0:24) %>%
      as.data.frame()

    et$OCC  <- "first"
    et$OCC[et$time > 12] <- "second"

    f <- suppressWarnings(f()$simulationIniModel)
    expect_warning(rxSolve(f, et, covsInterpolation="linear"))
    expect_warning(rxSolve(f, et, covsInterpolation="nocb"), NA)
    expect_warning(rxSolve(f, et, covsInterpolation="locf"), NA)
    expect_warning(rxSolve(f, et, covsInterpolation="midpoint"))

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        tviov.cl <- c(0, 0.1)
        iov.cl1 ~ fix(1)
        iov.cl2 ~ fix(1)
        add.sd <- 0.7
      })
      model({
        midpoint(OCC)
        iov.cl <- sqrt(tviov.cl) * ((OCC=="first") * iov.cl1 +
                                      (OCC=="second") * iov.cl2)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)
        v <- exp(tv + eta.v)
        linCmt() ~ add(add.sd)
      })
    }

    f <- suppressWarnings(f()$simulationIniModel)

    expect_warning(rxSolve(f, et))

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        tviov.cl <- c(0, 0.1)
        iov.cl1 ~ fix(1)
        iov.cl2 ~ fix(1)
        add.sd <- 0.7
      })
      model({
        linear(OCC)
        iov.cl <- sqrt(tviov.cl) * ((OCC=="first") * iov.cl1 +
                                      (OCC=="second") * iov.cl2)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)
        v <- exp(tv + eta.v)
        linCmt() ~ add(add.sd)
      })
    }

    f <- suppressWarnings(f()$simulationIniModel)

    expect_warning(rxSolve(f, et))

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        tviov.cl <- c(0, 0.1)
        iov.cl1 ~ fix(1)
        iov.cl2 ~ fix(1)
        add.sd <- 0.7
      })
      model({
        nocb(OCC)
        iov.cl <- sqrt(tviov.cl) * ((OCC=="first") * iov.cl1 +
                                      (OCC=="second") * iov.cl2)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)
        v <- exp(tv + eta.v)
        linCmt() ~ add(add.sd)
      })
    }

    f <- suppressWarnings(f()$simulationIniModel)

    expect_warning(rxSolve(f, et), NA)

    f <- function() {
      ini({
        tka <- 0.45
        tcl <- log(c(0, 2.7, 100))
        tv <- 3.45
        eta.ka ~ 0.6
        eta.cl ~ 0.3
        eta.v ~ 0.1
        tviov.cl <- c(0, 0.1)
        iov.cl1 ~ fix(1)
        iov.cl2 ~ fix(1)
        add.sd <- 0.7
      })
      model({
        locf(OCC)
        iov.cl <- sqrt(tviov.cl) * ((OCC=="first") * iov.cl1 +
                                      (OCC=="second") * iov.cl2)
        ka <- exp(tka + eta.ka)
        cl <- exp(tcl + eta.cl)
        v <- exp(tv + eta.v)
        linCmt() ~ add(add.sd)
      })
    }

    f <- suppressWarnings(f()$simulationIniModel)

    expect_warning(rxSolve(f, et), NA)

  })
})
