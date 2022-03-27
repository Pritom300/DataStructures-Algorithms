#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
}*first=NULL;


void Create(int A[],int n)
{
    //forming a LinkList this array
    int i;
    struct Node *t,*last; 
    
  
    first = new Node;
    
    first->data = A[0];
    first->next = NULL; 
    
    last = first; 
    
   
    for(i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=NULL;    
        
        last->next=t;
        last = t;
        
    }
}

//Display Or Print LinkList Using Recursion

void RDisplay(struct Node *p)
{
    if(p!=NULL)
    {
        cout<<p->data<<endl;
        
        RDisplay(p->next);
        
        //This Display Reverse:
        cout<<"======================================="<<endl;
        
        cout<<p->data<<endl;
    }
}




int main()
{
    int A[] = {3,5,7,10,15}; 
    
    Create(A,5);
    
    RDisplay(first);

    return 0;
}



/*  Output:-   

3
5
7
10
15
=======================================
15
=======================================
10
=======================================
7
=======================================
5
=======================================
3  

*/
