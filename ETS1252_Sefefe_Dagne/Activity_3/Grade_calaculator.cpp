/*Write a program that reads the various assessments, compute the total mark and print the corresponding letter_grade based on the following scale*/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double test, quizzes, assignments, project, final_exam, total_mark;
    string letter_grade;

    cout << "Enter the mark of test: ";
    cin >> test;
    cout << "Enter the mark of quizzes: ";
    cin >> quizzes;
    cout << "Enter the mark of assignments: ";
    cin >> assignments;
    cout << "Enter the mark of project: ";
    cin >> project;
    cout << "Enter the mark of final exam: ";
    cin >> final_exam;

    if (test < 0 || test > 15 || quizzes < 0 || quizzes > 5 || assignments < 0 || assignments > 10 || project < 0 || project > 20 || final_exam < 0 || final_exam > 50) {
        cout << "Invalid input" << endl;
        return 0;
    }
    total_mark = test  + quizzes + assignments + project  + final_exam ;

    if (total_mark >= 90) {
        letter_grade = "A+";
    } else if (total_mark >= 80) {
        letter_grade = "A";
    } else if (total_mark >= 75) {
        letter_grade = "B+";
    } else if (total_mark >= 60) {
        letter_grade = "B";
    } else if (total_mark >= 55) {
        letter_grade = "C+";
    } else if (total_mark >= 45) {
        letter_grade = "C";
    } else if (total_mark >= 30) {
        letter_grade = "D";
    } else {
        letter_grade = "F";
    }

    cout << "The total mark is " << fixed << setprecision(2) << total_mark << endl;
    cout << "The letter grade is " << letter_grade << endl;

    return 0;
}

