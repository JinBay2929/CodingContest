#include<iostream>
#include<string>
#include<stdio.h>


using namespace std;


int main(){
    int n, counter, time=0;
    int nums[200];
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>nums[i];
    }
    while(true){
        counter=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==0){
                counter++;
            }
        }
        
        if(counter!=n)break;

        for(int i=0; i<n; i++){
            nums[i]=nums[i]/2;
        }
        time++;
    }
    cout<<time<<endl;
    
    
    
    return 0;
}