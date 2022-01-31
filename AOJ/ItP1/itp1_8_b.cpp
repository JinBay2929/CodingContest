#include<iostream>
#include<string>

using namespace std;

//メモリの関係で大きすぎる数字をlong longに保持できない
//なので数字をstringで受け取り、一文字ずつ扱うようにする

//charの数字-'0'でintの数字に変換できる
//これもASCⅡのコードの関係
int main(){
    int num, sum;
    string str;
    while(true){
        sum=0;
        getline(cin, str);

        if(str[0]=='0'){break;}

        for(int i=0; i<str.size(); i++){
            num=str[i]-'0';
            //cout<<num<<endl;;
            sum+=num;
        }
        cout<<sum<<endl;
    }
    
    return 0;
}