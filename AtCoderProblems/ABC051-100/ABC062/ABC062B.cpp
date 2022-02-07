
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    int h, w;
    
    char as[100][100];
    
    cin>>h>>w;

    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>as[i][j];
        }
    }

   
    for(int i=0; i<w+2; i++){
        cout<<'#';
    }
    cout<<endl;

    for(int i=0; i<h; i++){
        for(int j=0; j<=w+1; j++){
            if(j==0 || j==w+1){
                cout<<'#';
            }else{
                
                cout<<as[i][j-1];
            }
        }
        cout<<endl;
    }
    for(int i=0; i<w+2; i++){
        cout<<'#';
    }
    cout<<endl;
    
    
 
    
    
    return 0;
}