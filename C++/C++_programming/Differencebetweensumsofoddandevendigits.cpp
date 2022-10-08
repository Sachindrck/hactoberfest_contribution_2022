#include<bits/stdc++.h>
using namespace std;
bool diff(long long n){
    return (n%11==0);
}
int main(){
    long long int n;
    cin>>n;
    if(diff(n))
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}