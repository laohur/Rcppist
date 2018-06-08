\name{Rcppzlise}
\alias{Rcppzlise}

\title{
Rcppzlise
}
\description{
The normal distribution (Normal distribution), also known as the "normal distribution", also known as the Gauss distribution (Gaussian distribution), is first obtained by A. di MORF in the asymptotic formula for the two term distribution. C.F. Gauss studied the measurement error and derived it from another angle. P.S. Laplasse and Gauss studied the nature of it. It is a very important probability distribution in mathematics, physics, engineering and other fields. It has great influence in many aspects of statistics.
}
\details{

If the random variable X obeys a normal distribution with a mathematical expectation of 0 and a variance of sigma ^2, it is recorded as N (^2). Its probability density function is determined by the expected value of normal distribution. Its standard deviation sigma determines the magnitude of the distribution. The normal distribution is the standard normal distribution when the = 0, the sigma = 1

}
\examples{
#Rcppist::zlise(c(1:99))
#传入数值向量,返回数值向量
X<-runif(100)*100
X
Y<-Rcppist::zlise(X)
Y
#Y即X的z分数
}
