#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
class MemoryCalculate {
private:
    T id;
    string name;

public:
    MemoryCalculate(T id, string name) {
        this->id = id;
        this->name = name;
    }

    T getId() const {
        return id;
    }

    string getName() const {
        return name;
    }

    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

template <typename T>
void displayAll(const vector<MemoryCalculate<T>>& students) {
    if (students.empty()) {
        cout << "No students in the list.\n";
        return;
    }
    cout << "List of Students:\n";
    for (const auto& student : students) {
        student.display();
    }
}

template <typename T>
void searchById(const vector<MemoryCalculate<T>>& students, T id) {
    for (const auto& student : students) {
        if (student.getId() == id) {
            cout << "Student found:\n";
            student.display();
            return;
        }
    }
    cout << "Student with ID " << id << " not found.\n";
}

template <typename T>
void removeById(vector<MemoryCalculate<T>>& students, T id) {
    auto it = remove_if(students.begin(), students.end(), [id](const MemoryCalculate<T>& s) {
        return s.getId() == id;
    });

    if (it != students.end()) {
        students.erase(it, students.end());
        cout << "Student with ID " << id << " removed.\n";
    } else {
        cout << "Student with ID " << id << " not found.\n";
    }
}

int main() {
    vector<MemoryCalculate<int>> students;
    int choice;

    while (true) {
        cout << "\n=== Student Management Menu ===\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove Student by ID\n";
        cout << "4. Search Student by ID\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) break;

        switch (choice) {
            case 1: {
                int id;
                string name;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Name: ";
                cin.ignore();
                getline(cin, name);
                students.push_back(MemoryCalculate<int>(id, name));
                cout << "Student added successfully.\n";
                break;
            }
            case 2:
                displayAll(students);
                break;
            case 3: {
                int id;
                cout << "Enter ID to remove: ";
                cin >> id;
                removeById(students, id);
                break;
            }
            case 4: {
                int id;
                cout << "Enter ID to search: ";
                cin >> id;
                searchById(students, id);
                break;
            }
            default:
                cout << "Invalid choice!\n";
        }
    }

    return 0;
}
