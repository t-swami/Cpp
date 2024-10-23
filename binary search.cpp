#include<iostream>
using namespace std;
int binarySearch(int a[],int left,int right,int key){
	int mid = (left+right)/2;
	while(left <= right && a[mid] != key){
		 if(a[mid] < key )
		 {
			right = mid + 1;
		 }
		else
		{
			left = mid-1;
		}
		mid = (left + right)/2;
		 if(a[mid] == key)
		 {
			 return mid;
		 }
		else
		{
			return -1;
		}
}}

int main(){
	int arr[]={10,20,30,40,50,60,70,80};
	int key = 20;
	int n = sizeof(arr)/sizeof(arr[0]);
	int pos = binarySearch(arr,0,n-1,key);
	if(pos == -1)
	{
		cout<<"Key is not found"<<endl;
	}
	else
	{
		cout<<"Key "<<key<<" is found at the position "<<(pos+1)<<endl;
	}
	return 0;
}
