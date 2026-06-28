#include <iostream>
using namespace std;

struct Student {
    int rollNo;
    int marks;
};

int main() {
    Student s1 = {101, 85};
    Student* ptr = &s1;

    cout << ptr->rollNo << endl;
    cout << ptr->marks << endl;

    return 0;
}
