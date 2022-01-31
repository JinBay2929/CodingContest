#include<iostream>
#include<string>

using namespace std;


int main(){
    int counter;
    string s, p, ss;

    getline(cin, s);
    getline(cin, p);

    //長さの制約的に、二周分のsを確保して一致するか否か検証すればいい。
    ss=s+s;
    counter=0;
    for(int i=0; i<=ss.length()-p.length(); i++){
        if(ss[i]==p[0]&&counter!=p.length()){
            counter=0;
            for(int j=0; j<p.length(); j++){
                if(ss[i+j]==p[j]){counter++;}
                //cout<<counter<<endl;
            }
        }
    }
    if(counter==p.length()){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }


    return 0;
}