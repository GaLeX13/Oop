#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Group {
    class Student {
        string name;
    public:
        Student(string name) : name(name) {}
        string getName() { return name; }
    };
    vector<Student> students;
    string groupName;
public:
    Group(string name) : groupName(name) {}
    void addStudent(string name) { students.push_back(Student(name)); }
    void display() {
        cout << "Group: " << groupName << endl;
        for (auto& student : students) {
            cout << " - " << student.getName() << endl;
        }
    }
};

int main() {
    Group g1("Group A"), g2("Group B");
    g1.addStudent("Alice");
    g1.addStudent("Bob");
    g2.addStudent("Charlie");
    g2.addStudent("Diana");
    g1.display();
    g2.display();
    return 0;
}
