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



//sum normal
int sumNormal(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum = sum+p->data;
        p=p->next;
    }
    
    return sum;
}


//sum recursive
int sumRecursive(struct Node *p)
{
    if(p==0)
    {
        return 0;
    }
    else
    {
        return sumRecursive(p->next)+p->data;
    }
   
}

int main()
{
    int A[] = {3,5,7,10,15}; 
    
    Create(A,5);
    
    int N = sumNormal(first);
    int R = sumRecursive(first);
    
    cout<<"Normal Sum is: "<<N<<endl;
    cout<<"Recursive Sum is: "<<R<<endl;
    
   
}



/*  Output:-   

Normal Sum is: 40
Recursive Sum is: 40

*/
