#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Linked List

typedef struct node
{
    void* dataInPtr;

    struct node *pLoc;
    struct node *pPre;
}NODE;




typedef struct  
{
    int count;
    struct node* pos;
    struct node* head;
    struct node* tail;
    int (*compare) (void* argu1, void* argu2);
}LIST;



LIST* createList(int (*compare)(void* argu1, void* argu2))
{

    LIST* list;

    list = (LIST*) malloc (sizeof (LIST));
    
    if (list)
    {
        list->head = NULL;
        list->pos = NULL;
        list->tail = NULL;
        list->count = 0;
        list->compare = compare;
    
    } 
    return list;
    
}

//Add Node

int addNode(LIST* pList, void* dataInPtr)
{
    bool found;
    bool success;

    NODE* pPre;
    NODE* pLoc;


    found = _search (pList,&pPre,&pLoc,dataInPtr);  
    if(found)
    {
        return 1;
    }
    
    success= _insert (pList, pPre, dataInPtr);
    if(!success)
    {
        return(-1);
    }
    return 0;
}




bool removeNode(LIST* pList, void* keyPtr, void** dataOutPtr)
{
    bool found;

    NODE* pPre;
    NODE* pLoc;

    found = _search (pList, &pPre, &pLoc, keyPtr);
    if(found)
    {
        _delete(pList, pPre, pLoc, dataOutPtr);
    }

    return found;
}



//Internal Functions

bool _search(LIST* pList, NODE** pPre, NODE** pLoc, void* pArgu)
{
    #define COMPARE \

    ((*pList -> compare)(pArgu, (*pLoc)->dataInPtr));

    #define COMPARE_LAST \
    
    ((* pList->compare) (pArgu, pList->tail->dataInPtr));

    int result;

    *pPre = NULL;
    *pLoc = pList->head;

    if (pList->count == 0)
    {
        return false;
    }

/*

    if (COMPARE_LAST>0)
    {
    *pPre = pList->tail;
    *pLoc = NULL;
    return false;
    } // if
    while ( (result = COMPARE) > 0 )
    {
    // Have not found search argument location
    *pPre = *pLoc;
    *pLoc = (*pLoc)->link;
    } // while
    if (result == 0)
    // argument found--success
    return true;
    else
    return false;

*/


}











//Add Node v2


/*
struct node* addNode(int data)
{
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->dataPointer =data;
    newNode->prevLink =NULL;
    newNode->nextLink =NULL;

    return newNode;
}
*/






//Listenin sonuna eleman ekleme

/*
void addToEnd(int data)
{
    struct node* toEnd=addNode(data);

    if(head==NULL)      
    {
        head= toEnd;
    }

    else
    {
        //Traverse
        struct node* temp = head;

        while (temp->nextLink != NULL)
        {
            temp = temp->nextLink;
        }

        toEnd->prevLink=temp;
        temp->nextLink=toEnd;
    }


}

/*



/*

//Yazdırma

void print()
    {
        struct node* temp = head;

        while (temp != NULL)
        {
            printf("%d", temp->dataPointer);
            temp=temp->nextLink;
        }
        printf("\n");
    }

*/


int main()
{


}





















