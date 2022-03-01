
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    char c;
    
    for(int i=0; i<9; i++){
        cin>>c;
        if(i==0 || i==4 || i==8){
            cout<<c;
        }
    }
    cout<<endl;
    return 0;
}