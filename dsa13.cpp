#include<iostream>
using namespace std;
int main(){
int i,j ,n ;
cin>>n;
i  = 1;

while (i<=n)
{ j = 1;
    char ch='A'+n-i;
  while (j<=i)
  {
    cout<<ch;
    ch++;
    j++;
  }
   
    cout<<endl;
    i++;
}


return 0;

}
