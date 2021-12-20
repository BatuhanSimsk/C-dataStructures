#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


//Node ADT Type Defintions
typedef struct node
{
    void* dataPtr;
    struct node* link;
} NODE;



//LIST ADT 


typedef struct list
{
    int count;
    NODE* pos;
    NODE* head;
    NODE* rear;
    int (*compare) (void* argu1, void* argu2);
} LIST;





//Create List


LIST* createList (int (*compare) (void* argu1, void* argu2))
{
    
    LIST* list;
    
    
    list = (LIST*) malloc (sizeof (LIST));
    
    if (list)
    {
        list->head = NULL;
        list->pos = NULL;
        list->rear = NULL;
        list->count = 0;
        list->compare = compare;
    } 
    
    return list;
} 



//Destroy List

LIST* destroyList (LIST* pList)  
{
    
    NODE* deletePtr;
    
    
    if (pList)
    {
        while (pList->count > 0)
        {
            free (pList->head->dataPtr);
            deletePtr = pList->head;
            pList->head = pList->head->link;
            pList->count--;
            free (deletePtr);
        } 
        free (pList);
    } 
    return NULL;
} 


//Add Node

int addNode (LIST* pList, void* dataInPtr)
{
    //Local Definitions
    bool found;
    bool success;

    NODE* pPre;
    NODE* pLoc;
    
    //Statements
    found = _search (pList, &pPre, &pLoc, dataInPtr);
    
    if (found)
    {
        return (1);
    }
    
    success = _insert (pList, pPre, dataInPtr);

    if (!success)
    {
        return (-1);
    }
    return (0);
} // addNode



//Remove Node

bool removeNode (LIST* pList, void* keyPtr,void** dataOutPtr)
{
    
    bool found;

    NODE* pPre;
    NODE* pLoc;



    found = _search (pList, &pPre, &pLoc, keyPtr);

    if (found)
    {
        _delete (pList, pPre, pLoc, dataOutPtr);
    }
    return found;
} 



//Search List

bool searchList (LIST* pList, void* pArgu,void** pDataOut)
{
    
    bool found;

    NODE* pPre;
    NODE* pLoc;

    
    found = _search (pList, &pPre, &pLoc, pArgu);
    
    if (found)
    {
        *pDataOut = pLoc->dataPtr;
    }
    
    else
    {
        *pDataOut = NULL;
    }

    return found;
} 




//Traverse

bool traverse (LIST* pList,int fromWhere,void** dataPtrOut)
{
    
    if (pList->count == 0)
    {
        return false;
    }

    if (fromWhere == 0)
    {
        
        pList->pos = pList->head;
        *dataPtrOut = pList->pos->dataPtr;
        return true;
    } 
    
    else
    {
        
        if (pList->pos->link == NULL)
        {
            return false;
        }

            else
            {
                pList->pos = pList->pos->link;
                *dataPtrOut = pList->pos->dataPtr;
                return true;
            } 
        } 
} 




//internal _insert

static bool _insert (LIST* pList, NODE* pPre,void* dataInPtr)
{
    
    NODE* pNew;

    
    if (!(pNew = (NODE*) malloc(sizeof(NODE))))
    {
        return false;
    }
    
    pNew->dataPtr = dataInPtr;
    pNew->link = NULL;
    
    if (pPre == NULL)
    {
        pNew->link = pList->head;
        pList->head = pNew;
        if (pList->count == 0)
        // Adding to empty list. Set rear
        pList->rear = pNew;
    } 

    else
    {
        pNew->link = pPre->link;
        pPre->link = pNew;

        if (pNew->link == NULL)
        {
            pList->rear = pNew;
        }
    } 
    
    (pList->count)++;
    return true;
} // _insert



//internal Delete

static void _delete (LIST* pList, NODE* pPre,NODE* pLoc, void** dataOutPtr)
{
    
    *dataOutPtr = pLoc->dataPtr;

    if (pPre == NULL)
    {
        pList->head = pLoc->link;
    }
    else
    {
        pPre->link = pLoc->link;
    }
    
    
    if (pLoc->link == NULL)
    {
        pList->rear = pPre;
    }
    
    (pList->count)--;
    free (pLoc);
    
    return;
} 


//internal Search

static bool _search (LIST* pList, NODE** pPre,NODE** pLoc, void* pArgu)


{
    
    #define COMPARE \
    ( ((* pList->compare) (pArgu, (*pLoc)->dataPtr)) )

    #define COMPARE_LAST \
    ((* pList->compare) (pArgu, pList->rear->dataPtr))


    int result;

    
    *pPre = NULL;
    *pLoc = pList->head;

    if (pList->count == 0)
    {
        return false;
    }
    
    if ( COMPARE_LAST > 0)
    {
        *pPre = pList->rear;
        *pLoc = NULL;
        return false;
    } 
    
    while ( (result = COMPARE) > 0 )
    {
        
        *pPre = *pLoc;
        *pLoc = (*pLoc)->link;
    } 
    
    if (result == 0)
    {
        return true;
    }
    
    else
    {
        return false;
    }
} 








int main()
{
    //createList()





}