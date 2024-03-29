rxTest({
  withr::with_tempdir({
    test.dir <- tempfile("Rx_base-")
    dir.create(test.dir, showWarnings = FALSE)
    ode <- "d/dt(y) = r * y * (1.0 - y/K);"
    fn <- file.path(test.dir, "exam3.1.txt")
    writeLines(ode, fn)

    m1 <- rxode2(model = ode, modName = "m1")

    test_that("ODE inside a string", {
      expect_s3_class(m1, "rxode2")
    })

    m2 <- rxode2(filename = fn, modName = "f1")
    test_that("ODE inside a text file", {
      expect_s3_class(m2, "rxode2")
    })

    test_that("arguments model= and filename= are mutually exclusive.", {
      expect_error(rxode2(model = ode, filename = fn), "must specify exactly one of 'model' or 'filename'")
    })

    unlink(test.dir, recursive = TRUE)
  })
})
