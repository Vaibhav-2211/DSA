#include<iostream>
using namespace std;
int main(){
int i,j ,n ;
cin>>n;
i  = 1;

while (i<=n)
{ 
    int space;
    space=i-1;
    while (space<=n)
{
    /* code */ cout << " ";
    space++;
}
int j =1;
  while (j<=n-i+1)
  {
    cout<<"*";
    
    j++;
  }
   
    cout<<endl;
    i++;
}


return 0;

}
