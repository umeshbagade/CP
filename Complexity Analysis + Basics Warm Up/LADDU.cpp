#include<iostream>
using namespace std;
int main()
{
  int t,n;
  string activity,origin;
  cin>>t;
  while(t>0)
  {
    int laddus=0,data,months;
    cin>>n>>origin;

    for(int i=0;i<n;i++)
    {
      cin>>activity;
      if(activity=="TOP_CONTRIBUTOR")
        laddus = laddus+300;
      else if(activity=="CONTEST_HOSTED")
        laddus = laddus+50;
      else if(activity=="BUG_FOUND")
        {
          cin>>data;
          laddus = laddus+data;
        }
      else if(activity=="CONTEST_WON")
      {
        cin>>data;
        if(data>20)
          laddus=laddus+300;
        else
          laddus = laddus+300+(20-data);
      }
    }
    if(origin=="INDIAN")
      months = laddus/200;
    else if(origin=="NON_INDIAN")
      months = laddus/400;
  
    cout<<months<<endl;
    t--;
  }
  return 0;
}
