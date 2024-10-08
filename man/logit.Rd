% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/utils.R
\name{logit}
\alias{logit}
\alias{expit}
\alias{logitNormInfo}
\alias{probitNormInfo}
\title{logit and inverse logit (expit) functions}
\usage{
logit(x, low = 0, high = 1)

expit(alpha, low = 0, high = 1)

logitNormInfo(mean = 0, sd = 1, low = 0, high = 1, abs.tol = 1e-06, ...)

probitNormInfo(mean = 0, sd = 1, low = 0, high = 1, abs.tol = 1e-06, ...)
}
\arguments{
\item{x}{Input value(s) in range [low,high] to translate -Inf to
Inf}

\item{low}{Lowest value in the range}

\item{high}{Highest value in the range}

\item{alpha}{Infinite value(s) to translate to range of [low,
high]}

\item{mean}{logit-scale mean}

\item{sd}{logit-scale standard deviation}

\item{abs.tol}{absolute accuracy requested.}

\item{...}{other parameters passed to \code{integrate()}}
}
\value{
values from logit and expit
}
\description{
logit and inverse logit (expit) functions
}
\details{
logit is given by:

logit(p) = -log(1/p-1)

where:

p = x-low/high-low

expit is given by:

expit(p, low, high) = (high-low)/(1+exp(-alpha)) + low

The \code{logitNormInfo()} gives the mean, variance and coefficient of
variability on the untransformed scale.
}
\examples{

logit(0.25)

expit(-1.09)

logitNormInfo(logit(0.25), sd = 0.1)

logitNormInfo(logit(1, 0, 10), sd = 1, low = 0, high = 10)

}
