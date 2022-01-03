#include <stdio.h>
#include <stdlib.h>


struct node
{
	char data;
	struct node* left;
	struct node* right;
};


struct node* addNode(char data)
{
	struct node* node = (struct node*)malloc(sizeof(struct node));
	node->data = data;
	node->left = NULL;
	node->right = NULL;

	return (node);
}


void preOrder(struct node* node)           //NLR
{
	if (node != NULL)
    {
        printf("%c", node->data);          //Node

        preOrder(node->left);              //Left

        preOrder(node->right);             //Right
    }
}


void inOrder(struct node* node)            //LNR
{
	if (node != NULL)
    {
        inOrder(node->left);               //Left

        printf("%c", node->data);          //Node

        inOrder(node->right);              //Right
    }
}

void postOrder(struct node* node)          //LRN
{
	if (node != NULL)
    {
        postOrder(node->left);             //Left

        postOrder(node->right);            //Right

        printf("%c", node->data);          //Node
    }
}



int main()
{
	struct node* root = addNode('+');
	root->left = addNode('*');
	root->right = addNode('*');
	root->left->left = addNode('C');
	root->left->right = addNode('+');
	root->left->right->left = addNode('A');
	root->left->right->right = addNode('B');
	root->right->left = addNode('D');
	root->right->right = addNode('*');
	root->right->right->left = addNode('F');
	root->right->right->right = addNode('+');
    root->right->right->right->left = addNode('G');
    root->right->right->right->right = addNode('H');

	printf("\nPreorder traversal of binary tree is ");
	preOrder(root);

	printf("\n\nInorder traversal of binary tree is ");
	inOrder(root);

	printf("\n\nPostorder traversal of binary tree is ");
	postOrder(root);

	getchar();
	return 0;
}
