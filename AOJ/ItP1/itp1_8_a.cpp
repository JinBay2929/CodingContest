#include<iostream>
#include<string>

using namespace std;

int main(){
  string str;
  //文字列を受け取ってstrに入れる
  getline(cin,str);
  
  for(int i=0; i<str.size(); i++){
    //'a'とかはASCⅡにおける数字を参照している。
    //'a'=97, 'A'=65など
    //abcde...は順に並んでいるので'A'-'a'で大文字小文字のインデックスの差をとれる
    if(str[i]>='a'&&str[i]<='z') str[i]+='A'-'a';
    else if(str[i]>='A'&&str[i]<='Z') str[i]+='a'-'A';
  }
    cout << str << endl;
  return 0;
}