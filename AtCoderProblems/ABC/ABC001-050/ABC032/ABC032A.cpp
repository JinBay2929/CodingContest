
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<iomanip>



using namespace std;   

int main(){
    int a, b, n;
    
    cin>>a>>b>>n;

    while(true){
        if(n%a==0 && n%b==0){
            break;
        }
        n++;
    }

    cout<<n<<endl;
    
    

    
    return 0;
}