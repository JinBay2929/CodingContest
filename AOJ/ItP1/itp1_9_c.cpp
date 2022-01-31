#include<iostream>
#include<string>

using namespace std;


int main(){
    int n, scoret=0, scoreh=0;
    string anit, anih;

    cin>>n;
    for(int i=0; i<n; i++){
        cin>>anit>>anih;
        //文字列も大小比較が可能
        //辞書の後ろに行くほど値が大きい
        if(anit>anih){
            scoret+=3; 
        }else if(anit==anih){
            scoret++; scoreh++;
        }else{
            scoreh+=3;
        }
    }
    
    cout<<scoret<<" "<<scoreh<<endl;
        

    return 0;
}