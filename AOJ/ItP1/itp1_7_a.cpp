#include<iostream>
#include<stdio.h>
#include <vector>

using namespace std;


int main(){
    int m,f,r;
    char score;

    while(true){
        cin>>m>>f>>r;
        if(m==-1 && f==-1 && r==-1){
            break;
        }else if(m==-1||f==-1){
            cout<<'F'<<endl;
        }else{
            if(m+f>=80){
                score='A';
            }else if(65<=m+f&&m+f<80){
                score='B';
            }else if(50<=m+f&&m+f<65){
                score='C';
            }else if(30<=m+f&&m+f<50){
                score='D';
                if(r>=50){
                    score='C';
                }
            }else{
                score='F';
            }

            cout<<score<<endl;
        }

    }
        
    return 0;
}