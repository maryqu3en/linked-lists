#include<stdio.h>

typedef struct node
{
    int x;
    node *next;
}node;

int main()
{
    node *head,*p;
    int i,n,x;
    head=(node*)malloc(sizeof(node));
    head->next=NULL;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);
        p=(node*)malloc(sizeof(node));
        p->x=x;
        p->next=head->next;
        head->next=p;
    }
    p=head->next;
     while(p!=NULL)
    {
        printf("%d ",p->x);
        p=p->next;
    }
    return 0;

}