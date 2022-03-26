
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;

//Creating A LinkList
void Create(int A[],int n)
{
    //forming a LinkList this array
    int i;
    struct Node *t,*last; // *t will help creating a new node and *last will help add a new node at the end of the LinkList
    
    //Then as the LinkList is empty right now, so i will create the first node.
    first = new Node;
    
    first->data = A[0];
    first->next = NULL; // Because this the first node there is nothing beyond this one.
    
    last = first; //I will make the last point to the first node. 
    
    //This process will create entire LinkList, We will discuss latter.
    for(i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=NULL;     //The "Create" function i will be using every time whenever i have to process upon a linklist.
        
        last->next=t;
        last = t;
        
    }
    
    
}




//Display Or Print LinkList

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p = p->next;
    }
}




int main()
{
    int A[] = {3,5,7,10,15}; 
    
    Create(A,5);
    
    Display(first);

    return 0;
}



/* Output: 
3
5
7
10
15 */ 
