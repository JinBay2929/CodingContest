#include<iostream>
#include<string>
#include<stdio.h>
#include<math.h>

using namespace std;


int main(){
    int n;
    
    while(true){
        //思考停止でdouble統一したら通った
        int n;
        double sum=0;
        double nums[1000];
        double avg, qsum=0;
        double sigma2;

        scanf("%d", &n);
        if(n==0)break;

        for(int i=0; i<n; i++){
            cin>>nums[i];
            sum+=nums[i];
        }

        avg=sum/n;

        for(int i=0; i<n; i++){
            qsum+=pow((nums[i]-avg), 2);
        }

        sigma2=qsum/n;
        printf("%.8f\n", sqrt(sigma2));

    }
    return 0;
}