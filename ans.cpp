AI2301: Object Oriented Programming
Complete Question & Answer Book (25 Questions)

Q1: Book Class - Multiple Books with Tabular Display and Total Price
#include<iostream>
#include<iomanip>
using namespace std;
class Book {
private:
    int bookId;
    string bookName, author;
    float price;
public:
    void getDetails() {
        cout << "Enter Book ID: "; cin >> bookId;
        cin.ignore();
        cout << "Enter Book Name: "; getline(cin, bookName);
        cout << "Enter Author: "; getline(cin, author);
        cout << "Enter Price: "; cin >> price;
    }
    void printDetails() {
        cout << left << setw(8) << bookId << setw(20) << bookName
             << setw(20) << author << setw(10) << price << endl;
    }
    float getPrice() { return price; }
};
int main() {
    int n;
    cout << "How many books? "; cin >> n;
    Book b[100];
    for(int i = 0; i < n; i++) {
        cout << "\n--- Book " << i+1 << " ---\n";
        b[i].getDetails();
    }
    cout << "\n" << left << setw(8) << "ID" << setw(20) << "Name"
         << setw(20) << "Author" << setw(10) << "Price" << endl;
    cout << string(58, '-') << endl;
    float total = 0;
    for(int i = 0; i < n; i++) {
        b[i].printDetails();
        total += b[i].getPrice();
    }
    cout << "\nTotal Price of all books: Rs. " << total << endl;
    return 0;
}
 
Q2: Student Records System - Tabular Display and Average Marks
#include<iostream>
#include<iomanip>
using namespace std;
class Student {
private:
    int studentId;
    string studentName, department;
    float marks;
public:
    void getDetails() {
        cout << "Enter Student ID: "; cin >> studentId;
        cin.ignore();
        cout << "Enter Name: "; getline(cin, studentName);
        cout << "Enter Department: "; getline(cin, department);
        cout << "Enter Marks: "; cin >> marks;
    }
    void displayDetails() {
        cout << left << setw(8) << studentId << setw(20) << studentName
             << setw(15) << department << setw(10) << marks << endl;
    }
    float getMarks() { return marks; }
};
int main() {
    int n;
    cout << "How many students? "; cin >> n;
    Student s[100];
    for(int i = 0; i < n; i++) {
        cout << "\n--- Student " << i+1 << " ---\n";
        s[i].getDetails();
    }
    cout << "\n" << left << setw(8) << "ID" << setw(20) << "Name"
         << setw(15) << "Dept" << setw(10) << "Marks" << endl;
    cout << string(53, '-') << endl;
    float total = 0;
    for(int i = 0; i < n; i++) {
        s[i].displayDetails();
        total += s[i].getMarks();
    }
    cout << "\nAverage Marks: " << total / n << endl;
    return 0;
}
 
Q3: Employee Payroll System - Total Salary Expenditure
#include<iostream>
#include<iomanip>
using namespace std;
class Employee {
private:
    int empId;
    string empName, designation;
    float salary;
public:
    void acceptData() {
        cout << "Enter Emp ID: "; cin >> empId;
        cin.ignore();
        cout << "Enter Name: "; getline(cin, empName);
        cout << "Enter Designation: "; getline(cin, designation);
        cout << "Enter Salary: "; cin >> salary;
    }
    void showData() {
        cout << left << setw(8) << empId << setw(20) << empName
             << setw(20) << designation << setw(10) << salary << endl;
    }
    float getSalary() { return salary; }
};
int main() {
    int n;
    cout << "How many employees? "; cin >> n;
    Employee e[100];
    for(int i = 0; i < n; i++) {
        cout << "\n--- Employee " << i+1 << " ---\n";
        e[i].acceptData();
    }
    cout << "\n" << left << setw(8) << "ID" << setw(20) << "Name"
         << setw(20) << "Designation" << setw(10) << "Salary" << endl;
    cout << string(58, '-') << endl;
    float total = 0;
    for(int i = 0; i < n; i++) {
        e[i].showData();
        total += e[i].getSalary();
    }
    cout << "\nTotal Salary Expenditure: Rs. " << total << endl;
    return 0;
}
 
Q4: Book Class with Constructor and Destructor
#include<iostream>
using namespace std;
class Book {
    int bookId;
    string title, author;
    float price;
public:
    Book() : bookId(0), title("Unknown"), author("Unknown"), price(0) {
        cout << "Book object created (Default Constructor)" << endl;
    }
    Book(int id, string t, string a, float p) : bookId(id), title(t), author(a), price(p) {
        cout << "Book object created: " << title << endl;
    }
    void display() {
        cout << "ID: " << bookId << ", Title: " << title
             << ", Author: " << author << ", Price: " << price << endl;
    }
    ~Book() { cout << "Book object destroyed: " << title << endl; }
};
int main() {
    int id;
    string t, a;
    float p;
    cout << "Enter details for Book 1:\n";
    cout << "Enter Book ID: "; cin >> id; cin.ignore();
    cout << "Enter Title: "; getline(cin, t);
    cout << "Enter Author: "; getline(cin, a);
    cout << "Enter Price: "; cin >> p;
    Book b1(id, t, a, p);

    cout << "\nEnter details for Book 2:\n";
    cout << "Enter Book ID: "; cin >> id; cin.ignore();
    cout << "Enter Title: "; getline(cin, t);
    cout << "Enter Author: "; getline(cin, a);
    cout << "Enter Price: "; cin >> p;
    Book b2(id, t, a, p);

    cout << "\n--- Book Details ---\n";
    b1.display();
    b2.display();
    cout << "\n--- Exiting main, destructors will be called ---\n";
    return 0;
}
 
Q5: Student Class with Parameterized Constructor and Destructor
#include<iostream>
using namespace std;
class Student {
    int rollNo;
    string name;
    float marks;
public:
    Student(int r, string n, float m) : rollNo(r), name(n), marks(m) {
        cout << "Student object created: " << name << endl;
    }
    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
    }
    ~Student() { cout << "Student object destroyed: " << name << endl; }
};
int main() {
    int r;
    string n;
    float m;
    cout << "Enter details for Student 1:\n";
    cout << "Roll No: "; cin >> r; cin.ignore();
    cout << "Name: "; getline(cin, n);
    cout << "Marks: "; cin >> m;
    Student s1(r, n, m);

    cout << "\nEnter details for Student 2:\n";
    cout << "Roll No: "; cin >> r; cin.ignore();
    cout << "Name: "; getline(cin, n);
    cout << "Marks: "; cin >> m;
    Student s2(r, n, m);

    cout << "\nEnter details for Student 3:\n";
    cout << "Roll No: "; cin >> r; cin.ignore();
    cout << "Name: "; getline(cin, n);
    cout << "Marks: "; cin >> m;
    Student s3(r, n, m);

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();
    s3.display();
    cout << "\n--- Exiting main ---\n";
    return 0;
}
 
Q6: Employee Class with Constructor and Destructor
#include<iostream>
using namespace std;
class Employee {
    int empId;
    string name;
    float salary;
public:
    Employee(int id, string n, float s) : empId(id), name(n), salary(s) {
        cout << "Employee created: " << name << " (ID: " << empId << ")" << endl;
    }
    void display() {
        cout << "ID: " << empId << ", Name: " << name << ", Salary: Rs. " << salary << endl;
    }
    ~Employee() { cout << "Employee removed from memory: " << name << " (ID: " << empId << ")" << endl; }
};
int main() {
    int id;
    string n;
    float s;
    cout << "Enter details for Employee 1:\n";
    cout << "Employee ID: "; cin >> id; cin.ignore();
    cout << "Name: "; getline(cin, n);
    cout << "Salary: "; cin >> s;
    Employee e1(id, n, s);

    cout << "\nEnter details for Employee 2:\n";
    cout << "Employee ID: "; cin >> id; cin.ignore();
    cout << "Name: "; getline(cin, n);
    cout << "Salary: "; cin >> s;
    Employee e2(id, n, s);

    cout << "\nEnter details for Employee 3:\n";
    cout << "Employee ID: "; cin >> id; cin.ignore();
    cout << "Name: "; getline(cin, n);
    cout << "Salary: "; cin >> s;
    Employee e3(id, n, s);

    cout << "\n--- Employee Details ---\n";
    e1.display();
    e2.display();
    e3.display();
    cout << "\n--- Exiting main ---\n";
    return 0;
}
 
Q7: BankAccount - Static Members and Object as Argument
#include<iostream>
using namespace std;
class BankAccount {
    int accNo;
    string holderName;
    double balance;
    static int totalAccounts;
    static double totalBalance;
public:
    BankAccount() : accNo(0), holderName(""), balance(0) {}
    BankAccount(int no, string name, double bal) : accNo(no), holderName(name), balance(bal) {
        totalAccounts++; totalBalance += balance;
    }
    void displayBalance() {
        cout << holderName << " (Acc#" << accNo << "): Rs. " << balance << endl;
    }
    void compareBalance(BankAccount &other) {
        cout << "\n--- Balances in Ascending Order ---\n";
        if(balance <= other.balance) { displayBalance(); other.displayBalance(); }
        else { other.displayBalance(); displayBalance(); }
    }
    static void showTotalAccounts() { cout << "Total Accounts: " << totalAccounts << endl; }
    static void showTotalBalance() { cout << "Total Balance: Rs. " << totalBalance << endl; }
};
int BankAccount::totalAccounts = 0;
double BankAccount::totalBalance = 0;
int main() {
    int no;
    string name;
    double bal;
    cout << "Enter details for Account 1:\n";
    cout << "Account No: "; cin >> no; cin.ignore();
    cout << "Holder Name: "; getline(cin, name);
    cout << "Balance: "; cin >> bal;
    BankAccount a1(no, name, bal);

    cout << "\nEnter details for Account 2:\n";
    cout << "Account No: "; cin >> no; cin.ignore();
    cout << "Holder Name: "; getline(cin, name);
    cout << "Balance: "; cin >> bal;
    BankAccount a2(no, name, bal);

    cout << "\nEnter details for Account 3:\n";
    cout << "Account No: "; cin >> no; cin.ignore();
    cout << "Holder Name: "; getline(cin, name);
    cout << "Balance: "; cin >> bal;
    BankAccount a3(no, name, bal);

    BankAccount::showTotalAccounts();
    BankAccount::showTotalBalance();
    a1.compareBalance(a2);
    a2.compareBalance(a3);
    return 0;
}
 
Q8: Student Class - Friend Function comparePercentage()
#include<iostream>
#include<iomanip>
using namespace std;
class Student {
    int rollNo;
    string name;
    float marks[5];
    float percentage;
    string division;
public:
    Student() : rollNo(0), name(""), percentage(0), division("") {}
    void getDetails() {
        cout << "Enter Roll No: "; cin >> rollNo; cin.ignore();
        cout << "Enter Name: "; getline(cin, name);
        cout << "Enter marks of 5 subjects:\n";
        for(int i = 0; i < 5; i++) {
            cout << "  Subject " << i+1 << ": "; cin >> marks[i];
        }
        calcPercentage();
        calcDivision();
    }
    void calcPercentage() {
        float total = 0;
        for(int i = 0; i < 5; i++) total += marks[i];
        percentage = total / 5.0;
    }
    void calcDivision() {
        if(percentage >= 60) division = "First";
        else if(percentage >= 50) division = "Second";
        else if(percentage >= 40) division = "Third";
        else division = "Fail";
    }
    void display() {
        cout << "Roll: " << rollNo << ", Name: " << name
             << ", Percentage: " << fixed << setprecision(2) << percentage
             << "%, Division: " << division << endl;
    }
    friend void comparePercentage(Student &s1, Student &s2);
    ~Student() { cout << "Student object destroyed: " << name << endl; }
};
void comparePercentage(Student &s1, Student &s2) {
    cout << "\n--- Comparing Percentages ---\n";
    if(s1.percentage >= s2.percentage)
        cout << s1.name << " has higher percentage: " << s1.percentage << "%" << endl;
    else
        cout << s2.name << " has higher percentage: " << s2.percentage << "%" << endl;
}
int main() {
    Student s1, s2;
    cout << "--- Enter details for Student 1 ---\n";
    s1.getDetails();
    cout << "\n--- Enter details for Student 2 ---\n";
    s2.getDetails();
    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();
    comparePercentage(s1, s2);
    cout << "\n--- Exiting main ---\n";
    return 0;
}
 
Q9: ParkingTicket - Static Members, Dynamic Allocation, Friend Function
#include<iostream>
using namespace std;
class ParkingTicket {
    int ticketNumber;
    string vehicleNumber;
    float parkingFee;
    static int totalTickets;
    static float totalCollection;
public:
    ParkingTicket(int tn, string vn, float fee) : ticketNumber(tn), vehicleNumber(vn), parkingFee(fee) {
        totalTickets++; totalCollection += fee;
        cout << "Ticket #" << tn << " issued for " << vn << endl;
    }
    void display() {
        cout << "Ticket: " << ticketNumber << ", Vehicle: " << vehicleNumber
             << ", Fee: Rs. " << parkingFee << endl;
    }
    static void showTotalTickets() { cout << "Total Tickets Issued: " << totalTickets << endl; }
    static void showTotalCollection() { cout << "Total Collection: Rs. " << totalCollection << endl; }
    friend void compareFees(ParkingTicket &a, ParkingTicket &b);
    ~ParkingTicket() { cout << "Ticket #" << ticketNumber << " destroyed." << endl; }
};
int ParkingTicket::totalTickets = 0;
float ParkingTicket::totalCollection = 0;
void compareFees(ParkingTicket &a, ParkingTicket &b) {
    cout << "\n--- Fees in Increasing Order ---\n";
    if(a.parkingFee <= b.parkingFee) { a.display(); b.display(); }
    else { b.display(); a.display(); }
}
int main() {
    int tn;
    string vn;
    float fee;
    cout << "Enter details for Ticket 1:\n";
    cout << "Ticket Number: "; cin >> tn; cin.ignore();
    cout << "Vehicle Number: "; getline(cin, vn);
    cout << "Parking Fee: "; cin >> fee;
    ParkingTicket *p1 = new ParkingTicket(tn, vn, fee);

    cout << "\nEnter details for Ticket 2:\n";
    cout << "Ticket Number: "; cin >> tn; cin.ignore();
    cout << "Vehicle Number: "; getline(cin, vn);
    cout << "Parking Fee: "; cin >> fee;
    ParkingTicket *p2 = new ParkingTicket(tn, vn, fee);

    cout << "\nEnter details for Ticket 3:\n";
    cout << "Ticket Number: "; cin >> tn; cin.ignore();
    cout << "Vehicle Number: "; getline(cin, vn);
    cout << "Parking Fee: "; cin >> fee;
    ParkingTicket *p3 = new ParkingTicket(tn, vn, fee);

    cout << endl;
    p1->display(); p2->display(); p3->display();
    cout << endl;
    ParkingTicket::showTotalTickets();
    ParkingTicket::showTotalCollection();
    compareFees(*p1, *p2);
    compareFees(*p2, *p3);
    delete p1; delete p2; delete p3;
    return 0;
}
 
Q10: Complex Number - Operator Overloading (+, -, *)
#include<iostream>
using namespace std;
class Complex {
    float real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}
    void input(string label) {
        cout << "Enter real part of " << label << ": "; cin >> real;
        cout << "Enter imaginary part of " << label << ": "; cin >> imag;
    }
    Complex operator+(const Complex &c) { return Complex(real + c.real, imag + c.imag); }
    Complex operator-(const Complex &c) { return Complex(real - c.real, imag - c.imag); }
    Complex operator*(const Complex &c) {
        return Complex(real*c.real - imag*c.imag, real*c.imag + imag*c.real);
    }
    void display() {
        if(imag >= 0) cout << real << " + " << imag << "i";
        else cout << real << " - " << -imag << "i";
        cout << endl;
    }
};
int main() {
    Complex c1, c2;
    c1.input("C1");
    c2.input("C2");
    cout << "\nC1 = "; c1.display();
    cout << "C2 = "; c2.display();
    Complex sum = c1 + c2, diff = c1 - c2, prod = c1 * c2;
    cout << "C1 + C2 = "; sum.display();
    cout << "C1 - C2 = "; diff.display();
    cout << "C1 * C2 = "; prod.display();
    return 0;
}
 
Q11: Number Class - Unary Minus Operator Overloading
#include<iostream>
using namespace std;
class Number {
    int value;
public:
    void input() { cout << "Enter a number: "; cin >> value; }
    void display() { cout << "Value = " << value << endl; }
    Number operator-() { Number temp; temp.value = -value; return temp; }
};
int main() {
    Number n1;
    n1.input();
    cout << "Original: "; n1.display();
    Number n2 = -n1;
    cout << "Negated:  "; n2.display();
    return 0;
}
 
Q12: Integer Class - Pre-increment and Post-increment Operator Overloading
#include<iostream>
using namespace std;
class Integer {
    int value;
public:
    Integer(int v = 0) : value(v) {}
    Integer& operator++() { value++; return *this; }
    Integer operator++(int) { Integer temp = *this; value++; return temp; }
    void display() { cout << "Value = " << value << endl; }
};
int main() {
    int v;
    cout << "Enter an integer value: "; cin >> v;
    Integer obj(v);
    cout << "Before increment: "; obj.display();
    ++obj;
    cout << "After pre-increment (++obj): "; obj.display();
    Integer old = obj++;
    cout << "Value returned by post-increment (obj++): "; old.display();
    cout << "After post-increment: "; obj.display();
    return 0;
}
 
Q13: Employee Hierarchy - Inheritance with Salary Calculation
#include<iostream>
#include<iomanip>
using namespace std;
class Employee {
protected:
    string Emp_name, Address, Mail_id, Mobile_no;
    int Emp_id;
public:
    void getEmpData() {
        cout << "Enter Name: "; cin.ignore(); getline(cin, Emp_name);
        cout << "Enter ID: "; cin >> Emp_id; cin.ignore();
        cout << "Enter Address: "; getline(cin, Address);
        cout << "Enter Mail ID: "; getline(cin, Mail_id);
        cout << "Enter Mobile No: "; getline(cin, Mobile_no);
    }
    void showEmpData() {
        cout << "Name: " << Emp_name << "\nID: " << Emp_id
             << "\nAddress: " << Address << "\nMail: " << Mail_id
             << "\nMobile: " << Mobile_no << endl;
    }
};
class Programmer : public Employee {
    double BP;
public:
    void getData() { cout << "\n--- Enter Programmer Details ---\n"; getEmpData(); cout << "Enter Basic Pay: "; cin >> BP; }
    void generatePaySlip() {
        double DA=0.52*BP, HRA=0.27*BP, PF=0.12*BP, SCF=0.001*BP;
        double gross=BP+DA+HRA, net=gross-PF-SCF;
        cout << "\n=== Pay Slip (Programmer) ===" << endl; showEmpData();
        cout << fixed << setprecision(2);
        cout << "Basic Pay: " << BP << "\nDA (52%): " << DA << "\nHRA (27%): " << HRA
             << "\nGross Salary: " << gross << "\nPF (12%): " << PF
             << "\nStaff Club Fund (0.1%): " << SCF << "\nNet Salary: " << net << endl;
    }
};
class TeamLead : public Employee {
    double BP;
public:
    void getData() { cout << "\n--- Enter Team Lead Details ---\n"; getEmpData(); cout << "Enter Basic Pay: "; cin >> BP; }
    void generatePaySlip() {
        double DA=0.52*BP, HRA=0.27*BP, PF=0.12*BP, SCF=0.001*BP;
        double gross=BP+DA+HRA, net=gross-PF-SCF;
        cout << "\n=== Pay Slip (Team Lead) ===" << endl; showEmpData();
        cout << fixed << setprecision(2);
        cout << "Basic Pay: " << BP << "\nDA (52%): " << DA << "\nHRA (27%): " << HRA
             << "\nGross Salary: " << gross << "\nPF (12%): " << PF
             << "\nStaff Club Fund (0.1%): " << SCF << "\nNet Salary: " << net << endl;
    }
};
class AssistantProjectManager : public Employee {
    double BP;
public:
    void getData() { cout << "\n--- Enter Asst. Project Manager Details ---\n"; getEmpData(); cout << "Enter Basic Pay: "; cin >> BP; }
    void generatePaySlip() {
        double DA=0.52*BP, HRA=0.27*BP, PF=0.12*BP, SCF=0.001*BP;
        double gross=BP+DA+HRA, net=gross-PF-SCF;
        cout << "\n=== Pay Slip (Asst. Project Manager) ===" << endl; showEmpData();
        cout << fixed << setprecision(2);
        cout << "Basic Pay: " << BP << "\nDA (52%): " << DA << "\nHRA (27%): " << HRA
             << "\nGross Salary: " << gross << "\nPF (12%): " << PF
             << "\nStaff Club Fund (0.1%): " << SCF << "\nNet Salary: " << net << endl;
    }
};
class ProjectManager : public Employee {
    double BP;
public:
    void getData() { cout << "\n--- Enter Project Manager Details ---\n"; getEmpData(); cout << "Enter Basic Pay: "; cin >> BP; }
    void generatePaySlip() {
        double DA=0.52*BP, HRA=0.27*BP, PF=0.12*BP, SCF=0.001*BP;
        double gross=BP+DA+HRA, net=gross-PF-SCF;
        cout << "\n=== Pay Slip (Project Manager) ===" << endl; showEmpData();
        cout << fixed << setprecision(2);
        cout << "Basic Pay: " << BP << "\nDA (52%): " << DA << "\nHRA (27%): " << HRA
             << "\nGross Salary: " << gross << "\nPF (12%): " << PF
             << "\nStaff Club Fund (0.1%): " << SCF << "\nNet Salary: " << net << endl;
    }
};
int main() {
    Programmer p; p.getData(); p.generatePaySlip();
    TeamLead tl; tl.getData(); tl.generatePaySlip();
    AssistantProjectManager apm; apm.getData(); apm.generatePaySlip();
    ProjectManager pm; pm.getData(); pm.generatePaySlip();
    return 0;
}
 
Q14: Employee Salary System Using Single Inheritance
#include<iostream>
#include<iomanip>
using namespace std;
class Employee {
protected:
    int empId; string empName; double basicSalary;
public:
    void inputDetails() {
        cout << "Enter Employee ID: "; cin >> empId; cin.ignore();
        cout << "Enter Employee Name: "; getline(cin, empName);
        cout << "Enter Basic Salary: "; cin >> basicSalary;
    }
    void displayDetails() {
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << empName << endl;
        cout << "Basic Salary: Rs. " << fixed << setprecision(2) << basicSalary << endl;
    }
};
class Manager : public Employee {
    double bonus;
public:
    void inputBonus() { cout << "Enter Monthly Bonus: "; cin >> bonus; }
    void displayTotal() {
        double total = basicSalary + bonus;
        cout << "\n=== Employee Information ===" << endl;
        displayDetails();
        cout << "Bonus: Rs. " << fixed << setprecision(2) << bonus << endl;
        cout << "Total Salary: Rs. " << total << endl;
    }
};
int main() {
    Manager m;
    cout << "--- Enter Manager Details ---\n";
    m.inputDetails(); m.inputBonus(); m.displayTotal();
    return 0;
}
 
Q15: Shape - Virtual Function, Triangle and Rectangle Areas
#include<iostream>
#include<iomanip>
using namespace std;
class Shape {
protected:
    double dim1, dim2;
public:
    void inputDimensions() { cout << "Enter dimension 1: "; cin >> dim1; cout << "Enter dimension 2: "; cin >> dim2; }
    virtual double compute_area() = 0;
};
class Triangle : public Shape {
public:
    double compute_area() { return 0.5 * dim1 * dim2; }
};
class Rectangle : public Shape {
public:
    double compute_area() { return dim1 * dim2; }
};
int main() {
    Shape *s; int choice;
    cout << "1. Triangle\n2. Rectangle\nEnter choice: "; cin >> choice;
    if(choice == 1) {
        Triangle t; s = &t;
        cout << "Enter base and height:\n"; s->inputDimensions();
        cout << fixed << setprecision(2) << "Area of Triangle = " << s->compute_area() << endl;
    } else {
        Rectangle r; s = &r;
        cout << "Enter length and breadth:\n"; s->inputDimensions();
        cout << fixed << setprecision(2) << "Area of Rectangle = " << s->compute_area() << endl;
    }
    return 0;
}
 
Q16: Salary Calculation System - Abstract Class, Runtime Polymorphism
#include<iostream>
#include<iomanip>
using namespace std;
class Employee {
protected:
    double basicPay, allowance;
public:
    void getData() { cout << "Enter Basic Pay: "; cin >> basicPay; cout << "Enter Allowance: "; cin >> allowance; }
    virtual double calculate_salary() = 0;
};
class PermanentEmployee : public Employee {
public:
    double calculate_salary() { return basicPay + allowance; }
};
class ContractEmployee : public Employee {
public:
    double calculate_salary() { return basicPay; }
};
int main() {
    Employee *e; int choice;
    cout << "1. Permanent Employee\n2. Contract Employee\nChoice: "; cin >> choice;
    if(choice == 1) {
        PermanentEmployee pe; e = &pe;
        cout << "\n--- Permanent Employee ---\n"; e->getData();
        cout << fixed << setprecision(2) << "Salary: Rs. " << e->calculate_salary() << endl;
    } else {
        ContractEmployee ce; e = &ce;
        cout << "\n--- Contract Employee ---\n"; e->getData();
        cout << fixed << setprecision(2) << "Salary: Rs. " << e->calculate_salary() << endl;
    }
    return 0;
}
 
Q17: Electricity Bill System - Abstract Class, Dynamic Binding
#include<iostream>
#include<iomanip>
using namespace std;
class ElectricityBill {
protected:
    double unitsConsumed, ratePerUnit;
public:
    void input() { cout << "Enter Units Consumed: "; cin >> unitsConsumed; cout << "Enter Rate Per Unit: "; cin >> ratePerUnit; }
    virtual double calculate_bill() = 0;
};
class Domestic : public ElectricityBill {
public:
    double calculate_bill() { return unitsConsumed * ratePerUnit; }
};
class Commercial : public ElectricityBill {
public:
    double calculate_bill() {
        double bill = unitsConsumed * ratePerUnit;
        bill += bill * 0.10;
        return bill;
    }
};
int main() {
    ElectricityBill *bill; int choice;
    cout << "1. Domestic\n2. Commercial\nChoice: "; cin >> choice;
    if(choice == 1) {
        Domestic d; bill = &d;
        cout << "\n--- Domestic Bill ---\n"; bill->input();
        cout << fixed << setprecision(2) << "Bill Amount: Rs. " << bill->calculate_bill() << endl;
    } else {
        Commercial c; bill = &c;
        cout << "\n--- Commercial Bill ---\n"; bill->input();
        cout << fixed << setprecision(2) << "Bill Amount (with 10% surcharge): Rs. " << bill->calculate_bill() << endl;
    }
    return 0;
}
 
Q18: Vehicle Interface - Bicycle, Bike, Car (Java)
#include <iostream>
using namespace std;

class Vehicle {
protected:
    int speed;
    int gear;

public:
    Vehicle() {
        speed = 0;
        gear = 1;
    }

    virtual void gearChange(int gear) = 0;
    virtual void speedUp(int increment) = 0;
    virtual void applyBrakes(int decrement) = 0;
};

class Bicycle : public Vehicle {
public:
    void gearChange(int g) override {
        gear = g;
        cout << "Bicycle gear changed to " << gear << endl;
    }

    void speedUp(int inc) override {
        speed += inc;
        cout << "Bicycle speed increased to " << speed << endl;
    }

    void applyBrakes(int dec) override {
        speed -= dec;
        if (speed < 0) {
            speed = 0;
            cout << "STOP" << endl;
        } else {
            cout << "Bicycle speed decreased to " << speed << endl;
        }
    }
};

class Bike : public Vehicle {
public:
    void gearChange(int g) override {
        gear = g;
        cout << "Bike gear changed to " << gear << endl;
    }

    void speedUp(int inc) override {
        speed += inc;
        cout << "Bike speed increased to " << speed << endl;
    }

    void applyBrakes(int dec) override {
        speed -= dec;
        if (speed < 0) {
            speed = 0;
            cout << "STOP" << endl;
        } else {
            cout << "Bike speed decreased to " << speed << endl;
        }
    }
};

class Car : public Vehicle {
public:
    void gearChange(int g) override {
        gear = g;
        cout << "Car gear changed to " << gear << endl;
    }

    void speedUp(int inc) override {
        speed += inc;
        cout << "Car speed increased to " << speed << endl;
    }

    void applyBrakes(int dec) override {
        speed -= dec;
        if (speed < 0) {
            speed = 0;
            cout << "STOP" << endl;
        } else {
            cout << "Car speed decreased to " << speed << endl;
        }
    }
};

int main() {
    int choice, g, s, b;

    cout << "Choose Vehicle:\n1. Bicycle\n2. Bike\n3. Car\n";
    cin >> choice;

    cout << "Enter gear value: ";
    cin >> g;

    cout << "Enter speed increment: ";
    cin >> s;

    cout << "Enter brake decrement: ";
    cin >> b;

    Vehicle *v;

    if (choice == 1)
        v = new Bicycle();
    else if (choice == 2)
        v = new Bike();
    else
        v = new Car();

    cout << "\n--- Output ---\n";
    v->gearChange(g);
    v->speedUp(s);
    v->applyBrakes(b);

    delete v;

    return 0;
}
 
Q19: Student Result Processing - Exception Handling
#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cout << "Enter number of subjects: "; cin >> n;
    float marks[10], total = 0;
    try {
        if(n < 0) throw string("Number of subjects cannot be negative!");
        if(n == 0) throw string("Division by zero! Number of subjects cannot be zero.");
        for(int i = 0; i < n; i++) {
            cout << "Enter marks for subject " << i+1 << ": "; cin >> marks[i];
            if(marks[i] < 0 || marks[i] > 100) throw string("Invalid marks! Must be between 0 and 100.");
            total += marks[i];
        }
        float percentage = total / n;
        string grade;
        if(percentage >= 90) grade = "A+";
        else if(percentage >= 80) grade = "A";
        else if(percentage >= 70) grade = "B";
        else if(percentage >= 60) grade = "C";
        else if(percentage >= 50) grade = "D";
        else if(percentage >= 40) grade = "E";
        else grade = "F (Fail)";
        cout << fixed << setprecision(2);
        cout << "\nTotal: " << total << "\nPercentage: " << percentage << "%" << "\nGrade: " << grade << endl;
    }
    catch(string &e) { cout << "Exception: " << e << endl; }
    return 0;
}
 
Q20: Employee Age Verification - Exception Handling
#include<iostream>
using namespace std;
int main() {
    string name; int age, experience;
    try {
        cout << "Enter Employee Name: "; cin.ignore(); getline(cin, name);
        cout << "Enter Age: "; cin >> age;
        if(age < 18 || age > 60) throw string("Invalid Age! Must be between 18 and 60.");
        cout << "Enter Years of Experience: "; cin >> experience;
        if(experience < 0) throw string("Invalid Experience! Cannot be negative.");
        if(experience > (age - 18)) throw string("Experience exceeds possible working years!");
        cout << "\n=== Registration Successful ===" << endl;
        cout << "Name: " << name << "\nAge: " << age << "\nExperience: " << experience << " years" << endl;
    }
    catch(string &e) { cout << "Registration Failed! Exception: " << e << endl; }
    return 0;
}
 
Q21: AreaCalculator - Method Overloading
#include<iostream>
#include<iomanip>
using namespace std;
class AreaCalculator {
public:
    double area(double side) { return side * side; }
    double area(double length, double breadth) { return length * breadth; }
    double area(float radius) { return 3.14159265 * radius * radius; }
};
int main() {
    AreaCalculator calc;
    double side, len, br;
    float rad;
    cout << fixed << setprecision(2);
    cout << "Enter side of square: "; cin >> side;
    cout << "Area of Square: " << calc.area(side) << endl;
    cout << "\nEnter length of rectangle: "; cin >> len;
    cout << "Enter breadth of rectangle: "; cin >> br;
    cout << "Area of Rectangle: " << calc.area(len, br) << endl;
    cout << "\nEnter radius of circle: "; cin >> rad;
    cout << "Area of Circle: " << calc.area(rad) << endl;
    return 0;
}
 
Q22: Calculator - Method Overloading (Multiplication)
#include<iostream>
#include<iomanip>
using namespace std;
class Calculator {
public:
    int multiply(int a, int b) { return a * b; }
    int multiply(int a, int b, int c) { return a * b * c; }
    double multiply(double a, double b) { return a * b; }
};
int main() {
    Calculator calc;
    int a, b, c;
    double d1, d2;
    cout << "--- Multiply two integers ---\n";
    cout << "Enter two integers: "; cin >> a >> b;
    cout << "Result: " << calc.multiply(a, b) << endl;
    cout << "\n--- Multiply three integers ---\n";
    cout << "Enter three integers: "; cin >> a >> b >> c;
    cout << "Result: " << calc.multiply(a, b, c) << endl;
    cout << "\n--- Multiply two doubles ---\n";
    cout << "Enter two double values: "; cin >> d1 >> d2;
    cout << fixed << setprecision(2);
    cout << "Result: " << calc.multiply(d1, d2) << endl;
    return 0;
}
 
Q23: Hierarchical Inheritance - Area of Circle, Rectangle, Triangle (Java)
import java.util.Scanner;
class Shape {
    double area() { return 0; }
}
class Circle extends Shape {
    double radius;
    Circle(double r) { radius = r; }
    double area() { return Math.PI * radius * radius; }
}
class Rectangle extends Shape {
    double length, breadth;
    Rectangle(double l, double b) { length = l; breadth = b; }
    double area() { return length * breadth; }
}
class Triangle extends Shape {
    double base, height;
    Triangle(double b, double h) { base = b; height = h; }
    double area() { return 0.5 * base * height; }
}
public class AreaDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius of circle: ");
        double r = sc.nextDouble();
        Shape s = new Circle(r);
        System.out.printf("Area of Circle: %.2f\n", s.area());
        System.out.print("Enter length and breadth of rectangle: ");
        double l = sc.nextDouble(), b = sc.nextDouble();
        s = new Rectangle(l, b);
        System.out.printf("Area of Rectangle: %.2f\n", s.area());
        System.out.print("Enter base and height of triangle: ");
        double base = sc.nextDouble(), h = sc.nextDouble();
        s = new Triangle(base, h);
        System.out.printf("Area of Triangle: %.2f\n", s.area());
    }
}
 
Q24: Hierarchical Inheritance - Perimeter of Circle, Rectangle, Triangle (Java)
import java.util.Scanner;
class Shape {
    double perimeter() { return 0; }
}
class Circle extends Shape {
    double radius;
    Circle(double r) { radius = r; }
    double perimeter() { return 2 * Math.PI * radius; }
}
class Rectangle extends Shape {
    double length, breadth;
    Rectangle(double l, double b) { length = l; breadth = b; }
    double perimeter() { return 2 * (length + breadth); }
}
class Triangle extends Shape {
    double a, b, c;
    Triangle(double a, double b, double c) { this.a = a; this.b = b; this.c = c; }
    double perimeter() { return a + b + c; }
}
public class PerimeterDemo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter radius of circle: ");
        double r = sc.nextDouble();
        Shape s = new Circle(r);
        System.out.printf("Perimeter of Circle: %.2f\n", s.perimeter());
        System.out.print("Enter length and breadth of rectangle: ");
        double l = sc.nextDouble(), b = sc.nextDouble();
        s = new Rectangle(l, b);
        System.out.printf("Perimeter of Rectangle: %.2f\n", s.perimeter());
        System.out.print("Enter 3 sides of triangle: ");
        double s1 = sc.nextDouble(), s2 = sc.nextDouble(), s3 = sc.nextDouble();
        s = new Triangle(s1, s2, s3);
        System.out.printf("Perimeter of Triangle: %.2f\n", s.perimeter());
    }
}
 
Q25: Multithreading - Even, Odd, and Divisible by 5 using Thread Class and Runnable Interface (Java)
class EvenThread extends Thread {
    int limit;
    EvenThread(int limit) { this.limit = limit; }
    public void run() {
        System.out.println("--- Even Numbers (1 to " + limit + ") ---");
        for(int i = 2; i <= limit; i += 2) {
            System.out.println("Even: " + i);
            try { Thread.sleep(100); } catch(InterruptedException e) {}
        }
    }
}
class OddRunnable implements Runnable {
    int limit;
    OddRunnable(int limit) { this.limit = limit; }
    public void run() {
        System.out.println("--- Odd Numbers (1 to " + limit + ") ---");
        for(int i = 1; i <= limit; i += 2) {
            System.out.println("Odd:  " + i);
            try { Thread.sleep(100); } catch(InterruptedException e) {}
        }
    }
}
class DivBy5Thread extends Thread {
    int limit;
    DivBy5Thread(int limit) { this.limit = limit; }
    public void run() {
        System.out.println("--- Numbers Divisible by 5 (1 to " + limit + ") ---");
        for(int i = 5; i <= limit; i += 5) {
            System.out.println("Div5: " + i);
            try { Thread.sleep(150); } catch(InterruptedException e) {}
        }
    }
}
public class ThreadDemo {
    public static void main(String[] args) throws InterruptedException {
        // Part A: Even (Thread class) and Odd (Runnable interface) from 1 to 20
        System.out.println("===== Part A: Even & Odd (1 to 20) =====");
        EvenThread t1 = new EvenThread(20);
        Thread t2 = new Thread(new OddRunnable(20));
        t1.start();
        t2.start();
        t1.join();
        t2.join();
        System.out.println();
        // Part B: Even and Divisible by 5 from 1 to 50
        System.out.println("===== Part B: Even & Divisible by 5 (1 to 50) =====");
        EvenThread t3 = new EvenThread(50);
        DivBy5Thread t4 = new DivBy5Thread(50);
        t3.start();
        t4.start();
        t3.join();
        t4.join();
    }
}
 

