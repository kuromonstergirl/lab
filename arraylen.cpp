#include<iostream>    
#include<array> 
using namespace std;
int main()
{
   int c;
   int arr[]={1,2,3,4,5,6,7,8,9,0};
   cout<<"The array is: ";
   for(auto i: arr)
   {
   		cout<<i<<" ";
   		c++;
   }
   cout<<"\nThe length of the given Array is: "<<c;
   
   return 0;
}
