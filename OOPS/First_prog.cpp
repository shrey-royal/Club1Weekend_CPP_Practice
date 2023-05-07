/*
A hospital wants to create a database regarding covid-19 patients. The information to be stored is: Name, age, oxygen level, date of admission and date of discharge. 

Create a structure to store the information of various patients. Write a program to get the information of n number of patients and store them in the database.
*/

#include<iostream>
#include<string>
using namespace std;

class Patient{
    private:
        string name;
        int age;
        int oxygen_level;
        string date_of_admission;
        string date_of_discharge;
    public:
        //getter and setter methods
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return this->name;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return this->age;
        }
        void setOxygenLevel(int oxygen_level){
            this->oxygen_level = oxygen_level;
        }
        int getOxygenLevel(){
            return this->oxygen_level;
        }
        void setDateOfAdmission(string date_of_admission){
            this->date_of_admission = date_of_admission;
        }
        string getDateOfAdmission(){
            return this->date_of_admission;
        }
        void setDateOfDischarge(string date_of_discharge){
            this->date_of_discharge = date_of_discharge;
        }
        string getDateOfDischarge(){
            return this->date_of_discharge;
        }


        //constructor
        // this keyword is used to refer to the current object 
        Patient(string name, int age, int oxygen_level, string date_of_admission, string date_of_discharge){
            this->name = name;
            this->age = age;
            this->oxygen_level = oxygen_level;
            this->date_of_admission = date_of_admission;
            this->date_of_discharge = date_of_discharge;
        }

        //default constructor
        Patient(){
            this->name = "";
            this->age = 0;
            this->oxygen_level = 0;
            this->date_of_admission = "";
            this->date_of_discharge = "";
        }

        //print method in table format
        void print(){
            cout<<this->name<<"\t"<<this->age<<"\t"<<this->oxygen_level<<"\t"<<this->date_of_admission<<"\t"<<this->date_of_discharge<<endl;
        }

};

int main(){
    /*
    int n;
    cout<<"Enter the number of patients: ";
    cin>>n;
    Patient patients[n];
    string name, date_of_admission, date_of_discharge;
    int age, oxygen_level;
    for(int i=0; i<n; i++){
        cin.ignore();
        cout<<"Enter the name of patient "<<i+1<<": ";
        getline(cin, name);
        cout<<"Enter the age of patient "<<i+1<<": ";
        cin>>age;
        cout<<"Enter the oxygen level of patient "<<i+1<<": ";
        cin>>oxygen_level;
        cin.ignore();
        cout<<"Enter the date of admission of patient "<<i+1<<": ";
        getline(cin, date_of_admission);
        cin.ignore();
        cout<<"Enter the date of discharge of patient "<<i+1<<": ";
        getline(cin, date_of_discharge);
        patients[i] = Patient(name, age, oxygen_level, date_of_admission, date_of_discharge);
    }
    cout<<"Name\tAge\tOxygen Level\tDate of Admission\tDate of Discharge"<<endl;
    for(int i=0; i<n; i++){
        patients[i].print();
    }
    */

    Patient p1("Rahul", 56, 40, "12/00/2020", "12/12/2020");
    Patient p2("Vishal", 32, 50, "12/03/2020", "03/06/2020");
    Patient p3("Raju", 26, 20, "12/01/2020", "23/02/2020");

    cout<<"Name\tAge\tOxygen Level\tDate of Admission\tDate of Discharge"<<endl;
    p1.print();
    p2.print();
    p3.print();

    p1.setDateOfDischarge("12/03/2020");    //updating the date of discharge of patient 1
    cout << "Date of Discharge of Patient 1 is updated: " << p1.getDateOfDischarge() << endl;
    
    cout<<"\n\nName\tAge\tOxygen Level\tDate of Admission\tDate of Discharge"<<endl;
    p1.print();

    return 0;
}

/*
Task: 

1. Write a C++ program to implement a class called "Rectangle". The class should have data members to store the length and width of the rectangle. The class should also have methods to set and get the length and width of the rectangle. Additionally, the class should have a method to calculate and return the area of the rectangle.

2. Write a C++ program to implement a class called "BankAccount". The class should have data members to store the account holder's name, account number, and balance. The class should also have methods to set and get the name, account number, and balance. Additionally, the class should have methods to deposit and withdraw money from the account.

3. Write a C++ program to implement a class called "Employee". The class should have data members to store the employee's name, ID number, and hourly pay rate. The class should also have methods to set and get the name, ID number, and hourly pay rate. Additionally, the class should have a method to calculate and return the employee's weekly pay, based on the number of hours worked in the week.

4. Write a C++ program to implement a class called "Car". The class should have data members to store the make, model, and year of the car. The class should also have methods to set and get the make, model, and year of the car. Additionally, the class should have a method to calculate and return the car's gas mileage, based on the number of miles driven and the amount of gas consumed.

5. Write a C++ program to implement a class called "Student". The class should have data members to store the student's name, ID number, and grade point average (GPA). The class should also have methods to set and get the name, ID number, and GPA. Additionally, the class should have a method to determine and return the student's academic standing, based on their GPA (e.g. "good standing", "probation", "suspended").



*/