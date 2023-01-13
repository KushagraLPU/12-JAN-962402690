#include<iostream>
using namespace std;
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	int arr1[m][n],sum=0;
	cout<<"enter the element of first array matrix"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>arr1[i][j];
		}
	}
cout<<"enter the element of matrix is"<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}


for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0)
			sum=sum+arr1[i][j];
			
			else if(i==m-1)
			sum=sum+arr1[i][j];
			
			else
		{
				sum=sum+arr1[i][n-1-i];
				break;
			}}
	
	}
cout<<"The sum Aco to question is = "<<sum;
}
	
	
	

