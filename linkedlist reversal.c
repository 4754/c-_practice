#include<stdio.h >
struct Node{
	int data;
	struct Node* next;	
	};
	void insert(struct Node** temp1,int n){
		//printf("in malloc\n");
		struct Node* temp =(struct Node*)malloc(sizeof(int));
		temp->data=n;
		if(*temp1==NULL){
			*temp1=temp;
			temp->next=NULL;
		}
		else{
			temp->next=*temp1;
			*temp1=temp;
		}
	//	printf(" head value=%d ",Head);
   //	return temp1;
	}
	void print(struct Node* temp){
		printf("List is :");
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\n");
	}
	struct node* reverse(struct Node* current){
		struct Node *prev,*next;
		prev=NULL;
		while(current!=NULL){
			next=(current)->next;
			(current)->next=prev;
			prev=current;
			current=next;
		}
		return prev;
	}
	
	int main(){
	struct Node* Head= NULL;
		int n,i,m;
		printf("how many number :");
		scanf("%d",&n);
		for(i=0;i<n;i++){
		printf("insert number :");	
		scanf("%d",&m);
	    insert(&Head,m);
		print(Head);
		}
	    Head=reverse(Head);
		print(Head);
	}
