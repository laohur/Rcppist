#include <Rcpp.h>
#include <cmath>

using namespace Rcpp; 

// [[Rcpp::export]]
NumericVector zlise (const NumericVector & X) {
    int n=X.size();
    NumericVector Y(n);
    double sum=0;
    for(int i=0; i<n; i++){
        sum+=X[i];
    }
    double avg=sum/n;
    double variance=0;
    for(int i=0; i<n; i++){
      variance+=pow((X[i]-avg),2);
    }
    variance=sqrt(variance);
    for(int i=0; i<n; i++){
        Y[i]=(X[i]-avg)/variance;
    }
    return Y;
}



