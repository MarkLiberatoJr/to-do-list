//
//  ToDoItem.hpp
//  Exam 2
//
//  Created by Mark Liberato on 4/25/19.
//  Copyright © 2019 Mark Liberato. All rights reserved.
//
#pragma once
#ifndef ToDoItem_hpp
#define ToDoItem_hpp

#include <stdio.h>
#include <string>
#endif /* ToDoItem_hpp */


class ToDoItem
{
    
private:
    
    // string   title of the ToDo Item
    std::string title;
    
    // int      priority of the ToDo Item
    int priority;
    
    // format a time to a string for output
    std::ostream& formatDateTime(std::ostream& out, const tm& t, const char* fmt);
    
    // return a string with the date and time based on a time
    std::string dateTimeToString(const tm& t, const char* format);
    
public:
    
    // Constructor
    ToDoItem(std::string newName);
    
    void setTitle(std::string newTitle);
    std::string getTitle();
    
    void setPriority(int newPriority);
    int getPriority();
    
    // Display the ToDo Item
    void display();
};

