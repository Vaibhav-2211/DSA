#include<iostream>
using namespace std;
int main(){
int i,j ,n ;
cin>>n;
i  = 1;
char ch ='A';
while (i<=n)
{ j = 1;
  while (j<=n)
  {
    
    cout<<ch;
    ch = ch+1;
    j++;
  }
   
    cout<<endl;
    i++;
}


return 0;

}
