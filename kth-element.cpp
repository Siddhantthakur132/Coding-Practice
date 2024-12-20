//kth missing element
#include<iostream>
using namespace std;
int main()
{
  int arr[6]={2,3,4,5,9,12};
  int k=2;
  int start=0,end=5,mid;
  int ans;
  while(start<=end)
  {
    mid=(start+end)/2;
    if((arr[mid]-mid-1)>=k)
    {
      ans=mid;
      
     end=mid-1;

      
    }
    else{
      start=mid+1;
    }
  }
  cout<<ans+k;
}