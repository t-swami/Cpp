#include<stdio.h>
#include<iostream>
using namespace std;


int insert(int a[],int n,int key, int pos){
	for(int i = n-1;i>=pos;i--){
		a[i+1]=a[i];
	}
	//Inserting the element
	a[pos]=key;
	//incremented the value of n:
	n++;
	return n;
}

void display(int a[],int n){
	cout<<"After the insertion:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
		}
}
int main(){
	int arr[6]={10,20,30};
	int n=3,key=15,pos=0;
	n=insert(arr,n,key,pos);
	display(arr,n);
	return 0;
}
