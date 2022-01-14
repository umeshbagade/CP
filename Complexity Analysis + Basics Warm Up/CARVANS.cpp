#include<iostream>
#include<vector>
using namespace std;
int fastestCars(vector<int> speed,int n)
{
  int max_allowed=speed[0],count=1;
  for(int i=1;i<n;i++)
  {
    if(max_allowed>speed[i])
      {
        max_allowed = speed[i];
        count++;
      }
  }
  return count;
}
int main()
{
  int t,n;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>n;
    vector<int> speed(n);
    for(int i=0;i<n;i++)
      cin>>speed[i];
    cout<<fastestCars(speed,n)<<endl;
  }
}
