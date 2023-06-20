#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long D[n+1];
    D[0]=1;
    D[1]=0;
    for(long long i=2;i<=n;i++){
        long long d=D[i-1]+D[i-2];        //using DP to calulate D[i] from D[i-1] and D[i-2]
        d=(i-1)*d;
        D[i]=d;
    }
    cout<<D[n]+n*D[n-1];            //Final answer
}
