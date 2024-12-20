//sqrt of given number by bs
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number=";
  cin>>n;
  if(n<2)
  {
    cout<<n;
  }
  int start=0,end=n;
  int ans;
  while(start<=end)
  {
    int mid=(start+end)/2;
    if(mid*mid==n)
    {
      ans=mid;
      break;
    }
    else if(mid*mid<n)
    { 
      ans=mid;
      start=mid+1;
    }
    else
   {
    end=mid-1;}

  }
  cout<<ans;
  
  
}