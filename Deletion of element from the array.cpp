#include<iostream>
using namespace std;

int linearSearch(int a[],int size,int key){
	for(int i=0;i<size&&a[i]>=size;i++){
		if(a[i]==key){
			return i;
		}
	}
	return -1;
}

int deleteElement(int a[],int size,int key){
	int i;
	int posToDelete = linearSearch(a,size,key);
	if(posToDelete == -1){
		cout<<"Element"<<" not found"<<endl;	}
		else{
			for(i = posToDelete;i<=size-1;i++){
				a[i]=a[i+1];
			}
			size--;
		}return size;
}
void display(int a[],int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int a[5]={10,20,30};
	int key;
	int posToDelete;
	int size = 3;
	cout<<"Before Deletion of the array"<<endl;
	display(a,size);
	cout<<"Which element you want to delete"<<endl;
	cin>>key;
	size=deleteElement(a,size,key);
	cout<<"After deletion from array"<<endl;
	display(a,size);
	return 0;
}
