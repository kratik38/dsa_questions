#include <iostream>
#include <math.h>
//#include <bits/stdc++.h>
#include <vector>
using namespace std;

class node{
    public:
     int data;
     node* next;


     node(int val)
    {
        data = val;
        next = NULL;
    } 
};

void deleteathead(node* &head)
{
    node* todelete = head;

    head = head->next;

    delete todelete;


}

void deletion(node* &head,int val)
{
    if(head->data==val)
    {
        deleteathead(head);
        return;
    }

    if(head==NULL)
    {
        return;
    }

    if(head->next==NULL)
    {
        deleteathead(head);
        return;
    }
    
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }

    node* todelete = temp->next;

    temp->next = temp->next->next;

    delete todelete;

}

void insertattail(node* &head,int val)
{

    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}

node* reverselist(node* &head)
{
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    while(currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
     return prevptr;
}

node* reverserecur(node* &head)
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }

    node* newhead = reverserecur(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


    node* head = NULL;

    int val;

    do
    {
        cin>>val;
        insertattail(head,val);
    } while (val!=-1);
    
    display(head);

    head = reverselist(head);
    display(head);

    head = reverserecur(head);

    display(head);


    
   return 0;
}