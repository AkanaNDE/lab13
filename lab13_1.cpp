#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
double sum ;
double SigA;
double PowA = 1 ;
double CC;
double Max =0;

void stat(const double A[],int N,double B[]){
    for(int i=0;i <N;i++){
    sum += A[i];
    }
    B[0]= sum/N;
    for(int l=0;l<N;l++){
     SigA += pow(A[l]-B[0],2) ;  
    }
    B[1]=sqrt(SigA/(N));
    float Z = 1.0/N;
    for(int m = 0; m<N ; m++){
        PowA *= A[m];
    }
    B[2]=pow(PowA,Z);
    
    for(int f=0;f<N;f++){
     CC += 1/A[f];   
    }
    B[3]=N/CC;
    for(int p=0;p<N-1;p++){
     if(A[p+1]<A[p]){
     B[5] = A[p+1];
     }
     if(B[5]>A[0]){
      B[5] =A[0] ; 
     }
     }
     for(int p=0;p<N;p++){
     if( Max <A[p]){
     Max = A[p];
    }
    B[4] = Max;
    }
}