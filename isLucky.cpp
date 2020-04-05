#include <iostream>

using namespace std;

bool isLucky(int n)
 {
 static int counter=2;
  if(counter>n)
  return 1;

  if(n%counter==0)
  return 0;

  n=n-n/counter;
  counter++;
  return isLucky(n);
}

int main()
{
cout<<boolalpha;
int n;
cout<<"Enter a Number: ";
cin>>n;

cout<<isLucky(n);
}
