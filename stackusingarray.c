#include<stdio.h>
#include<stdlib.h>
#define max 10
int top = -1;
int stack [max];
void push();
 void pop();
void peek();
void traverse();
int choice,item,count=0;
void main()
{

       while(1)
       {
        printf ("*****************MENU*************") ; 
        printf("\n");     
       printf("1.Push \n");
        printf("2. Pop \n");
        printf("3. Peek\n");
        printf("4. Traverse \n");
        printf("5. exit \n");
        printf("Enter your choice to perform the task\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                     count++;     //to count number of times push is called
                    break;
            case 2: pop();
                    count--;       ///to count the number of times the pop operation is called
                    break;
            case 3: peek();        ///to print the top most element of the stack without deleting it from the stack
                    break;
            case 4: traverse();    // to display the content of the stack
                    break;
            case 5: exit(0);
                     break;
            default: printf("You have entered a wrong choice. please enter the valid choice from the give option \n");
                    break;
       
        }
        }
    
    }
    void push(int data)
    {
        printf("enter the value : ");
        scanf("%d",&data);
         if(top==max-1)
         {
         printf("It is a Overflow condition no more data can be inserted in the stack\n");
         }
          else 
         {
     
         top=top+1;
         stack[top]=data;
        }
    }


    void pop()
    {
     if(top==-1)
     {
         printf(" underflow condition....hence stack is empty nothing to print\n");
     }
     else{
     item=stack[top];
     top=top-1;
     printf("item to be poped is %d : ",item);
     printf("\n");
         }
    }


    void peek()
    {
    
    if(top==-1)
    {
    printf("underflow condition\n.");
    }
    else
    {
     printf("Data to be peek is %d : ",stack[top]);
     printf("\n");
    }
    }

    void  traverse()
    {
        if(top==-1)
        printf("stack has nothing to print\n.");
        else
        {
        for(int i=0;i<count;i++)       // count used to calculate the number of times push or poped opertion is called and print the stack till the count after calculating the push and poa
        printf("%d -> ",stack[i]);
        printf("\n");
        }
    }

