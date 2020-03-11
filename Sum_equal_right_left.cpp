#include <iostream>
using namespace std;
int main()
{
    int i=0,j=4,sum1=0,sum2=0;
    int a[] = {1,2,3,4,6};
     sum2=sum2+a[j];
    for(i=0;sum1!=sum2;i++)
    {
        sum1=sum1+a[i];
        if(sum1>sum2)
        {  sum2=sum2+a[j];
            j--;
        }
    }
    
    cout<<"Answer is: "<<a[i];
}
  
