
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   

int main(){
    map<string, int> counter;
    string sa, sb, sc;
    char now='A', ans;
    cin>>sa>>sb>>sc;

    //カードを引ききってから一手回るとあがり
    //なので終了フラグxをついかする
    sa+="x"; sb+="x"; sc+="x";

    counter[sa]=0;
    counter[sb]=0;
    counter[sc]=0;

    int la=sa.length();
    int lb=sb.length();
    int lc=sc.length();

    while(true){
        if(now=='A'){
            if(sa[counter[sa]]=='a'){
                now='A';
                counter[sa]++;
            }else if(sa[counter[sa]]=='b'){
                now='B';
                counter[sa]++;
            }else if(sa[counter[sa]]=='c'){
                now='C';
                counter[sa]++;
            }else{
                counter[sa]++;
                break;
            }
        }else if(now=='B'){
            if(sb[counter[sb]]=='a'){
                now='A';
                counter[sb]++;
            }else if(sb[counter[sb]]=='b'){
                now='B';
                counter[sb]++;
            }else if(sb[counter[sb]]=='c'){
                now='C';
                counter[sb]++;
            }else{
                counter[sb]++;
                break;
            }
        }else{
            if(sc[counter[sc]]=='a'){
                now='A';
                counter[sc]++;
            }else if(sc[counter[sc]]=='b'){
                now='B';
                counter[sc]++;
            }else if(sc[counter[sc]]=='c'){
                now='C';
                counter[sc]++;
            }else{
                counter[sc]++;
                break;
            }
        }
    }

    // cout<<counter[sa]<<endl;
    // cout<<counter[sb]<<endl;
    // cout<<counter[sc]<<endl;


    if(counter[sa]==la){
        ans='A';
    }else if(counter[sb]==lb){
        ans='B';
    }else{
        ans='C';
    }



    
    
    cout<<ans<<endl;
    
    return 0;
}