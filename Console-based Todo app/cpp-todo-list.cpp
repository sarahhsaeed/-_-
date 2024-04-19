#include <iostream>
using namespace std;
#include "Todo.h"
int main()
{
    char input_option;
    string todo_description="";
    int input_id=-1;
    int new_id = 0;
    list<Todo> ToDoItems;
    list<Todo>::iterator it;
    srand((unsigned int)time(NULL));
    ToDoItems.clear();
    
    while (1)
    {
        system("cls");
        for (it = ToDoItems.begin(); it != ToDoItems.end(); it++)
        {
            if (input_id == it->getId())
            {
                it->mark_todo();
                 
            }
            cout << it->getId() << " | " << it->getDescription() << " | " <<
                it->getCompleted() << " | " <<" day: " << it->get_DateTime().day << "/" << it->get_DateTime().month << "/" << it->get_DateTime().year << " | " << " time: "
                << it->get_DateTime().hour << ":" << it->get_DateTime().minute << ":" << it->get_DateTime().second << endl;
            cout << "-------------------------------------------" << endl;
           

        }
        if (ToDoItems.empty())
        {
            cout << "Add your first to do !" << endl;
        }
        cout << "[a]dd a new to do" << endl;
        cout << "[m]ark a todo as done" << endl;
        cout << "[q]uit" << endl;
        
        cin >> input_option;

        if (input_option == 'q')
        {
            cout << "Byee" << endl;
            break;
        }
        else if (input_option == 'a')
        { 
            Todo todo;
            cout << "write your description" << endl;
            cin.ignore();
            getline(cin, todo_description);
            todo.add_todo2(todo_description,new_id);
            todo.get_DateTime();
            ToDoItems.push_back(todo);
            new_id++;
        }
        else if (input_option == 'm')
        {
            cout << "write todo id to mark as compelted" << endl;
            cin >> input_id;
        }
        else 
        {
            cout << "invalid input, try again!" << endl;

        }
          
    }

}
