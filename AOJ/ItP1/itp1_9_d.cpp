#include<iostream>
#include<string>
#include<stdio.h>

using namespace std;


int main(){
    string str, order, text;
    int q;
    int a, b;
    cin>>str;
    cin>>q;

    for(int i=0; i<q; i++){
        cin>>order;
        if(order=="print"){
            
            scanf("%d %d", &a, &b);
            for(int j=0; j<b-a+1; j++){
                cout<<str[a+j];
            }
            cout<<endl;
        }else if(order=="reverse"){
            
            //一時保存リストを作って入れ替える戦法やと時間がかかりすぎた。
            //なのでswap。
            char tmp[101];
            scanf("%d %d", &a, &b);
            for(int i=0; i<(b-a+1)/2; i++){
                swap(str[a+i], str[b-i]);
            }
        }else if(order=="replace"){
            cin>>a>>b>>text;

            for(int i=0; i<b-a+1; i++){
                str[a+i]=text[i];
            }
        }
    }
    return 0;
}