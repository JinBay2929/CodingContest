
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    int noner=0;
    string s;
    

    for(int i=0; i<12; i++){
        cin>>s;
        if(find(s.begin(), s.end(), 'r')==s.end()){
            noner++;
        }
    }

    
    


    cout<<12-noner<<endl;


    
    return 0;
}