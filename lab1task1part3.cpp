#include<iostream>
using namespace std;

int main() {
  int count,number,factor=0;
  cout<<"number =";cin>>number;
  if(number==1)
    cout<<"not prime"<<endl;
  for(count=1;count<=number;count++)
  {
    if(number%count==0)
    {
      factor++;
    }
  }
  if(factor==2)
    cout<<"prime"<<endl;
  else
    cout<<"not prime"<<endl;
}
