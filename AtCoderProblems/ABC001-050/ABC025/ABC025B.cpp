#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using namespace std;   

int main(){
    int n, a, b, d, place=0;
    string s;
    cin>>n>>a>>b;

    for(int i=0; i<n; i++){
        cin>>s>>d;

        if(s=="East"){
            if(d<a){
                place+=a;
            }else if(a<=d&&d<=b){
                place+=d;
            }else{
                place+=b;
            }
        }else if(s=="West"){
            if(d<a){
                place-=a;
            }else if(a<=d&&d<=b){
                place-=d;
            }else{
                place-=b;
            }
        }
    }
    if(place>0){
        cout<<"East "<<place<<endl;
    }else if(place==0){
        cout<<0<<endl;
    }else{
        cout<<"West "<<abs(place)<<endl;
    }




   
    
    return 0;
}