#include<iostream>
#include<string>
#include<stdio.h>
#include<cmath>

using namespace std;


int main(){
    double x1, x2, y1, y2;
    double distance;
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    distance = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    //%.Xlfで小数点以下の桁数を指定できる
    printf("%.8lf\n", distance);
    return 0;
}