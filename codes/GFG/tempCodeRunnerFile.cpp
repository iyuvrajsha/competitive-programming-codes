Node * reverse(Node *head)
{
    Node *p=NULL;
    Node *c= head;
    Node *n= c->next;
    while(c->next!= NULL)
    {
        c->next= p;
        p=c;
        c=n;
        if(n!=NULL)
        {
            n=n->next;
        }
    }
    return c;
}