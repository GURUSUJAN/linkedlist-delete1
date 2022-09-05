#include <iostream>
using namespace std;
struct Node 
{ 
    int info; 
    Node *link; 
}; 
Node *head,*ptr,*nptr,*prevs;  
int main() 
{ 
    int n;
    cin>>n;
    int i=0;
     for(i=0;i<n;i++)
     {
        if(head==NULL) 
        { 
            nptr=new Node; 
            nptr->link=NULL; 
            cin>>nptr->info; 
            head=nptr;   
        } 
        else 
        { 
            nptr=new Node; 
            cin>>nptr->info; 
            nptr->link=NULL; 
            ptr=head; 
            while(ptr->link!=NULL) 
            { 
                ptr=ptr->link;   
            }  
            ptr->link=nptr;
        } 
     }
         int log=0;
         ptr=head; 
            while(ptr->link!=NULL) 
            { 
               if(ptr->info>log)
               {
                   log=ptr->info;
               }
                ptr=ptr->link;   
            }  
          ptr = head; 
        while(ptr->info != log) 
        { 
        prevs=ptr;
        ptr=ptr->link;         
        } 
    prevs->link=ptr->link; 
    
    ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->info<<" ";
            ptr=ptr->link;
        }
}
