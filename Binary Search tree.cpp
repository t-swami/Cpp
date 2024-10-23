#include<iostream>
using namespace std;
struct node
{
	int key;
	struct node *left;
	struct node *right;
};
struct node *newNode(int item)
{
	struct node* temp = new struct node;
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}
struct node* insert(struct node* n1,int key)
{
	//if the tree is empty, return a new node
	if(n1 == NULL)
	{
		return newNode(key);	
	}
	//otherwise,recur down the tree
	if(key < n1->key)
			n1->left = insert(n1->left,key);
	else if (key > n1->key)
			n1->right = insert(n1->right,key);	
//Return the (unchanged)node pointer
return n1;
}

void preorder(node* root)
{
	if(root != NULL)
	{
		cout<<root->key<<"\t";
		preorder(root->left);
		preorder(root->right);
	}
}
void inorder(node* root)
{
	if(root != NULL)
	{
		inorder(root->left);
		cout<<root->key<<"\t";
		inorder(root->right);
	}
}
void postorder(node* root)
{
	if(root != NULL)
	{	
		postorder(root->left);
		postorder(root->right);
		cout<<root->key<<"\t";
	}
}


int main()
{
	struct node* root = NULL;
	root = insert(root,50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,60);	
	cout<<"\nInorder:"<<endl;
	inorder(root);
	
	cout<<"\npreorder:"<<endl;
	preorder(root);
	
	cout<<"\npostorder:"<<endl;
	postorder(root);	
}
