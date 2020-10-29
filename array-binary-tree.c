//converting arrays into a binary tree using the linked list implementation. C is good.
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node *left;
	struct Node *right;
	};
	
//prototypes
int Constructer(struct Node *root, int number);
	
int main(){
	int numbers[]={29,10,37,13,5,8,9,38};
	
	struct Node *root=(struct Node *)malloc(sizeof(struct Node));
	root->value=numbers[0];
	root->left=NULL;
	root->right=NULL;
	
	int count= sizeof(numbers)/sizeof(int);
	
	for(int i=1;i<count;i++){
		Constructer( root,numbers[i]);
	}
	
	return 0;
}

int Constructer(struct Node *root,int number){
	//create a test structure
	struct Node *current=(struct Node *)malloc(sizeof(struct Node));
	if(current==NULL){
		printf("failed to create memory");
	}
	//start at root node
	if(root==NULL){
		root->value=number;
		root->left=NULL;
		root->right=NULL;
		
		return 0;
	}
	else{
		if(root->value<number){
			if(root->right!=NULL){
				current=root->right;
				printf("right ");
				Constructer(current,number);
			}
			else{
				root->right=current;
				current->value=number;
				current->left=NULL;
				current->right=NULL;
				printf("right %d\n",number);
				
				return 0;
			}
		}
		else{
			if(root->left!=NULL){
				current=root->left;
				printf("left ");
				Constructer(current,number);
			}
			else{
				root->left=current;
				current->value=number;
				current->left=NULL;
				current->right=NULL;
				printf("left %d\n",number);
				
				return 0;
			}
		}
	}
}
//done by Pseudo.	
				
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

