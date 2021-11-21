#include<stdio.h>
#include<stdlib.h>
#define NUMBEROFNODES 55

//Linked List Definition
typedef struct node 
	{
	    void*        dataPtr;
    	struct node* link;
	} NODE; 

typedef struct
	{
	    int   count; 
	    NODE* pos;
	    NODE* head; 
	    NODE* rear;
	    int    (*compare) (void* argu1, void* argu2); 
	} LIST;


LIST* createList ()
{
//	Local Definitions 
	LIST* list;

//	Statements 
	list = (LIST*) malloc (sizeof (LIST));
	if (list)
	{
	    list->head    = NULL;
	} 

    else
    {
        printf("list is don't created");
    }

	return list;
}

    static int _insert (LIST* pList, NODE* pPre,void* dataInPtr)
{
//	Local Definitions 
	NODE* pNew;

//	Statements 
	if (!(pNew = (NODE*) malloc(sizeof(NODE))))
	return -1;

	pNew->dataPtr   = dataInPtr; 
	pNew->link      = NULL; 
    pNew->link       = pList->head;
	pList->head      = pNew;

    return 0;
}

int addNode (LIST* pList, void* dataInPtr)
{
//	Local Definitions 
	int success;
	
	NODE* pPre;

	success = _insert (pList, pPre, dataInPtr);
	if (!success)
	return (-1);
	return (0);
}	


int listLength(NODE* head,int count)
{
    if(head->link)
    {
        return listLength(head->link,++count); //Recursive
    }
    else
    {
        return count;
    }
}



int main()
{
    int length;
    LIST* list=createList();
    
    
    for(int i=0;i<NUMBEROFNODES;++i)
    {
        addNode(list,i);
    }
        

    NODE* temp = list->head;
    
    for(int i=0;i<NUMBEROFNODES;++i)
    {
        temp=temp->link;
    }
        

    length = listLength(list->head,1);
    printf("\nNumber of nodes is %d\n",length);

}