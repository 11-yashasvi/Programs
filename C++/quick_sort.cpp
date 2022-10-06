#include <iostream>


using namespace std;


void swap(int* x , int* y)
{
int t=*x;
*x=*y;
*y=t;


}


int partition(int arr[] , int low , int high)
{
int pivot=arr[high]; int i=low-1;
for(int j=low;j<=high-1;j++)
{
if(arr[j]<pivot)
{
i++;
swap(&arr[i] , &arr[j]);


}
}
swap(&arr[i+1] , &arr[high]);
 
return (i+1);


}




void quicksort(int arr[] , int low , int high)
{
if(low<high)
{
int in=partition(arr , low , high);


quicksort(arr , low , in-1); quicksort(arr , in+1 , high);
}
}


void printarray(int arr[] , int size)
{
int i=0; for(i=0;i<size;i++)
{
cout<<arr[i]<<" ";
}
cout<<endl;
}
int main()
{
int arr[]={10,30,80,90,50,70,40};
int n = sizeof(arr)/sizeof(arr[0]); quicksort(arr , 0 ,n-1);
cout<<" sorted array :"<<endl;
 
printarray(arr , n); return 0;
}

