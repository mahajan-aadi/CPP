#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data=0)
    {
        this->data=data;
        this->next=NULL;
    }
};
class linked_list
{
    node *head;
    int len;
public:
    linked_list()
    {
        this->head=NULL;
        this->len=0;
    }
    void insert_node(int data);
    void display();
    void delete_at(int pos);
};
void linked_list::delete_at(int  pos)
{
    if(pos>len)
        return;
    if(pos==1)
    {
        node * temp=head;
        head=head->next;
        delete(temp);
    }
    else if(pos==len)
    {
        node * temp_node=head;
        while(temp_node->next->next!=NULL)
            temp_node=temp_node->next;
        delete(temp_node->next);
        temp_node->next=NULL;
    }
    else
    {
        node * temp_node=head;
        for(int i=1;i<pos;i++)
            temp_node=temp_node->next;
        node temp=*(temp_node->next);
        temp_node->next=temp_node->next->next;
        delete(&temp);
    }
    len--;
}
void linked_list::insert_node(int data)
{
    node * temp=new node(data);
    if(head==NULL)
        head=temp;
    else
    {
        node * temp_node=head;
        while(temp_node->next!=NULL)
            temp_node=temp_node->next;
        temp_node->next=temp;
    }
    len++;
}
void linked_list::display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL \n";
}
int main()
{
    linked_list * mylinked_list=new linked_list();
    mylinked_list->insert_node(10);
    mylinked_list->insert_node(150);
    mylinked_list->insert_node(11);
    mylinked_list->insert_node(4);
    mylinked_list->display();
}
