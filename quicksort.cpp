#include<iostream>
#include<stdlib.h>
using namespace std;
int partition(int a[],int low,int high);
void quicksort(int a[],int low,int high)
{
	if(low<high)
	{
		int pi;
		pi=partition(a,low,high);
		quicksort(a,low,pi-1);
		quicksort(a,pi+1,high);
	}
}
int partition(int a[],int low,int high)
{
	int pivot=a[high];
	 int i = (low-1);
	 for (int j = low; j <= high- 1; j++)
    {
        if (a[j] <= pivot)
        {
            i++;   
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return (i + 1);
}
int main()
{
	int a[20];
	int n;
	cout<<" enter no of elements ";
	cin>>n;
	cout<<"enter elements"<<endl;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
    cout<<"elements are "<<endl;
   	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
    quicksort(a,0,n-1);
     cout<<endl<<"sorted array is "<<endl;
    	for(int i=0;i<n;i++)
	{
		cout<<" "<<a[i];
	}
    return 0;
}
