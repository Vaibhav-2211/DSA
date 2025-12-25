#include<iostream>
using namespace std;

void fun3(int n){
    if (n==0){
        cout<<"happy birthday\n";
        return;
    }
    cout<<n<<"days are left\n";
    fun3(n-1);

}
int main (){
    fun3(11  );
}