#include <iostream>


int reverse_array(int array[],int size_of_array)
{

  int i,j=size_of_array-1,temp;
  for(i=0;i<j;i++)
  {
    while(true)
    {
      temp=array[i];
      array[i]=array[j];
      array[j]=temp;
      break;
    }
    j--;
  }
  for(i=0;i<size_of_array;i++)
  {
    std::cout<<array[i]<<std::endl;
  }
}

int rotate_array(int array[],int size_of_array)
{
  int i,j,temp,rotate;
  std::cout<<"enter rotations=";std::cin>>rotate;
  for(j=0;j<rotate;j++)
  {
    temp=array[0];
    for(i=0;i<size_of_array;i++)
    {
      array[i]=array[i+1];
    }
    array[size_of_array-1]=temp;
  }
  for(i=0;i<size_of_array;i++)
    std::cout<<array[i]<<std::endl;
}

int sort_array(int array[],int size_of_array)
{
  int i,j,temp;
  for(j=0;j<=size_of_array;j++)
  {
    for(i=j;i<size_of_array;i++)
    {
      if(array[j]>array[i])
      {
        temp=array[j];
        array[j]=array[i];
        array[i]=temp;
      }
    }
  }
  std::cout<<"sorted list=";
  for(i=0;i<size_of_array;i++)
    std::cout<<std::endl<<array[i];
}

int search_unsorted(int array[],int size_of_array)
{
  int i,num_to_be_found;
  std::cout<<"number to be found=";std::cin>>num_to_be_found;
  for(i=0;i<=size_of_array;i++)
  {
    if(num_to_be_found==array[i])
      {std::cout<<"location of number ="<<i<<std::endl;
      return 0;}
  }
    std::cout<<std::endl<<"Number is not present!!  \n";
    return 0;
}

int search_sorted(int array[],int size_of_array, int num_to_be_found,int index)
{

  /*int i,j,temp;
  for(j=0;j<=size_of_array;j++)
  {
    for(i=j;i<size_of_array;i++)
    {
      if(array[j]>array[i])
      {
        temp=array[j];
        array[j]=array[i];
        array[i]=temp;
      }
    }
  }
  std::cout<<"sorted list=";
  for(i=0;i<size_of_array;i++)
    std::cout<<std::endl<<array[i]; */





    if(num_to_be_found==array[index])
      {std::cout<<"location of number ="<<index<<std::endl;}

      else if(num_to_be_found>array[index])
      search_sorted(array,size_of_array,num_to_be_found,index+1);

      else if(size_of_array<=index)
        std::cout<<"Number not found!!"<<std::endl;



}
