//basic linked list from an array: the advantage of using C is we can do whatever the hell we want to with memory
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int value;
	struct Node *next;
	};
	
int main(){
	int numbers[]={10,3,20};
	
	struct Node *current , *root;
	root=current;
	
	int count=sizeof(numbers)/sizeof(int);
	
	for(int i=0;i<count;i++){
		current->value=numbers[i];
		current->next=NULL;
		
		struct Node *new=(struct Node *)malloc(sizeof(struct Node));
		if(new==NULL){
			printf("couldnt create memory");
		}
		
		else{
			current->next=new;
			current=current->next;
		}
	}
	
	//display tree after construction
	if(root->next==NULL){
		printf("tree is empty");
	}
	else{
		do{
			printf("value is %d",root->value);
			root=root->next;
		}while(root->next!=NULL);
	}
	
	return 0;
}
//done by Pseudo
	
