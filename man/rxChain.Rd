% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/rxode2.R
\name{rxChain}
\alias{rxChain}
\alias{+.solveRxDll}
\title{rxChain  Chain or add item to solved system of equations}
\usage{
rxChain(obj1, obj2)

\method{+}{solveRxDll}(obj1, obj2)
}
\arguments{
\item{obj1}{Solved object.}

\item{obj2}{New object to be added/piped/chained to solved object.}
}
\value{
When \code{newObject} is an event table, return a new
solved object with the new event table.
}
\description{
Add item to solved system of equations
}
\author{
Matthew L. Fidler
}
\keyword{internal}
