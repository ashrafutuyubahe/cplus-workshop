#include <iostream>
#include <stack>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <string>

using namespace std;

struct task {
    int taskId;
    string taskTitle;
    string TaskDescription;
    string taskCategory;
    string Taskpriority;
    string deadLine;
};

void printOnConsoleOptions(int *userInput) {
    cout << "\n 1. Add New Task" << endl;
    cout << "2. View All Tasks" << endl;
    cout << "3. Complete a Task" << endl;
    cout << "4. View Completed Tasks" << endl;
    cout << "5. View Task Categories" << endl;
    cout << "6. View Task Analytics" << endl;
    cout << "7. View Tasks Sorted by Deadline" << endl;
    cout << "8. Exit" << endl;
    cout << "=======================================" << endl;

    cin >> *userInput;
}

void promptToAddTask(task *newTask, list<task> *taskList) {
    cout << "Enter Task ID (e.g: 2, 1,...): " << endl;
    cin >> newTask->taskId;

    cin.ignore(); // to ignore the newline character after entering taskId
    cout << "Enter Task Title: " << endl;
    getline(cin, newTask->taskTitle);

    cout << "Enter Task Description: " << endl;
    getline(cin, newTask->TaskDescription);

    cout << "Enter Task Category (e.g., Work, Personal): " << endl;
    getline(cin, newTask->taskCategory);

    cout << "Enter Task Priority (1 = Low, 2 = Medium, 3 = High): " << endl;
    getline(cin, newTask->Taskpriority);

    cout << "Enter Task Deadline (YYYY-MM-DD): " << endl;
    getline(cin, newTask->deadLine);

    taskList->push_front(*newTask); // add task to the taskList

    cout << "Task added successfully! The task title is: " << taskList->front().taskTitle << endl;
}

void displayTasks(list<task> *taskList) {
    if (!taskList->empty()) {
        for (const auto &t : *taskList) {
            cout << "Task Title: " << t.taskTitle << endl;
            cout << "Description: " << t.TaskDescription << endl;
            cout << "Category: " << t.taskCategory << endl;
            cout << "Priority: " << t.Taskpriority << endl;
            cout << "Deadline: " << t.deadLine << endl;
            cout << "----------------------------------" << endl;
        }
    } else {
        cout << "There are no current tasks." << endl;
    }
}

int main() {
    int userInput;
    task passTask;
    list<task> taskList;

    cout << "____________________________===== Task Management System =====_________________________________" << endl;

    while (true) {
        printOnConsoleOptions(&userInput);

        switch (userInput) {
            case 1:
                promptToAddTask(&passTask, &taskList);
                break;

            case 2:
                displayTasks(&taskList);
                break;

            case 3:
                cout << "No completed task yet!" << endl;
                break;

            case 4:
                cout << "Displaying completed tasks..." << endl;
                break;

            case 8:
                cout << "Exiting the program..." << endl;
                return 0;

            default:
                cout << "Invalid input. Please choose a valid option." << endl;
                break;
        }
    }

    return 0;
}
