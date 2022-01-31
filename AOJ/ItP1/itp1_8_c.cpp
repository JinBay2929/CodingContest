#include<iostream>
#include<string>

using namespace std;


int main(){
    int kosuu[26];
    char alphabet[26];
    string str;
    //個数を記録する配列とアルファベット配列の初期設定
    for(int i=0; i<26; i++){
        kosuu[i]=0;
        alphabet[i]='a'+i;
    }
    //受け取り続ける限りの実装がめんどかった
    //while(getline)でうまくいった
    while(getline(cin,str)){
        
        //大文字、小文字の場合を分けて考える。
        //ASCⅡを参照して差を使う
        for(int i=0; i<str.size(); i++){
            if(str[i]>='a'&&str[i]<='z'){
                kosuu[str[i]-'a']+=1;
            }else if(str[i]>='A'&&str[i]<='Z'){
                kosuu[str[i]-'A']+=1;
            }
        }
    }
    
    for(int i=0; i<26; i++){
        cout<<alphabet[i]<<" : "<<kosuu[i]<<endl;
    }
    
    
    return 0;
}