#include<bits/stdc++.h>
using namespace std;
int sol(vector<int> &v){
    int sum=0;
    int n=v.size()+1;
    int tot=(n*(n+1)/2);
    for(auto a : v){
        sum+=a;
    }
    return abs(tot-sum);
}
int main(){
    vector<int>v={1,2,4};
    int ans = sol(v);
    cout<<ans<<endl;
    return 0;
}
