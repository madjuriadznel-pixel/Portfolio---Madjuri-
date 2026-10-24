#include <iostream>
using namespace std;

int main() {
    // Declare variables
    string name; 
    double quiz, activity, examination, average;

    // Ask for student's name
    cout << "Enter student's name: Adznel J. Madjuri";
    getline(cin, name);

    // Ask for scores
    cout << "Enter Quiz score: 9/15";
    cin >> quiz;

    cout << "Enter Activity score: 35/50  ";
    cin >> activity;

    cout << "Enter Examination score: 85/100 ";
    cin >> examination;

    // Calculate the average
    average = (quiz + activity + examination) / 3;

    // Display the result
    cout << "\n--- STUDENT GRADE RESULT ---" << endl;
    cout << "Student Name: " << name << endl;
    cout << "Average Grade: " << average << endl;

    // Determine grade remarks and result
    if (average >= 90) {
        cout << "Grade Remarks: Excellent" << endl;
        cout << "Result: Passed" << endl;
    }
    else if (average >= 85) {
        cout << "Grade Remarks: Very Good" << endl;
        cout << "Result: Passed" << endl;
    }
    else if (average >= 80) {
        cout << "Grade Remarks: Good" << endl;
        cout << "Result: Passed" << endl;
    }
    else if (average >= 75) {
        cout << "Grade Remarks: Passed" << endl;
        cout << "Result: Passed" << endl;
    }
    else {
        cout << "Grade Remarks: Failed" << endl;
        cout << "Result: Failed" << endl;
    }

    return 0;
}