#include <iostream>
#include<string>
using namespace std;
int checkoccer(string str,char ch)
{
    int count =0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
            count++;
    }
    return count;
}

void lapin(string str)
{
    int len =str.length();
    string str1,str2;
    char ch;
    int flag=0,count1=0,count2=0;
    int mid = len/2;
    
    for(int i=0;i<mid;i++)
    { str1.push_back(str[i]); }

    for(int j=(len%2==0)?mid:mid+1;j<len;j++)
    { str2.push_back(str[j]);}

    for(int i=0;i<mid;i++)
    {
        ch = str1[i];
        count1  = checkoccer(str1,ch);
        count2  = checkoccer(str2,ch);
        if(count1!=count2)
        {
            flag=1;
            break;
        }

    }
    (flag==1)?cout<<"NO"<<endl:cout<<"YES"<<endl;
    
}
int main() {
	int n;
	string str;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
	    cin>>str;
	    lapin(str);
	}
	 
	return 0;
}
