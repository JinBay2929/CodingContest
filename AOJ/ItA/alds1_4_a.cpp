#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main(){
    int n, q, num, count=0;
    vector<int> S, T;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num);
        S.push_back(num);
    }
    scanf("%d", &q);
    for(int i=0; i<q; i++){
        scanf("%d", &num);
        T.push_back(num);
    }

    for(int i=0; i<q; i++){
        for(int j=0; j<n; j++){
            if(T[i]==S[j]){
                count++;
                break;
            }
        }
    }
    printf("%d\n", count);
}