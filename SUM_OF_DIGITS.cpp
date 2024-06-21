#include<bits/stdc++.h>
using namespace std;
#define ll long long
 int main(){

ll n,sum=0;
cin >> n;
ll temp = n;
while(temp){

sum+=temp%10;
temp=temp/10;

}

cout << sum << endl;

    return 0;
 }
