#include <iostream>
using namespace std;

#define SIZE 5

int stack[SIZE];
int top = -1;

void push(int id)
{
    if (top == SIZE - 1)
    {
        cout << "Stack Overflow!" << endl;
    }
    else
    {
        top++;
        stack[top] = id;
        cout << id << " inserted successfully." << endl;
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow!" << endl;
    }
    else
    {
        cout << "Removed ID: " << stack[top] << endl;
        top--;
    }
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Top ID: " << stack[top] << endl;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty." << endl;
    }
    else
    {
        cout << "Student IDs in the stack (Top to Bottom): ";
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int choice, id;

    do
    {
        cout << "\n===== Student ID Stack Management =====" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter Student ID: ";
                cin >> id;
                push(id);
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                display();
                break;

            case 5:
                cout << "Program terminated." << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
