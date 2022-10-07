//implementation of stack using two queue
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q1,q2;
    public:
void push(int val){
    q1.push(val);
while(!q2.empty()){
    q1.push(q2.front());
    q2.pop();
}
swap(q1,q2);


}
void pop(){
if(q2.empty()){
    return;
}
q2.pop();

}
int top(){
    if(q2.empty()){
    return -1;
}
int x=q2.front();
return x;
}};
int main(){
Stack s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
cout<<s.top()<<endl;
s.pop();
s.push(6);
    return 0;
}