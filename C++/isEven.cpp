#include<iostream>
#include<string>

int main(){
    std::string num;
    std::cin >> num;
    int n = int(num[(num.length()-1)]);
    if(n ^ 1 == n + 1)
        printf("Yes");
    else
        printf("No");
}
