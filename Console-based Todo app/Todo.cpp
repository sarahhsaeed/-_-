#include "Todo.h"

//methods
int Todo::getId() { return id; }

string Todo:: getDescription() { return description; }

string Todo:: getCompleted() { return completed; }

date_time_struct Todo::get_DateTime() {
    date_time_struct dt_object;
    tm localTime;
    localtime_s(&localTime,&t);
    dt_object.year = localTime.tm_year + 1900;//years since 1900
    dt_object.month = localTime.tm_mon + 1; //0 to 31
    dt_object.day = localTime.tm_mday;
    dt_object.hour = localTime.tm_hour;
    dt_object.minute = localTime.tm_min;
    dt_object.second = localTime.tm_sec;
    return dt_object;
}

void Todo:: add_todo(string new_description)
{
    //add todo with random id between 1 and 100
    id = rand() % 100 + 1; 
    this->description = new_description;
}
void Todo::add_todo2(string new_description,int new_id)
{
    // add todo with incremented id
    id = new_id;
    this->description = new_description;
}
void Todo:: mark_todo()
{
    this->completed = "done";
}