#include<stdio.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* insert(struct Node* root,int data){

    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->left = temp->right = NULL;
    if(root == NULL){
        return temp;
    }
    if(data <= root->data){
        root->left = insert(root->left,data);
    }
    if(data > root->data){
        root->right = insert(root->right,data);
    }
}



int main(){

    struct Node* root = NULL;
    root = insert(root,5);



}
