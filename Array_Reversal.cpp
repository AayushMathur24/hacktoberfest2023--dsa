#include <iostream>
using namespace std;
void func(int arr1[20],int n)
{
    int low=0,high=n-1,temp;
    while(low<high)
    {
        temp=arr1[high];
        arr1[high]=arr1[low];
        arr1[low]=temp;
        high--;
        low++;
    }
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
}
int main()
{
int arr1[20],n;
	cout<<"Enter number of elements : ";
    cin>>n;
    cout<<"Enter elements in array : ";
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    func(arr1,n);
return 0;} 
