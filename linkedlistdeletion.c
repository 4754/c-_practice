#include<stdio.h>
struct Node{
	int data;
	struct Node* next;
};
struct Node* Head;
void insert(int Data,int n){
	struct Node* temp=(struct Node*)malloc(sizeof(int));
	temp->data=Data;
	if(n==1){
		Head=temp;
		temp->next=NULL;
	}
	else{
		struct Node* temp1=Head;
		int i;
		for(i=1;i<n-1;i++){
			temp1=temp1->next;
		}
		temp->next=temp1->next;
		temp1->next=temp;
	}
}
void print(){
 struct Node*temp=Head;
 while(temp!=NULL){
 	printf("%d ",temp->data);
 	temp=temp->next;
 }
 printf("\n");
}
void Delete(int n){
	int i;
	struct Node* temp=Head;
	if(temp==NULL){
		printf("list is empty ");
	}
	else{
		if(n==1){
			Head=temp->next;
			free(temp);
			
		}
		else{
			struct Node* temp2=Head;
				for(i=1;i<n-1;i++){
					temp2=temp2->next;
	       }
	       struct Node*temp3=temp2->next;
	       temp2->next=temp3->next;
	       free(temp3);
		}
	}
}

int main(){
	Head=NULL;
	insert(10,1);
	insert(11,2);
	insert(12,3);
	insert(13,4);
	insert(14,4);
	print();
	Delete(4);
	print();
	
}
