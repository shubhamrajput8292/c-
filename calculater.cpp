#include <iostream>
using namespace std;

float getGradePoint(string grade)
{
    if(grade == "O") return 10;
    if(grade == "A+") return 9;
    if(grade == "A") return 8;
    if(grade == "B+") return 7;
    if(grade == "B") return 6;
    if(grade == "C") return 5;
    if(grade == "P") return 4;
    return 0;
}

int main()
{
    int subjects;

    cout << "===== CGPA Calculator =====" << endl;

    cout << "Enter number of subjects: ";
    cin >> subjects;

    float totalCredits = 0;
    float totalPoints = 0;

    for(int i = 1; i <= subjects; i++)
    {
        string grade;
        float credit;

        cout << "\nSubject " << i << endl;

        cout << "Enter Grade: ";
        cin >> grade;

        cout << "Enter Credit: ";
        cin >> credit;

        float gp = getGradePoint(grade);

        totalCredits += credit;
        totalPoints += gp * credit;
    }


    float cgpa = totalPoints / totalCredits;

    float percentage = cgpa * 9.5;

    cout << "\n===== Result =====" << endl;
    cout << "CGPA = " << cgpa << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    return 0;
}