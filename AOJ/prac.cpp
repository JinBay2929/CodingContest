
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    string sa, sb, sc, next=sa;
    cin>>sa>>sb>>sc;

    int numa=sa.length();
    int numb=sb.length();
    int numc=sc.length();

    // while(numa>0 && numb>0 && numc>0){
    //     if(next[0]=='a'){
    //         sa.erase(sa.begin());
    //         numa--;
    //         next=sa;
    //     }else if(next[0]=='b'){
    //         sb.erase(sb.begin());
    //         numb--;
    //         next=sb;
    //     }
    // }

    cout<<ans<<endl;
    
    return 0;
}