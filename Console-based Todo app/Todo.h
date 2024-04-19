#pragma once
#include <iostream>
using namespace std;
#include <list>
#include<ctime>
#include<string>
struct date_time_struct 
{
    int year;
    int month;
    int day;
    int hour;
    int minute;
    int second;

};

class Todo
{
private:
    int id;
    string description;
    string completed;
    time_t t;

public:

    //constructors and destructor
    Todo() : id(0), description(""), completed("not done"), t(time(nullptr)) {}
    ~Todo() = default;

    // Getters
    int getId();
    string getDescription();
    string getCompleted();
    date_time_struct get_DateTime();

    // Methods
    void add_todo(string new_description);
    void add_todo2(string new_description,int new_id);
    void mark_todo();
    

};

