#include <iostream>
#include <string>
using namespace std;

int RandIndex;

string arrayte[18] = {"George", "John", "Mike", "Jack", "Bryan", "Samantha", "Samuel", "Michele", "Mary", "Sofia", "Clair", "Kathrin", "Jonas", "Jenny", "Sean", "Donald", "Barrack", "Billy"};

string arrayst[20] = {"Oliver", "Jake", "Noah", "James", "Mason", "Robert", "Jacob", "Michael", "Charlie", "William", "Margaret", "Megan", "Jessica", "Lilly", "Tracy", "Sarah", "Mia", "Elizabeth", "Jennifer", "Emma"};

string get_random_teacher_name()
{
    RandIndex = rand() % 18;
    return arrayte[RandIndex];
}

string get_random_student_name()
{
    RandIndex = rand() % 20;
    return arrayst[RandIndex];
}
