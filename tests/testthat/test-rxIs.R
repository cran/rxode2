rxTest({
  test_that("rxIs tests", {
    skip_if_not(file.exists(test_path("test-data-setup.qs")))
    dat <- qs::qread(test_path("test-data-setup.qs"))
    dat <- tibble::as_tibble(dat)
    expect_true(rxIs(dat, "data.frame"))
    expect_true(rxIs(dat, "tbl"))
    expect_true(rxIs(dat, "tbl_df"))
    expect_true(rxIs(dat, "event.data.frame"))
    expect_true(rxIs(dat, "rx.event"))
    dat2 <- dat %>%
      dplyr::mutate(amt = AMT, evid = EVID, time = TIME) %>%
      dplyr::select(-AMT, -EVID, -TIME)
    expect_true(rxIs(dat2, "event.data.frame"))
    expect_true(rxIs(dat2, "rx.event"))
    dat3 <- dat %>%
      dplyr::mutate(Amt = AMT, Evid = EVID, Time = TIME) %>%
      dplyr::select(-AMT, -EVID, -TIME)
    expect_true(rxIs(dat3, "event.data.frame"))
    expect_true(rxIs(dat3, "rx.event"))
    dat4 <- dat %>%
      dplyr::mutate(AMt = AMT, EVid = EVID, TIme = TIME) %>%
      dplyr::select(-AMT, -EVID, -TIME)
    expect_false(rxIs(dat4, "event.data.frame"))
    expect_false(rxIs(dat4, "rx.event"))
    dat <- as.data.frame(dat)
    expect_true(rxIs(dat, "data.frame"))
    expect_false(rxIs(dat, "tbl"))
    expect_false(rxIs(dat, "tbl_df"))
    expect_true(rxIs(dat, "event.data.frame"))
    expect_true(rxIs(dat, "rx.event"))
    expect_false(rxIs(as.matrix(dat), "event.data.frame"))
    expect_true(rxIs(as.matrix(dat), "rx.event"))
    expect_true(rxIs(as.matrix(dat), "event.matrix"))
    dat2 <- dat %>%
      dplyr::mutate(amt = AMT, evid = EVID, time = TIME) %>%
      dplyr::select(-AMT, -EVID, -TIME)
    expect_true(rxIs(dat2, "event.data.frame"))
    expect_true(rxIs(dat2, "rx.event"))
    expect_true(rxIs(as.matrix(dat2), "event.matrix"))
    expect_true(rxIs(as.matrix(dat2), "rx.event"))
    dat3 <- dat %>%
      dplyr::mutate(Amt = AMT, Evid = EVID, Time = TIME) %>%
      dplyr::select(-AMT, -EVID, -TIME)
    expect_true(rxIs(dat3, "event.data.frame"))
    dat4 <- dat %>%
      dplyr::mutate(AMt = AMT, EVid = EVID, TIme = TIME) %>%
      dplyr::select(-AMT, -EVID, -TIME)
    expect_false(rxIs(as.matrix(dat4), "event.matrix"))
    expect_false(rxIs(as.matrix(dat4), "rx.event"))
    expect_false(rxIs(dat4, "event.data.frame"))
    expect_false(rxIs(dat4, "rx.event"))
    expect_false(rxIs(as.matrix(dat4), "event.matrix"))
    a <- numeric()
    expect_true(rxIs(a, "numeric"))
    a <- numeric(1)
    expect_true(rxIs(a, "numeric"))
    a <- matrix(a)
    expect_true(rxIs(a, "numeric.matrix"))
    expect_false(rxIs(a, "integer.matrix"))
    expect_false(rxIs(a, "logical.matrix"))
    expect_false(rxIs(a, "character.matrix"))
    expect_true(rxIs(a, "matrix"))
    a <- integer()
    expect_true(rxIs(a, "integer"))
    a <- integer(1)
    expect_true(rxIs(a, "integer"))
    a <- matrix(a)
    expect_false(rxIs(a, "numeric.matrix"))
    expect_true(rxIs(a, "integer.matrix"))
    expect_false(rxIs(a, "logical.matrix"))
    expect_false(rxIs(a, "character.matrix"))
    expect_true(rxIs(a, "matrix"))
    a <- logical()
    expect_true(rxIs(a, "logical"))
    a <- logical(1)
    expect_true(rxIs(a, "logical"))
    a <- matrix(a)
    expect_false(rxIs(a, "numeric.matrix"))
    expect_false(rxIs(a, "integer.matrix"))
    expect_true(rxIs(a, "logical.matrix"))
    expect_false(rxIs(a, "character.matrix"))
    expect_true(rxIs(a, "matrix"))
    a <- character()
    expect_true(rxIs(a, "character"))
    a <- character(1)
    expect_true(rxIs(a, "character"))
    a <- matrix(a)
    expect_false(rxIs(a, "numeric.matrix"))
    expect_false(rxIs(a, "integer.matrix"))
    expect_false(rxIs(a, "logical.matrix"))
    expect_true(rxIs(a, "character.matrix"))
    expect_true(rxIs(a, "matrix"))
    expect_true(rxIs(list(a = "b"), "list"))
    expect_true(rxIs(list(), "list"))
    expect_true(rxIs(list("b"), "list"))
    expect_false(rxIs(logical(), "list"))
    expect_false(rxIs(1.3, "integer"))
    expect_false(rxIs(1L, "numeric"))
    expect_false(rxIs(TRUE, "numeric"))
    expect_false(rxIs(list("b"), "numeric"))
    mod <- rxode2("
a = 6
b = 0.6
d/dt(intestine) = -a*intestine
d/dt(blood)     = a*intestine - b*blood
")
    expect_true(rxIs(mod, "rxode2"))
  })
})
