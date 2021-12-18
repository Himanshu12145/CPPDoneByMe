#include <iostream>
using namespace std;

int main() {
    int number_of_array;
    long long array_size;
    cin>>number_of_array;
    long long *arr;
    for(long long j=0;j<number_of_array;j++)
       long long *arr[j]= new long long[array_size];
    for(long long j=0;j<number_of_array;j++)  {
        cin>>array_size;
        for(long long i=0;i<array_size;i++)
          {
               cin>>arr[j][i];
          }
    }
    
    
    long long m,l,h, temp=0;
    for(long long i=0;i<number_of_array;i++)
    {
       m=l=0;
       h=array_size-1;
       while(m<=h)
       {
           if(arr[i][m]==0)
           {
              temp=arr[i][m];
              arr[i][m]=arr[i][l];
              arr[i][l]=temp;
              m++;
              l++;
           }
           else if(arr[i][m]==1)
           {
               m++;
           }
           else if(arr[i][m]==2)
           {
               temp=arr[i][m];
               arr[i][m]=arr[i][h];
               arr[i][h]=temp;
               h--;
           }
       }
    }
    for(int i=0;i<number_of_array;i++)
    {
        for(int j=0;j<array_size;j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }
    
    
    
    
    
    
    
    

	return 0;
}