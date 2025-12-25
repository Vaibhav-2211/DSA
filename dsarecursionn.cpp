#include<iostream>
using namespace std;
void func3(int n){
    cout<<n<<"days to birthday"<<endl;
    func2(n-1);

void func2(int n){
    cout<<n<<"days to birthday"<<endl;
    func1(n-1);
}

void func1(int n){
    cout<<n<<"days to birthday"<<endl;
    func0(n-1)
}
void func0(int n){
    cout<<"HAPPY BIRTHDAY"<<endl;
}}
int main(){
    func3(3);
  
}
