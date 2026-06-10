#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

class Course
{
public:
    string courseName;
    float grade;
    int credits;
};

int main()
{
    int n;

    cout << "=========== CGPA CALCULATOR ===========" << endl;

    cout << "\nEnter Total Number of Courses : ";
    cin >> n;

    vector<Course> course(n);

    float totalGradePoints = 0;
    int totalCredits = 0;

    for(int i = 0; i < n; i++)
    {
        cin.ignore();

        cout << "\nEnter Course Name : ";
        getline(cin, course[i].courseName);

        cout << "Enter Grade Point : ";
        cin >> course[i].grade;

        cout << "Enter Credits : ";
        cin >> course[i].credits;

        totalGradePoints += course[i].grade * course[i].credits;

        totalCredits += course[i].credits;
    }

    float cgpa = totalGradePoints / totalCredits;

    cout << "\n\n=========== COURSE DETAILS ===========" << endl;

    cout << left << setw(20) << "Course"
         << setw(15) << "Grade"
         << setw(10) << "Credits" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << left << setw(20) << course[i].courseName
             << setw(15) << course[i].grade
             << setw(10) << course[i].credits << endl;
    }

    cout << fixed << setprecision(2);

    cout << "\nTotal Credits : " << totalCredits << endl;

    cout << "Final CGPA    : " << cgpa << endl;

    cout << "\nThank You For Using CGPA Calculator!" << endl;

    return 0;
}