#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
struct node* newnode(int key){
	struct node* temp = (struct node*)malloc(sizeof(struct node));
	temp->data = key;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
void inorder(node *root){
if(root==NULL)
return ;
inorder(root->left);
cout<<root->data<<" ";
inorder(root->right);
}
struct node* getParent(node* root,int parent){
	if(root==NULL)
		return 0;
	if(root->data==parent){
		return root;
	}
	getParent(root->left,parent);
	getParent(root->right,parent);
}
void insert(node* root,int parent,int child,char x){
	struct node *temp = NULL;
	temp = getParent(root,parent);
	if(x=='R'){
		temp->right->data = child;
		temp->right->left = NULL;
		temp->right->right = NULL;
	}
	else{
		temp->left->data = child;
		temp->left->left = NULL;
		temp->left->right = NULL;
	}
}
int main(){
	#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("//home//ryuk//Desktop//cp//input.txt", "r", stdin);
    // for writing output to output.txt
    //this can be opted out if you want to print the output to the sublime console
    freopen("//home//ryuk//Desktop//cp//output.txt", "w", stdout);
	#endif
	struct node* root = newnode(1);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int a,b;
		char x;
		cin>>a>>b>>x;
		insert(root,a,b,x);
	}
	int q[k];
	for(int i=0;i<n;i++) cin>>q[i];
    inorder(root);
    return 0;
}