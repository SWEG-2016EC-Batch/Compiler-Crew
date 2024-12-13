 
#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam;
    cout << "Enter the mark for the test (out of 100): ";
    a:
    cin >> test;
    if(cin.fail() || test<0 || test>100){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto a;
    }
    b:
    cout << "Enter the mark for the quiz (out of 100): ";
    cin >> quiz;
    if(cin.fail() || quiz<0 || quiz>100){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto b;
    }
    c:
    cout << "Enter the mark for the project (out of 100): ";
    cin >> project;
    if(cin.fail() || project<0 || project>100){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto c;
    }
    d:
    cout << "Enter the mark for the assignment (out of 100): ";
    cin >> assignment;
    if(cin.fail() || assignment<0 || assignment>100){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto d;
    }
    e:
    cout << "Enter the mark for the final exam (out of 100): ";
    cin >> finalExam;
    if(cin.fail() || finalExam<0 || finalExam>100){
        cin.clear();
        cin.ignore();
        cout<<"Invalid Input! Try Again\n";
        goto e;
    }


    double totalMark = (test * 0.15) + (quiz * 0.05) + (project * 0.20) + (assignment * 0.10) + (finalExam * 0.50);



    string grade;
    if (totalMark >= 90) {
        grade = "A+";
    } else if (totalMark >= 80) {
        grade = "A";
    } else if (totalMark >= 75) {
        grade = "B+";
    } else if (totalMark >= 60) {
        grade = "B";
    } else if (totalMark >= 55) {
        grade = "C+";
    } else if (totalMark >= 45) {
        grade = "C";
    } else if (totalMark >= 30) {
        grade = "D";
    } else {
        grade = "F";
    }

    cout << "Total Mark: " << totalMark << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
