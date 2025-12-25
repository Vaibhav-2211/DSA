#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    
    for(int i=0;i<=n;i++){
        int temp;
        temp=a+b;
        cout<<temp<<endl;
        a=b;
        b=temp;
    }
}