//#define _USE_MATH_DEFINESがないとM_PIが反応してくれなかった

#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>

using namespace std;


int main(){
    int a,b,c;
    double s,l,h;
    scanf("%d %d %d", &a, &b, &c);

    //double指定してないと切り捨てになる
    double kakudo=((double)c/180)*M_PI;

    s=0.5*a*b*sin(kakudo);
    l=a+b+sqrt(a*a+b*b-2*a*b*cos(kakudo));
    h=2*s/a;

    printf("%.16f\n%.16f\n%.16f\n", s, l, h);
    return 0;
}