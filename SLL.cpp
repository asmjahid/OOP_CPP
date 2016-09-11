#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *link;
} node;

main()
{
    int value,item,flag=0;
    //creation of header node;
        //step - alocating free space for node
        node *header, *temp, *prev;
        header =(node*)malloc(sizeof(node));
        header->data=50;
        header->link=NULL;

    //creation of list by inserting at last;
        prev=header;
        //step 1 taking value of node.
        while(scanf("%d",&value)!=EOF)
        {
            //step 2 creating a node
            temp =(node*)malloc(sizeof(node));
            temp->data=value;
            temp->link=NULL;

            //adjusting previous node's link
            prev->link=temp;

            //setting this node as prev node for next step.
            prev=temp;
        }
    //traversing list by printing
        printf("\n\nPrintinf the Current List:\n");
        temp=header;
        while(temp!=NULL)
        {
               if(temp!=header)
               {
                   printf("%d, \n", temp->data);
               }
                temp=temp->link;
        }

        temp=header;
        scanf("%d",&item);
        while(temp!=NULL)
        {
            if(temp->data==item)
            {
                flag=1;
                printf("found %d",temp);
                break;
        }
        temp=temp->link;
        }
        if(flag==0)
        printf("not found");

}
