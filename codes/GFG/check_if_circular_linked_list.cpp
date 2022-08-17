#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

bool isCircular(Node *head)
{
   if(head==NULL)
   return true;
   Node *temp= head; bool flag=false;
   while(temp!=NULL)
   {
       temp=temp->next;
       if(temp==head)
       {
           flag= true;
           break;
       }
   }
   return flag;
}