
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

#include<cmath>
#include<map>
#include <iomanip>
#include <iterator>




using namespace std;   


//実行速度でTLEギリギリだとscanf, printfの部分でも生死が分かれる
int main(){
    int n, a, len=0;
    vector<int> balls;
    cin>>n;

    for(int i=0; i<n; i++){
        scanf("%d", &a);
        balls.push_back(a);

        len++;

        if(len>a-1){
           
            int counter=1;
            for(int j=1; j<a; j++){
                if(balls[len-j-1]==a){
                    counter++;
                }else{
                    break;
                }
            }
            if(counter==a){
                for(int k=0; k<a; k++){
                    balls.pop_back();
                }
                len-=a;
            }
            
        }
        printf("%d\n", len);
    }
    
    
    return 0;
}