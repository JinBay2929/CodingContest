#include<iostream>
#include<string>


using namespace std;

int main(){
    int m;
    cin>>m;

    if(m<100){
        cout<<"00"<<endl;
    }else if(100<=m&&m<=5000){
        if(m<1000){
            cout<<'0'<<m/100<<endl;
        }else{
            cout<<m/100<<endl;
        }
    }else if(6000<=m&&m<=30000){
        cout<<m/1000+50<<endl;
    }else if(35000<=m&&m<=70000){
        cout<<(m/1000-30)/5+80<<endl;
    }else{
        cout<<89<<endl;
    }

    

    return 0;
}