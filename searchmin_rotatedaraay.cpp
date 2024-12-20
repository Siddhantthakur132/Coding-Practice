#include<iostream>
using namespace std;
int main()
{
int arr[6]={4,5,6,1,2};
int ans,mid,start=0,end=5;
ans=arr[0];
while(start<=end)
{
  mid=(start+end)/2;
  if(arr[mid]>=arr[0])
  {
    start=mid+1;
  }
  else{
    ans=arr[mid];
    end=mid-1;
  }
}
cout<<ans;
}