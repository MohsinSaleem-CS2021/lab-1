#include <iostream>
using namespace std;

float interest_calculator(float , float , float);

int main() {
  float ans,amount,no_of_years,interest;
  cout<<"enter Amount=";cin>>amount;
  cout<<"enter no of years=";cin>>no_of_years;
  cout<<"enter interest=";cin>>interest;
  ans=interest_calculator(amount,no_of_years,interest);
  cout<<"new amount ="<<ans<<endl;
  return 0;
}
float interest_calculator(float amount , float no_of_years , float interest)
{
  float profit;
  int count;
  for(count=1;count<=no_of_years;count++)
  {
    profit=(amount*interest)/100;
    amount=profit+amount;
  }
  return amount;
}
