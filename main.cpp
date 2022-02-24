//
//  main.cpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//

#include <iostream>
#include "ToDoItem.hpp"
#include "ToDoList.hpp"

using namespace std;

int main() {
    
    int option = 0;
    
    cout << "Would you like to enter a critical or regular ToDo? (1 = critical, 2 = regular, any other number for no): ";
    cin >> option;
    
    ToDoList list;
    
    while (option == 1 || option == 2) {
        if (option == 1){
            // read the title
            cin.ignore();
            string title = "";
            cout << "Title: ";
            getline(cin, title);
        
            // read the priority
            int priority = 0;
            cout << "Priority (1-10): ";
            cin >> priority;
        
            // create a new ToDo with the information entered
            CriticalToDoItem newCriticalToDo(title);
            newCriticalToDo.setPriority(priority);
        
            list.addCriticalItem(newCriticalToDo);
        
            cout << "Would you like to enter a critical or regular ToDo? (1 = critical, 2 = regular, any other number for no): ";
            cin >> option;
        }
    
        if (option == 2) {
        
            // read the title
            cin.ignore();
            string title = "";
            cout << "Title: ";
            getline(cin, title);
        
            // read the priority
            int priority = 0;
            cout << "Priority (1-10): ";
            cin >> priority;
        
            // create a new ToDo with the information entered
            ToDoItem newToDo(title);
            newToDo.setPriority(priority);
        
            list.addItem(newToDo);
        
            cout << "Would you like to enter a critical or regular ToDo? (1 = critical, 2 = regular, any other number for no): ";
            cin >> option;
        }
    }

    list.display();
    
    return 0;
    
}
