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
    struct Node *t,*last; 
    
   
    first = new Node;
    
    first->data = A[0];
    first->next = NULL;
    
    last = first; 
    
    //This process will create entire LinkList, We will discuss latter.
    for(i=1;i<n;i++)
    {
        t = new Node;
        t->data=A[i];
        t->next=NULL;     
        
        last->next=t;
        last = t;
        
    }
    
    
}

//lenearSearch
struct Node *lenearSearch(struct Node *p,int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p;
        }
        p=p->next;
    }
    
    return NULL; //because key is not found
}


//Recursion lenearSearch
struct Node *recursionSearch(struct Node *p,int key)
{
    if(p==NULL)
    {
        return NULL;
    }
    
    if(key==p->data)
    {
        return p;
    }
    
    return recursionSearch(p->next,key);
}



//move to Front
struct Node *moveToFrontSearch(struct Node *p,int key)
{
    struct Node *q;
    
    while(p!=NULL)
    {
        if(key==p->data)
        {
            q->next = p -> next;
            p->next = first;
            first = p;
            
            return p;
        }
        q=p;
        p=p->next;
    }
    
    return NULL; //because key is not found
}

//Display Or Print LinkList

void Display(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<"For Move To Front Key Function Is Now Position In First Node :- "<<p->data<<endl;
        p = p->next;
    }
}




int main()
{
    struct  Node *Li,*Re,*Front;
    int A[] = {3,5,7,10,15}; 
    
    Create(A,5);
    
    //lenearSearch test
    Li = lenearSearch(first,10);
    if(Li)
    {
        cout<<"Key is found using lenearSearch :- "<<Li->data<<endl;
    }
    else
    {
        cout<<"Key is not found using lenearSearch :- "<<endl;
    }
    
    
    //recursionSearch test
    Re = lenearSearch(first,10);
    if(Li)
    {
        cout<<"Key is found using recursionSearch :- "<<Re->data<<endl;
    }
    else
    {
        cout<<"Key is not found using recursionSearch  :- "<<endl;
    }
    
    
     //Move To Front test
    Front = moveToFrontSearch(first,10);
    if(Li)
    {
        cout<<"Key is found using moveToFrontSearch :- "<<Front->data<<endl;
    }
    else
    {
        cout<<"Key is not found using moveToFrontSearch  :- "<<endl;
    }
    Display(first);

    return 0;
}


/* Output

Key is found using lenearSearch :- 10
Key is found using recursionSearch :- 10
Key is found using moveToFrontSearch :- 10
For Move To Front Key Function Is Now Position In First Node :- 10
For Move To Front Key Function Is Now Position In First Node :- 3
For Move To Front Key Function Is Now Position In First Node :- 5
For Move To Front Key Function Is Now Position In First Node :- 7
For Move To Front Key Function Is Now Position In First Node :- 15

*/


