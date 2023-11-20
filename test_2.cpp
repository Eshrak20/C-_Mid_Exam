

#include <stdio.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char sec[100];
    int marks;

    Student(int id, const char name[100], char sec[100], int marks)
    {
        this->id = id;
        strcpy(this->name, name);
        strcpy(this->sec, sec);
        this->marks = marks;
    }
};

int main()
{
    int x;
    cin >> x;

    for (int k = 0; k < x; k++)
    {
        int highest_marks = INT_MIN;
        int lowest_id = INT_MAX;

        Student *std_obj = nullptr;
        Student *std_obj_id = nullptr;
        for (int i = 0; i < x; i++)
        {
            int id, marks;
            char name[100];
            char sec[100];
            cin >> id >> name >> sec >> marks;
            Student *temp_obj = new Student(id, name, sec, marks);
            Student *temp_obj_id = new Student(id, name, sec, marks);

            if (highest_marks < temp_obj->marks)
            {
                highest_marks = temp_obj->marks;

                if (std_obj != nullptr)
                {
                    delete std_obj;
                }
                std_obj = temp_obj;
            }
            else
            {
                delete temp_obj;
            }
            if (lowest_id > temp_obj_id->id)
            {
                lowest_id = temp_obj_id->id;

                if (std_obj_id != nullptr)
                {
                    delete std_obj_id;
                }
                std_obj_id = temp_obj_id;
            }
            else
            {
                delete temp_obj_id;
            }
        }
        if (std_obj != nullptr && std_obj_id != nullptr)
        {
            cout << std_obj->id << " ";
            cout << std_obj->name << " ";
            cout << std_obj->sec << " ";
            cout << std_obj->marks << endl;

            delete std_obj;
            delete std_obj_id;
        }
    }

    return 0;
}
