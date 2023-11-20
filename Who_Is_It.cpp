#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public:
    int id;
    char name[100];
    char sec[100];
    int marks;

    Student(int id, const char name[100], const char sec[100], int marks)
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
    int flag = 0;

    for (int i = 0; i < x; i++)
    {
        int id, marks;
        char name[100];
        char sec[100];

        cin >> id >> name >> sec >> marks;
        Student *std_1 = new Student(id, name, sec, marks);

        cin >> id >> name >> sec >> marks;
        Student *std_2 = new Student(id, name, sec, marks);

        cin >> id >> name >> sec >> marks;
        Student *std_3 = new Student(id, name, sec, marks);

        if (std_1->marks > std_2->marks && std_1->marks > std_3->marks)
        {
            cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
        }
        else if (std_2->marks > std_1->marks && std_2->marks > std_3->marks)
        {
            cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
        }
        else if (std_3->marks > std_2->marks && std_3->marks > std_1->marks)
        {
            cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
        }
        else if (std_1->marks == std_2->marks)
        {
            if (std_1->id > std_2->id)
            {
                cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
            }
            else
            {
                cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
            }
        }

        else if (std_2->marks == std_3->marks)
        {
            if (std_2->id > std_3->id)
            {
                cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
            }
            else
            {
                cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
            }
        }
        else if (std_1->marks == std_3->marks)
        {
            if (std_1->id > std_3->id)
            {
                cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
            }
            else
            {
                cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
            }
        }

        delete std_1;
        delete std_2;
        delete std_3;
    }

    return 0;
}
