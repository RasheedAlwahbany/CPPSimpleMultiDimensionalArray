#include "iostream"
#include <string.h>
using namespace std;
string** students;
int main(){
    students = new string*[10];
students[0]=new string[3];
students[0][1]="ahmed";
    cout<<students[0][1]<<endl;
    return 0;
}
