
#include <Rcpp.h>
#include <cmath>
#include <stdlib.h>

using namespace Rcpp; 




struct node{
    long index;
    double value; 
};

int  compare( const void *a,  const void *b  ){
    struct node *aa=(node*)a;
    struct node *bb=(node*)b;
    return ((aa->value)<(bb->value)?-1:1);
}

// [[Rcpp::export]]
NumericVector csort (const NumericVector & X) {
    int n=X.size();
    node* array=new node[n];
    for(int i=0; i<n; i++){
        array[i].index=i;
        array[i].value=X[i];
    }
    qsort(array,n,sizeof(node),compare);
    NumericVector Y(n);
    for(int i=0; i<n; i++){
        Y[i]=array[i].index+1;
    }
    return Y;

}

// vector<-c(1,2,6,9,5,3,7,9,6)
// val <- csort(vector)
// val



