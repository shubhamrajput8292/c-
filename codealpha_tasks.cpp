#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

struct Course {
    string name;
    double grade;
    int creditHours;
};

void calculateGPAandCGPA() {
    int numCourses;
    vector<Course> courses;
    double totalGradePoints = 0;
    int totalCredits = 0;

    cout << "Enter the number of courses taken: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; ++i) {
        Course course;
        cout << "Enter the name of course " << i + 1 << ": ";
        cin >> course.name;
        cout << "Enter the grade for " << course.name << ": ";
        cin >> course.grade;
        cout << "Enter the credit hours for " << course.name << ": ";
        cin >> course.creditHours;

        courses.push_back(course);
        totalGradePoints += course.grade * course.creditHours;
        totalCredits += course.creditHours;
    }

    double gpa = totalGradePoints / totalCredits;

    cout << fixed << setprecision(2);
    cout << "\nCourse Details:" << endl;
    for (const auto& course : courses) {
        cout << "Course: " << course.name << ", Grade: " << course.grade << ", Credit Hours: " << course.creditHours << endl;
    }

    cout << "\nTotal Credits: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout << "GPA for the semester: " << gpa << endl;

    // Assuming CGPA calculation involves previous semesters
    double previousTotalGradePoints, previousTotalCredits;
    cout << "\nEnter total grade points from previous semesters: ";
    cin >> previousTotalGradePoints;
    cout << "Enter total credits from previous semesters: ";
    cin >> previousTotalCredits;

    double overallCGPA = (totalGradePoints + previousTotalGradePoints) / (totalCredits + previousTotalCredits);
    cout << "Overall CGPA: " << overallCGPA << endl;
}

int main() {
    calculateGPAandCGPA();
    return 0;
}