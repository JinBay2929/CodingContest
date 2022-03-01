#include<iostream>
#include<string>
#include<vector>


using namespace std;

int main(){
    //errが１なら問題ない
    bool err=1;
    string s, t;

    cin>>s>>t;

    //先頭から一文字ずつチェックしていく
    for(int i=0; i<s.length(); i++){
        //sとtで文字の不一致が発生した場合
        if(s[i]!=t[i]){
            err=0;
            if(s[i]=='@'&&(t[i]=='a'||t[i]=='t'||t[i]=='c'||
            t[i]=='o'||t[i]=='d'||t[i]=='e'||t[i]=='r')){
                err=1;
            }else if(t[i]=='@'&&(s[i]=='a'||s[i]=='t'||s[i]=='c'||
            s[i]=='o'||s[i]=='d'||s[i]=='e'||s[i]=='r')){
                err=1;
            }
        }

        if(err==0){
            break;
        }
    }

    if(err){
        cout<<"You can win"<<endl;
    }else{
        cout<<"You will lose"<<endl;
    }

    

    return 0;
}