if (std_1->marks > std_2->marks && std_1->marks > std_3->marks)
{
    cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
    cout << " abal";
}
else if (std_2->marks > std_1->marks && std_2->marks > std_3->marks)
{
    cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
}
else if (std_3->marks > std_2->marks && std_3->marks > std_1->marks)
{
    cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
}
else if (std_1->marks == std_2->marks == std_3->marks)
{
    if (std_1->id < std_2->id && std_1->id < std_3->id)
    {
        cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
    }
    else if (std_2->id < std_1->id && std_2->id < std_3->id)
    {
        cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
    }
    else if (std_3->id < std_2->id && std_3->id < std_1->id)
    {
        cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
    }
}
else if (std_1->marks == std_2->marks)
{
    if (std_1->id < std_2->id && std_1->id < std_3->id)
    {
        cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
    }
    else if (std_2->id < std_1->id && std_2->id < std_3->id)
    {
        cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
    }
    else if (std_3->id < std_2->id && std_3->id < std_1->id)
    {
        cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
    }
}
else if (std_1->marks == std_3->marks)
{
    if (std_1->id < std_2->id && std_1->id < std_3->id)
    {
        cout << std_1->id << " " << std_1->name << " " << std_1->sec << " " << std_1->marks << endl;
    }
    else if (std_2->id < std_1->id && std_2->id < std_3->id)
    {
        cout << std_2->id << " " << std_2->name << " " << std_2->sec << " " << std_2->marks << endl;
    }
    else if (std_3->id < std_2->id && std_3->id < std_1->id)
    {
        cout << std_3->id << " " << std_3->name << " " << std_3->sec << " " << std_3->marks << endl;
    }
}