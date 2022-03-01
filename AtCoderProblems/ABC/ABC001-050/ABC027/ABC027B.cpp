
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;   

int main(){
    int n, a, ans=0, sum=0;
    vector<int> population;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>a;
        population.push_back(a);
        sum+=a;
    }

    //島の間に着目。橋が必要か否かを左右の人数和から判別
    //そもそも人数が割り切れなければ-1を返す
    if(sum%n!=0){
        ans=-1;
    }else{
        for(int i=0; i<n-1; i++){
            int suml=0, sumr=0;
            for(int j=0; j<=i; j++){
                suml+=population[j];
            }
            for(int k=i+1; k<=n-1; k++){
                sumr+=population[k];
            }
            if(suml!=(sum/n)*(i+1)||sumr!=(sum/n)*(n-i-1)){
                ans+=1;
            }
        }

    }

    cout<<ans<<endl;


    
    return 0;
}