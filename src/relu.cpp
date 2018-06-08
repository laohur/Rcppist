
#include <Rcpp.h>
#include <cmath>

using namespace Rcpp; 

//放弃，r丢失精度

// [[Rcpp::export]]
NumericVector relu(const NumericVector & X) {
    int n=X.size();
    NumericVector Y(n);
    double alpha = 1.6732632423543772848170429916717;
    double scale = 1.0507009873554804934193349852946;
    for(int i=0; i<n; i++){
        double x=X[i];
        Y[i]=x>0?scale*x:scale*alpha*(exp(x)-1);
    }
    return Y;
}



