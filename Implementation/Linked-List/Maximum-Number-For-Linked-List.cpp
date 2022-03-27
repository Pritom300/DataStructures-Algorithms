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



int maxNormal(struct Node *p)
{
    int max = -3246;
    
    while(p)
    {
        if(p->data > max)
        {
            max = p->data;
        }
         p = p -> next;
    }
    
    return max;
}



int maxRecursive(struct Node *p)
{
    int x = 0;
    if(p==0)
    {
        return 0;
    }
    
    else
    {
        x = maxRecursive(p->next);
        
        if(x > p->data)
        {
            return x;
        }
        
        else
        {
            return p->data;
        }
        
    }
}





int main()
{
    int A[] = {3,5,7,10,15}; 
    
    Create(A,5);
    
    int N = maxNormal(first);
    int R = maxRecursive(first);
    
    cout<<"Normal Maximum Number Is: "<<N<<endl;
    cout<<"Recursive Maximum Number Is: "<<R<<endl;
    
   
}



/*  Output:-   

Normal Maximum Number Is: 15
Recursive Maximum Number Is: 15

*/
