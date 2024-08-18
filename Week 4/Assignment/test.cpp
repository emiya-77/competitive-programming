#include <iostream>
#include <algorithm>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math;
    int eng;
};

bool cmp(Student a, Student b)
{
    if (a.eng == b.eng)
    {
        if (a.math == b.math)
        {
            return a.id <= b.id;
        }
        else
        {
            return a.math >= b.math;
        }
    }
    else
    {
        return a.eng >= b.eng;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].cls >> a[i].section >> a[i].id >> a[i].math >> a[i].eng;
    }

    sort(a, a + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].cls << " " << a[i].section << " " << a[i].id << " " << a[i].math << " " << a[i].eng << endl;
    }

    return 0;
}
