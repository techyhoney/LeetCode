#include <iostream>

using namespace std;

int main()
{

int o[9],aux[9],top2=-1,top=-1,data1,data2,c=0,i=0;
bool result=true;
cout<<boolalpha;
cout<<"Enter 9 Elements: "<<endl;
    while(i<9)
    {
        top++;
        cout<<"Enter "<<top+1<<" element: ";
            cin>>o[top];
            i++;
    }
i=0;
while(i<9)
{
    top2++;
    c++;
    aux[top2]=o[top];
    top--;
    i++;
}

while(top2!=-1)
{    if(c==1){
      top++;
       o[top]=aux[top2];
       top2--;
       c--;
}   else
{
    data1=aux[top2];
    top2--;
    data2=aux[top2];
    top2--;
    c=c-2;
}
if(data1-data2 == 1 || data1-data2 == -1 )
        result=true;

    else
    {
        result=false;
        break;
}
}
cout<<result;
}
