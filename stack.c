//Stack- Array based implementation

#include<stdio.h>
int stack[50],ch,x,n,top,i;
void push(void);
void pop(void);
void display(void);
int main()
{

    top=-1;
    printf("\n Enter the size of STACK[MAX=50]:");
    scanf("%d",&n);
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("EXIT");
                break;
            }
            default:
            {   
                printf ("INVALID CHOICE");
            }
         
        }
    }
    while(ch!=4);
    return 0;
}
void push(void)
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");

    }
    else
    {
        printf(" Enter a value:");
        scanf("%d",&x);

stack[top]=x;
    }
}
void pop(void)
{
    if(top<=-1)
    {
        printf("\n\t Stack under flow");
    }
    else
    {
        printf("\n\t The popped elements is %d",stack[top]);
        top=top-1;
    }
}
void display(void)
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Enter next choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }

}
