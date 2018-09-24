#include <iostream>
#include "task4.h"
using namespace std;

int main() {
  int size_of_array,i,choice;
  cout<<"enter size of array=";cin>>size_of_array;
  int array[size_of_array];
  for(i=0;i<size_of_array;i++)
  {
    cout<<"enter array values=";cin>>array[i];
  }

  cout<<"********* \n";
  cout<<"********* \n";

  cout<<"press 1 for reverse_array"<<endl;
  cout<<"press 2 for rotate_array"<<endl;
  cout<<"press 3 for sort_array"<<endl;
  cout<<"press 4 for search_unsorted"<<endl;
  cout<<"press 5 for search_sorted"<<endl;

  cout<<"********* \n";
  cout<<"********* \n";

  cout<<"enter choice";cin>>choice;

  if(choice==1)
  {
    reverse_array(array,size_of_array);
  }
  if(choice==2)
  {
    rotate_array(array,size_of_array);
  }
  /*
  if(choice==3)
  {
    sort_array(array,size_of_array);
  }
  if(choice==4)
  {
    search_unsorted(array,size_of_array);
  }
  if(choice==5)
  {
    search_sorted(array,size_of_array);
  } */

  return 0;
}
