#include<iostream>
using namespace std;
int main()
{
int n,i;
int max=INT_MIN;
int min=INT_MAX;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
cin>>arr[i];

for(i=0;i<n;i++)
{
	if(max<arr[i])
	max=arr[i];
	if(min>arr[i])
	min=arr[i];
}

cout<<"the range = "<<max-min;

}
