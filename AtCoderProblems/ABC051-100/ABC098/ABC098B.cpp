
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int n, counter, max=0;
    string s, sone, stwo;
    

    cin>>n>>s;

    for(int i=1; i<n-1; i++){
        counter=0;

        sone=s.substr(0, i);
        stwo=s.substr(i, n-i);

        sort(sone.begin(), sone.end());
        sone.erase(unique(sone.begin(), sone.end()), sone.end());
        

        sort(stwo.begin(), stwo.end());
        stwo.erase(unique(stwo.begin(), stwo.end()), stwo.end());
        

        for(int j=0; j<sone.length(); j++){
            for(int k=0; k<stwo.length(); k++){
                if(stwo[k]==sone[j]){
                    counter++;
                    break;
                }
            }
        }
        if(counter>max){
            max=counter;
        }
    }
    
    cout<<max<<endl;
    
    return 0;
}