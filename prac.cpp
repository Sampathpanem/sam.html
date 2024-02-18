#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
struct node *InsertionAtHead(struct node *head)
{
    struct node *newnode = new node();
    int data;
    cin >> data;
    newnode->data = data;
    if (head == NULL)
    {
        newnode->next = NULL;
    }
    else
    {
        newnode->next = head;
    }
    head = newnode;
    return head;
}
void display(struct node *head)
{

    struct node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " ";

        temp = temp->next;
    }
}
struct node *InsertionAtTail(struct node *head)
{
    struct node *newnode = new node();
    struct node *temp = head;

    int data;
    cin >> data;
    newnode->data = data;
    newnode->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    return head;
}
struct node *InsertionAtMiddle(struct node *head)
{
    struct node *newnode = new node();
    int data;
    cin >> data;
    newnode->data = data;
    struct node *temp = head;
    int count = 1;
    int option;
    cin >> option;
    while (count < option - 1)
    {

        temp = temp->next;
        count++;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    return head;
}
struct node *DeletionAtHead(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    delete (temp);
    cout << " after deletion at head" << endl;
    return head;
}
struct node *DeletionAtTail(struct node *head)
{

    struct node *temp = head;
    struct node *temp1 = head;
    while (temp->next != NULL)
    {
        temp1 = temp;
        temp = temp->next;
    }

    temp1->next = NULL;

    delete (temp);
    return head;
}
struct node *DeletionAtSpecificPoint(struct node *head)
{
    struct node *temp = head;
    struct node *temp1 = head;
    int count = 1;
    int option;
    cin >> option;
    while (count < option)
    {
        temp1 = temp;
        temp = temp->next;
        count++;
    }
    temp1->next = temp->next;

    delete (temp);
    return head;
}
void Options(struct node *head)
{
    cout << " \n enter your option" << endl;
    cout << " 1 for insertionAtHead\n 2 for InsertionAtMiddle \n 3 for InsertionAtTail \n 4 for DeletionAtHead \n 5 for DeletionAtspecificpoint\n 6 for DeletionAtTail \n 7 for display \n 8 for exit" << endl;
    int option;
    cin >> option;
    switch (option)
    {
    case 1:
        head = InsertionAtHead(head);
        Options(head);

        break;
    case 2:
        head = InsertionAtMiddle(head);
        Options(head);
        break;

    case 3:
        head = InsertionAtTail(head);
        Options(head);
        break;
    case 4:
        head = DeletionAtHead(head);
        Options(head);
        break;
    case 5:
        head = DeletionAtSpecificPoint(head);
        Options(head);
        break;
    case 6:
        head = DeletionAtTail(head);
        Options(head);
        break;
    case 7:
        display(head);
        Options(head);
        break;
    case 8:
        cout << "programm ended" << endl;
        break;
    }
}
int main()
{
    struct node *head = NULL;
    // head = InsertionAtHead(head);
    // head = InsertionAtHead(head);
    // head = InsertionAtHead(head);
    // head = InsertionAtHead(head);
    // display(head);
    // head = InsertionAtTail(head);
    // head = InsertionAtTail(head);
    // head = InsertionAtTail(head);
    // head = InsertionAtTail(head);
    // display(head);
    // head = InsertionAtMiddle(head);
    // head=DeletionAtHead(head);
    //  display(head);
    //  head=DeletionAtTail(head);
    // display(head);
    // head = DeletionAtSpecificPoint(head);
    // display(head);
    // cout << "enter your option" << endl;
    // cout << " 1 for insertionAtHead\n 2 for InsertionAtMiddle \n 3 for InsertionAtTail \n 4 for DeletionAtHead \n 5 for DeletionAtspecificpoint\n 6 for DeletionAtTail \n 7 for display" << endl;
    Options(head);
    return 0;
}