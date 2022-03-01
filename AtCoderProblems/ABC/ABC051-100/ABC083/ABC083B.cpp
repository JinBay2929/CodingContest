#include<iostream>
#include<string>
#include<stdio.h>


using namespace std;

//stringで受け取った関数の各桁の和を出す関数
int digitSum(string s){
    int sum=0;
    for(int i=0; i<s.length(); i++){
        sum+=s[i]-'0';
    }
    return sum;
}

int main(){
    int n, a, b, total=0;
    cin>>n>>a>>b;

    for(int i=1; i<=n; i++){
        string num=to_string(i);
        if(a<=digitSum(num)&&digitSum(num)<=b){
            total+=i;
        }
    }

    cout<<total<<endl;
    
    return 0;
}