#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
public:
    Node *head;
    LinkedList()
    {
        head = NULL;
    }

    void create(int value)
    {
        Node *temp = new Node;
        temp->data = value; 
        temp->next = NULL;
        if (head == NULL)
        {
            head = temp;
            cout << "Created new list with node value: " << value << endl;
        }
        else
        {
            Node *p = head;
            while (p->next != NULL)
            {
                cout << "Traversing list: Current node value: " << p->data << endl;
                p = p->next;
            }
            p->next = temp;
            cout << "Added node with value " << value << " to the end of the list." << endl;
        }
    }

    void read()
    {
        cout << "Current List: ";
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *p = head;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }

    void update(int value, int position)
    {
        Node *p = head;
        int index = 0;
        while (p != NULL && index < position)
        {
            cout << "Traversing list: Current node value: " << p->data << endl;
            p = p->next;
            index++;
        }
        if (p == NULL)
        {
            cout << "Unable to update: Position " << position << " does not exist in the list." << endl;
            return;
        }
        p->data = value;
        cout << "Updated data at position " << position << " to " << value << endl;
    }

    void deleteNode(int position)
    {
        if (head == NULL)
        {
            cout << "Unable to delete: List is already empty." << endl;
            return;
        }
        Node *p = head;
        if (position == 0)
        {
            head = p->next;
            cout << "Deleted node at position 0" << endl;
            delete p;
        }
        else
        {
            for (int i = 0; i < position - 1; i++)
            {
                if (p->next == NULL)
                {
                    cout << "Unable to delete: Position " << position << " does not exist in the list." << endl;
                    return;
                }
                cout << "Traversing list: Current node value: " << p->data << endl;
                p = p->next;
            }
            Node *q = p->next;
            p->next = q->next;
            cout << "Deleted node at position " << position << endl;
            delete q;
        }
    }
};

int main()
{
    LinkedList list;
    list.create(1);
    list.create(2);
    list.create(3);
    list.read();
    list.update(4, 1);
    list.read();
    list.deleteNode(2);
    list.read();
    list.deleteNode(1); // Trying to delete from an empty list
    return 0;
}
