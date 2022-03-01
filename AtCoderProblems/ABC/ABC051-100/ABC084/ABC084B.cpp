
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>



using namespace std;   


int main(){
    int a, b;
    int counter=0;
    string ans="No";
    vector<char> nums;
    string s;
    cin>>a>>b>>s;

    for(int i=0; i<10; i++){
        nums.push_back((char)(i+'0'));
    }

    if(s[a]=='-'){
        for(int i=0; i<a; i++){
            if(find(nums.begin(), nums.end(), s[i])!=nums.end()){
                counter++;
            }
        }
        for(int i=a+1; i<a+b+1; i++){
            if(find(nums.begin(), nums.end(), s[i])!=nums.end()){
                counter++;
            }
        }
        if(counter==s.length()-1){
            ans="Yes";
        }
    }



    cout<<ans<<endl;
    return 0;
}