#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


int count=0;

struct node
{
    struct node* prev;
    struct node* next;

    int studentNumber;
    char name [100];
    char surname [100];
    char department [100];
    int  grade;

}*h, *temp, *temp1, *temp2, *temp4 ;



void create()
{
    int studentNumber;
    char name [100];
    char surname [100];
    char department [100];
    int  grade;

    temp = (struct node*)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->next = NULL;
    
    count++;

    printf("\n Please enter %d. student's number:\n",count);
    scanf("%d",&studentNumber);

    printf("\n Please enter %d. student's name:\n",count);
    scanf("%s",&name);

    printf("\n Please enter %d. student's surname:\n",count);
    scanf("%s",&surname);

    printf("\n Please enter %d. student's department:\n",count);
    scanf("%s",&department);

    printf("\n Please enter %d. student's grade:\n",count);
    scanf("%d",&grade);

    
    
    temp->studentNumber=studentNumber;
    strcpy(temp->name, name);
    strcpy(temp->surname, surname);
    strcpy(temp->department, department);
    temp->grade = grade;
    
    printf("%d. student is recorded to the list\n",count);
}


void insertbeg()
{
    if (h == NULL) 
    {
        create();
        h = temp;
        temp1 = h;
    }

    else 
    {
        create();
        temp1->next = temp;
        temp->prev = temp1;
        temp1 = temp;
    }


}


void displaybeg()
{
    temp2 = h;
    if (temp2 == NULL) 
    {
        printf("\n list is empty\n");
        return;
    }

    printf("\n linked list elements from beginning:\n");

    while (temp2 != NULL) 
    {
        printf("%d %s %s %s %d\n", temp2->studentNumber, temp2->name, temp2->surname, temp2->department, temp2->grade);
        temp2 = temp2->next;
    }
}

void employerDetails()
{
    int choice, n, i;
    
    h = NULL;
    temp = temp1 = NULL;
    printf("--------Menu------------\n");
    printf("\n 1.create a DLL of n emp");
    printf("\n 2.display from beginning");
    printf("\n 4.delete at end");
    printf("\n 5.insert at end of the list");
    printf("\n 6.delete at beginning");
    printf("\n 8.exit\n");
    printf("----------------------\n");
    while (1) {
        printf("\n enter choice : ");
        scanf("%d", &choice);

        // Switch statements begins
        switch (choice) {
        case 1:
            printf("\n Please enter number of students:");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
                insertbeg();
            break;
        case 2:
            displaybeg();
            break;

        case 5:
            insertbeg();
            break;

        
            break;
        case 8:
            exit(0);
        default:
            printf("wrong choice\n");
        }
    }
}




int main()
{

employerDetails();


    
}