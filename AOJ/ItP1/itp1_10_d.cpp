#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>
#include <cstdlib>  // abs() for integer
#include <cmath>    // abs() for float, and fabs()

using namespace std;


int main(){
    int n;
    double d1=0, d2, d3, d4;
    
    
    
    double x[100], y[100];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    for(int i=0; i<n; i++){
        cin>>y[i];
    }

    //p=1
    for(int i=0; i<n; i++){
        d1+=abs(x[i]-y[i]);
    }

    //p=2
    double tmp=0;
    for(int i=0; i<n; i++){
        tmp+=pow(x[i]-y[i], 2);
    }
    d2=sqrt(tmp);

    //p=3
    tmp=0;
    for(int i=0; i<n; i++){
       tmp+=pow(abs(x[i]-y[i]), 3);
    }
    d3=cbrt(tmp);

    //p=∞
    double max=0;
    tmp=0;
    for(int i=0; i<n; i++){
        tmp=abs(x[i]-y[i]);
        if(tmp>max){max=tmp;}
    }
    d4=max;
    
    printf("%.8lf\n", d1);
    printf("%.8lf\n", d2);
    printf("%.8lf\n", d3);
    printf("%.8lf\n", d4);
    
    return 0;
}