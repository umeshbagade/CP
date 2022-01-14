#include<iostream>
#include<math.h>
using namespace std;
int z(int n)
{
    int zeros=0,i=1;
    while(n/i >0)
    {
        i = i*5 ;
        zeros = zeros + n/i;
    }
    return zeros;
}
int main()
{
  int n,data;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>data;
    cout<<z(data)<<endl;
  }

  return 0;
}
