#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <iostream>
#include <string>

using namespace std;

struct Student{
    string name;
    int score;

    bool operator<(const Student & otherStudent){
        return score < otherStudent.score;
    }

    bool operator>(const Student & otherStudent){
        return score > otherStudent.score;
    }

    // жиди "<<"
    friend ostream& operator<<(ostream &os, const Student &student){
        os<<"Student:"<<student.name<<" "<<student.score<<endl;

        return os;
    }
};


#endif // STUDENT_H_INCLUDED
