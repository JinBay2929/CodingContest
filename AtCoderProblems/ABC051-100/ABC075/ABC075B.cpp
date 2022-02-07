
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

char cadd(char c){
    int ic=int(c-'0');
    ic++;
    char cic=ic+'0';
    return cic;
}

int main(){
    int h, w;
    string s;
    //元々のリストcsを取り囲むようにリストcnumsを大きめに作る。
    //これで数字を加えるプロセスを分割しないで済む
    char cs[50][50], cnums[52][52];
    cin>>h>>w;

    for(int i=0; i<h; i++){
        cin>>s;
        for(int j=0; j<w; j++){
            cs[i][j]=s[j];
        }
    }
    
    //数字リストを全部0で埋める
    for(int i=0; i<h+2; i++){
        for(int j=0; j<w+2; j++){
            cnums[i][j]='0';
        }
    }
    //シャープの部分を答えのリストに加えておく
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            if(cs[i][j]=='#'){
                cnums[i+1][j+1]='#';
            }
        }
    }
    
    
    for(int i=1; i<h+1; i++){
        for(int j=1; j<w+1; j++){
            if(cnums[i][j]=='#'){
                if(cnums[i-1][j-1]!='#'){
                    cnums[i-1][j-1]=cadd(cnums[i-1][j-1]);
                }
                if(cnums[i-1][j]!='#'){
                    cnums[i-1][j]=cadd(cnums[i-1][j]);
                }
                if(cnums[i-1][j+1]!='#'){
                    cnums[i-1][j+1]=cadd(cnums[i-1][j+1]);
                }
                if(cnums[i][j-1]!='#'){
                    cnums[i][j-1]=cadd(cnums[i][j-1]);
                }
                if(cnums[i][j]!='#'){
                    cnums[i][j]=cadd(cnums[i][j]);
                }
                if(cnums[i][j+1]!='#'){
                    cnums[i][j+1]=cadd(cnums[i][j+1]);
                }
                if(cnums[i+1][j-1]!='#'){
                    cnums[i+1][j-1]=cadd(cnums[i+1][j-1]);
                }
                if(cnums[i+1][j]!='#'){
                    cnums[i+1][j]=cadd(cnums[i+1][j]);
                }
                if(cnums[i+1][j+1]!='#'){
                    cnums[i+1][j+1]=cadd(cnums[i+1][j+1]);
                }
            }
        }
    }
    //出力
    for(int i=1; i<h+1; i++){
        for(int j=1; j<w+1; j++){
            cout<<cnums[i][j];
        }
        cout<<endl;
    }

   
    
    return 0;
}