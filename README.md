#README for ASKISI1

WHAT IS IT ABOUT?

It's a simulation of a School using Classes and objects of Classes. 
The simulation is about entering students in the school, one student at the time, or multiple students at the time, and then entering a random number of teachers(including 0/NONE). 
It's a repeating process until there is no student left to enter the school, or there is no capacity in the school.
When the loop is over, the school is printed and finally the school is destroyed.

COMPILE AND RUN!

Command to compile: g++ askisi1.cpp -o school.exe
Execute with command line arguments: ./school.exe c_class c_yard c_stair c_corr
Worked in VSCode. 
Tested at VSC integrated terminal, Windows Powershell and CMD.

HOW IT WORKS?

Headers and Libraries:
For my simulation, I used only iostream, stdlib.h, string, time.h, and getname.cpp which I created so that I can get random student and teacher names.

Design:
Clases: Student, Teacher, Class, Corridor, Floor, Stair, Yard, School

Each Class has its private data members as given in the instructions, and its public methods to access data members. 
Each class has a Constructor, a Destructor, and print_Class method to print the content of the Class.

Additional Content in Classes:

class Student: Code speaks on itself.
class Teacher: Code speaks on itself.

class Class: 
-has an array of pointers to pointers of type Student, which memory is being allocated in the constructor with c_class.
-has a pointer to pointer of type Teacher.
-has enter_class method, which gets a pointer to type Student and places it on the *array of students of the class, accessing any private member of the student through its setter/getter methods.
-has place_teacher method, which gets a pointer to type Teacher and places it on the *teacher of the class, accessing any private member of the teacher through its setter/getter methods.

class Corridor:
-has an array of pointers to pointers of type Student, which memory is being allocated in the constructor with  c_corr.
-has enter_corr method, which gets a pointer to type Student and places it on the *array of students of the class, accessing any private member of the student through its setter/getter methods.
-has exit_corr method, which exits the last student entered corridor, setting its pointer to nullptr and returning a pointer to type student.
-has setindex method, when it is called changes the index of the student to exit and keep track of how many times that happened until a student who can exit is found. If there is no more students to check the index is being restored.
-has getnumclassbeforexit method, which gets the number of the class of the exiting student so that, enter_floor can check if the student can enter its class.

class Floor:
-has an array of pointers to pointers of type Class, which is being created in the constructor with the size of 6,(INSTRUCTIONS).
-has a pointer to type Corridor.
-has enter_floor method, which gets a pointer of type Student and enters him in corridor IF it is not equal to nullptr, accessing any private member of the student through its setter/getter methods. ELSE the loop to forward students through places start. WHILE the corridor is NOT EMPTY, get the number of class of the student to exit the corridor and check. IF num of the class is valid and IF the class to enter is not FULL and IF there is yet no teacher in class, ENTER. ELSE print messages and setindex of next student until there is no student left to check and BREAK the loop.
-has place_teacher method, which gets a pointer to type Teacher, gets his number of class to enter and enters him to that class, accessing any private member of the student through its setter/getter methods.

class Stair:
-has an array of pointers to pointers of type Student, which memory is being allocated in the constructor with  c_stair.
-has enter_stair method, which gets a pointer to type Student and places it on the *array of students of the stair, accessing any private member of the student through its setter/getter methods.
-has exit_corr method, which exits the last student entered stair, setting its pointer to nullptr and returning a pointer to type student.
-has setindex method, when it is called changes the index of the student to exit and keep track of how many times that happened until a student who can exit is found. If there is no more students to check the index is being restored.

class Yard:
-has an array of pointers to pointers of type Student, which memory is being allocated in the constructor with  c_yard.
-has enter_yard method, which gets a pointer to type Student and places it on the *array of students of the yard, accessing any private member of the student through its setter/getter methods.
-has exit_schoolyard method, which exits the last student entered yard, setting its pointer to nullptr and returning a pointer to type student.

class School:
-has an array of pointers to pointers of type Floor, which memory is being allocated in the constructor with the size of 3(INSTRUCTIONS).
-has a pointer to a pointer of type Yard and one of type Stair, which are being assigned the newly created objects of that types.
-has enter_school method, which gets a pointer of type Student, and enters it in yard, IF yard is FULL and IF the pointer of Student is equal to nullptr, accessing any private member of the student through its setter/getter methods. ELSE the loop to forward students from yard to stair start. WHILE the yard is NOT EMPTY and the STAIR is  NOT FULL, calls exit_schoolyard method, stores the pointer to Student to a temporary student pointer, declared in the private data  members, and passes it to enter_stair. When the loop is over print messages. Then the loop to forward students from stair to floors start. WHILE stair is NOT EMPTY, get the floor number of the student to exit stair and check IF the corridor of that floor is NOT FULL, and enter. ELSE setindex of next student, until there is no student left to check and BREAK the loop. When the loop is over, print messages and trigger enter_floor for each floor via a dummy pointer to Student equal to nullptr.
-has enter_school_inarray method, which gets an array of pointers to type Student and its size. Then it starts a loop to enter student after student in enter_school.
-has place_teacher method, which gets a pointer to type Teacher, and get his floor number via accessing his private members, through setter/getter methods.Then places him in his floor.

main:
-gets via command line arguments c_class, c_yard, c_stair, c_corr.
-creates the School
-has 2 arrays of pointer to pointers of type Student and Teacher, which memories are being allocated with the capacity of students and 18(INSTRUCTIONS)
-creates objects of Students and Teachers, with floor and class number, and the pointers of them are being stored in the arrays.
-"Shuffling" the arrays so that the enter is random
-enter loop, which enters students in the school until there is NO student left or there is NO place left in the schoolyard. Then picks a random number o teachers(including 0/NONE), and places them in their classes in the school.
-prints the school, by printing its places' content/
-deletes school and its places.
-deletes any Student and Teacher left out of school.
-END

WHY?

In my simulation, I used pointers to pass parameters to functions so that I can manipulate the content of them throughout the program, without creating new objects all the time. By creating each object exactly one time and storing its adress to a pointer, I could use it in all different stages and classes of the program, without hacving to create a new one in each Class.

HONORABLE MENTIONS!

-stackoverflow.com
-to all our Asian friends in youtube.com
-to admin George of OOP forum at lists.di.uoa.gr

©   Kosmas Poirazoglou, 
    Department of Informatics and Telecommunications of the University of Athens