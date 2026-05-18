AI2301: Object Oriented Programming
Complete Question & Answer Book with Sample Outputs (25 Questions)

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
Sample Output:
How many books? 
--- Book 1 ---
Enter Book ID: Enter Book Name: Enter Author: Enter Price: 
--- Book 2 ---
Enter Book ID: Enter Book Name: Enter Author: Enter Price: 
ID      Name                Author              Price     
----------------------------------------------------------
101     C++ Programming     Bjarne Stroustrup   550       
102     Java Programming    James Gosling       600       

Total Price of all books: Rs. 1150
 
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
Sample Output:
How many students? 
--- Student 1 ---
Enter Student ID: Enter Name: Enter Department: Enter Marks: 
--- Student 2 ---
Enter Student ID: Enter Name: Enter Department: Enter Marks: 
ID      Name                Dept           Marks     
-----------------------------------------------------
1       Alice               Computer Science95        
2       Bob                 Information Tech88        

Average Marks: 91.5
 
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
Sample Output:
How many employees? 
--- Employee 1 ---
Enter Emp ID: Enter Name: Enter Designation: Enter Salary: 
--- Employee 2 ---
Enter Emp ID: Enter Name: Enter Designation: Enter Salary: 
ID      Name                Designation         Salary    
----------------------------------------------------------
1001    Alice               Manager             75000     
1002    Bob                 Developer           60000     

Total Salary Expenditure: Rs. 135000
 
Q4: Book Class with Constructor and Destructor
#include<iostream>
using namespace std;
class Book {
    int bookId;
    string title, author;
    float price;
public:
    Book() : bookId(0), title(""), author(""), price(0) {
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
    Book b1;
    Book b2(101, "C++ Programming", "Bjarne", 599.99);
    Book b3(102, "Data Structures", "Lipschutz", 450.00);
    cout << "\n--- Book Details ---\n";
    b1.display(); b2.display(); b3.display();
    cout << "\n--- Exiting main, destructors will be called ---\n";
    return 0;
}
Sample Output:
Book object created (Default Constructor)
Book object created: C++ Programming
Book object created: Data Structures

--- Book Details ---
ID: 0, Title: , Author: , Price: 0
ID: 101, Title: C++ Programming, Author: Bjarne, Price: 599.99
ID: 102, Title: Data Structures, Author: Lipschutz, Price: 450

--- Exiting main, destructors will be called ---
Book object destroyed: Data Structures
Book object destroyed: C++ Programming
Book object destroyed:
 
Q5: Student Class with Parameterized Constructor and Destructor
#include<iostream>
using namespace std;
class Student {
    int rollNo; string name; float marks;
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
    cout << "--- Creating Student Objects ---\n";
    Student s1(1, "Alice", 92.5);
    Student s2(2, "Bob", 85.0);
    Student s3(3, "Charlie", 78.3);
    cout << "\n--- Student Details ---\n";
    s1.display(); s2.display(); s3.display();
    cout << "\n--- Exiting main ---\n";
    return 0;
}
Sample Output:
--- Creating Student Objects ---
Student object created: Alice
Student object created: Bob
Student object created: Charlie

--- Student Details ---
Roll No: 1, Name: Alice, Marks: 92.5
Roll No: 2, Name: Bob, Marks: 85
Roll No: 3, Name: Charlie, Marks: 78.3

--- Exiting main ---
Student object destroyed: Charlie
Student object destroyed: Bob
Student object destroyed: Alice
 
Q6: Employee Class with Constructor and Destructor
#include<iostream>
using namespace std;
class Employee {
    int empId; string name; float salary;
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
    cout << "--- Creating Employee Objects ---\n";
    Employee e1(101, "Ravi", 50000);
    Employee e2(102, "Priya", 62000);
    Employee e3(103, "Amit", 45000);
    cout << "\n--- Employee Details ---\n";
    e1.display(); e2.display(); e3.display();
    cout << "\n--- Exiting main ---\n";
    return 0;
}
Sample Output:
--- Creating Employee Objects ---
Employee created: Ravi (ID: 101)
Employee created: Priya (ID: 102)
Employee created: Amit (ID: 103)

--- Employee Details ---
ID: 101, Name: Ravi, Salary: Rs. 50000
ID: 102, Name: Priya, Salary: Rs. 62000
ID: 103, Name: Amit, Salary: Rs. 45000

--- Exiting main ---
Employee removed from memory: Amit (ID: 103)
Employee removed from memory: Priya (ID: 102)
Employee removed from memory: Ravi (ID: 101)
 
Q7: BankAccount - Static Members and Object as Argument
#include<iostream>
using namespace std;
class BankAccount {
    int accNo; string holderName; double balance;
    static int totalAccounts;
    static double totalBalance;
public:
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
    BankAccount a1(1001, "Alice", 25000);
    BankAccount a2(1002, "Bob", 18000);
    BankAccount a3(1003, "Charlie", 32000);
    BankAccount::showTotalAccounts();
    BankAccount::showTotalBalance();
    a1.compareBalance(a2);
    a2.compareBalance(a3);
    return 0;
}
Sample Output:
Total Accounts: 3
Total Balance: Rs. 75000

--- Balances in Ascending Order ---
Bob (Acc#1002): Rs. 18000
Alice (Acc#1001): Rs. 25000

--- Balances in Ascending Order ---
Bob (Acc#1002): Rs. 18000
Charlie (Acc#1003): Rs. 32000
 
Q8: Student Class - Friend Function comparePercentage()
#include<iostream>
#include<iomanip>
using namespace std;
class Student {
    int rollNo; string name; float marks[5]; float percentage; string division;
public:
    Student(int r, string n, float m1, float m2, float m3, float m4, float m5) : rollNo(r), name(n) {
        marks[0]=m1; marks[1]=m2; marks[2]=m3; marks[3]=m4; marks[4]=m5;
        calcPercentage(); calcDivision();
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
    Student s1(1, "Alice", 85, 90, 78, 92, 88);
    Student s2(2, "Bob", 72, 68, 80, 75, 70);
    s1.display(); s2.display();
    comparePercentage(s1, s2);
    cout << "\n--- Exiting main ---\n";
    return 0;
}
Sample Output:
Roll: 1, Name: Alice, Percentage: 86.60%, Division: First
Roll: 2, Name: Bob, Percentage: 73.00%, Division: First

--- Comparing Percentages ---
Alice has higher percentage: 86.60%

--- Exiting main ---
Student object destroyed: Bob
Student object destroyed: Alice
 
Q9: ParkingTicket - Static Members, Dynamic Allocation, Friend Function
#include<iostream>
using namespace std;
class ParkingTicket {
    int ticketNumber; string vehicleNumber; float parkingFee;
    static int totalTickets; static float totalCollection;
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
    ParkingTicket *p1 = new ParkingTicket(1, "MH12AB1234", 50);
    ParkingTicket *p2 = new ParkingTicket(2, "MH14CD5678", 30);
    ParkingTicket *p3 = new ParkingTicket(3, "MH20EF9012", 80);
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
Sample Output:
Ticket #1 issued for MH12AB1234
Ticket #2 issued for MH14CD5678
Ticket #3 issued for MH20EF9012

Ticket: 1, Vehicle: MH12AB1234, Fee: Rs. 50
Ticket: 2, Vehicle: MH14CD5678, Fee: Rs. 30
Ticket: 3, Vehicle: MH20EF9012, Fee: Rs. 80

Total Tickets Issued: 3
Total Collection: Rs. 160

--- Fees in Increasing Order ---
Ticket: 2, Vehicle: MH14CD5678, Fee: Rs. 30
Ticket: 1, Vehicle: MH12AB1234, Fee: Rs. 50

--- Fees in Increasing Order ---
Ticket: 2, Vehicle: MH14CD5678, Fee: Rs. 30
Ticket: 3, Vehicle: MH20EF9012, Fee: Rs. 80
Ticket #1 destroyed.
Ticket #2 destroyed.
Ticket #3 destroyed.
 
Q10: Complex Number - Operator Overloading (+, -, *)
#include<iostream>
using namespace std;
class Complex {
    float real, imag;
public:
    Complex() : real(0), imag(0) {}
    Complex(float r, float i) : real(r), imag(i) {}
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
    Complex c1(3, 4), c2(1, -2);
    cout << "C1 = "; c1.display();
    cout << "C2 = "; c2.display();
    Complex sum = c1 + c2, diff = c1 - c2, prod = c1 * c2;
    cout << "C1 + C2 = "; sum.display();
    cout << "C1 - C2 = "; diff.display();
    cout << "C1 * C2 = "; prod.display();
    return 0;
}
Sample Output:
C1 = 3 + 4i
C2 = 1 - 2i
C1 + C2 = 4 + 2i
C1 - C2 = 2 + 6i
C1 * C2 = 11 - 2i
 
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
Sample Output:
Enter a number: Original: Value = 42
Negated:  Value = -42
 
Q12: Integer Class - Pre-increment and Post-increment Operator Overloading
#include<iostream>
using namespace std;
class Integer {
    int value;
public:
    Integer(int v = 0) : value(v) {}
    Integer& operator++() { value++; return *this; }       // Pre-increment
    Integer operator++(int) { Integer temp = *this; value++; return temp; } // Post-increment
    void display() { cout << "Value = " << value << endl; }
};
int main() {
    Integer obj(5);
    cout << "Before increment: "; obj.display();
    ++obj;
    cout << "After pre-increment (++obj): "; obj.display();
    Integer old = obj++;
    cout << "Value returned by post-increment (obj++): "; old.display();
    cout << "After post-increment: "; obj.display();
    return 0;
}
Sample Output:
Before increment: Value = 5
After pre-increment (++obj): Value = 6
Value returned by post-increment (obj++): Value = 6
After post-increment: Value = 7
 
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
Sample Output:
--- Enter Programmer Details ---
Enter Name: Enter ID: Enter Address: Enter Mail ID: Enter Mobile No: Enter Basic Pay: 
=== Pay Slip (Programmer) ===
Name: lice
ID: 101
Address: Pune
Mail: alice@test.com
Mobile: 1234567890
Basic Pay: 50000.00
DA (52%): 26000.00
HRA (27%): 13500.00
Gross Salary: 89500.00
PF (12%): 6000.00
Staff Club Fund (0.1%): 50.00
Net Salary: 83450.00

--- Enter Team Lead Details ---
Enter Name: Enter ID: Enter Address: Enter Mail ID: Enter Mobile No: Enter Basic Pay: 
=== Pay Slip (Team Lead) ===
Name: Bob
ID: 102
Address: Mumbai
Mail: bob@test.com
Mobile: 0987654321
Basic Pay: 60000.00
DA (52%): 31200.00
HRA (27%): 16200.00
Gross Salary: 107400.00
PF (12%): 7200.00
Staff Club Fund (0.1%): 60.00
Net Salary: 100140.00

--- Enter Asst. Project Manager Details ---
Enter Name: Enter ID: Enter Address: Enter Mail ID: Enter Mobile No: Enter Basic Pay: 
=== Pay Slip (Asst. Project Manager) ===
Name: Charlie
ID: 103
Address: Delhi
Mail: charlie@test.com
Mobile: 1111111111
Basic Pay: 70000.00
DA (52%): 36400.00
HRA (27%): 18900.00
Gross Salary: 125300.00
PF (12%): 8400.00
Staff Club Fund (0.1%): 70.00
Net Salary: 116830.00

--- Enter Project Manager Details ---
Enter Name: Enter ID: Enter Address: Enter Mail ID: Enter Mobile No: Enter Basic Pay: 
=== Pay Slip (Project Manager) ===
Name: David
ID: 104
Address: Bangalore
Mail: david@test.com
Mobile: 2222222222
Basic Pay: 80000.00
DA (52%): 41600.00
HRA (27%): 21600.00
Gross Salary: 143200.00
PF (12%): 9600.00
Staff Club Fund (0.1%): 80.00
Net Salary: 133520.00
 
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
Sample Output:
--- Enter Manager Details ---
Enter Employee ID: Enter Employee Name: Enter Basic Salary: Enter Monthly Bonus: 
=== Employee Information ===
Employee ID: 1001
Employee Name: Alice
Basic Salary: Rs. 50000.00
Bonus: Rs. 10000.00
Total Salary: Rs. 60000.00
 
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
Sample Output:
1. Triangle
2. Rectangle
Enter choice: Enter base and height:
Enter dimension 1: Enter dimension 2: Area of Triangle = 100.00
 
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
Sample Output:
1. Permanent Employee
2. Contract Employee
Choice: 
--- Permanent Employee ---
Enter Basic Pay: Enter Allowance: Salary: Rs. 65000.00
 
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
Sample Output:
1. Domestic
2. Commercial
Choice: 
--- Commercial Bill ---
Enter Units Consumed: Enter Rate Per Unit: Bill Amount (with 10% surcharge): Rs. 1100.00
 
Q18: Vehicle Interface - Bicycle, Bike, Car (Java)
interface Vehicle {
    void gearChange(int gear);
    void speedUp(int increment);
    void applyBrakes(int decrement);
}
class Bicycle implements Vehicle {
    int speed = 0, gear = 1;
    public void gearChange(int g) { gear = g; System.out.println("Bicycle gear changed to: " + gear); }
    public void speedUp(int inc) { speed += inc; System.out.println("Bicycle speed: " + speed + " km/h"); }
    public void applyBrakes(int dec) { speed = Math.max(0, speed - dec); System.out.println("Bicycle brakes. Speed: " + speed + " km/h"); }
}
class Bike implements Vehicle {
    int speed = 0, gear = 1;
    public void gearChange(int g) { gear = g; System.out.println("Bike gear changed to: " + gear); }
    public void speedUp(int inc) { speed += inc; System.out.println("Bike speed: " + speed + " km/h"); }
    public void applyBrakes(int dec) { speed = Math.max(0, speed - dec); System.out.println("Bike brakes. Speed: " + speed + " km/h"); }
}
class Car implements Vehicle {
    int speed = 0, gear = 1;
    public void gearChange(int g) { gear = g; System.out.println("Car gear changed to: " + gear); }
    public void speedUp(int inc) { speed += inc; System.out.println("Car speed: " + speed + " km/h"); }
    public void applyBrakes(int dec) { speed = Math.max(0, speed - dec); System.out.println("Car brakes. Speed: " + speed + " km/h"); }
}
public class VehicleDemo {
    public static void main(String[] args) {
        Vehicle v;
        System.out.println("=== Bicycle ===");
        v = new Bicycle(); v.gearChange(2); v.speedUp(15); v.applyBrakes(5);
        System.out.println("\n=== Bike ===");
        v = new Bike(); v.gearChange(3); v.speedUp(60); v.applyBrakes(20);
        System.out.println("\n=== Car ===");
        v = new Car(); v.gearChange(4); v.speedUp(100); v.applyBrakes(30);
    }
}
Sample Output:
=== Bicycle ===
Bicycle gear changed to: 2
Bicycle speed: 15 km/h
Bicycle brakes. Speed: 10 km/h

=== Bike ===
Bike gear changed to: 3
Bike speed: 60 km/h
Bike brakes. Speed: 40 km/h

=== Car ===
Car gear changed to: 4
Car speed: 100 km/h
Car brakes. Speed: 70 km/h
 
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
Sample Output:
Enter number of subjects: Enter marks for subject 1: Enter marks for subject 2: Enter marks for subject 3: 
Total: 255.00
Percentage: 85.00%
Grade: A
 
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
Sample Output:
Enter Employee Name: Enter Age: Enter Years of Experience: 
=== Registration Successful ===
Name: lice
Age: 30
Experience: 5 years
 
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
    cout << fixed << setprecision(2);
    double side = 5.0;
    cout << "Area of Square (side=" << side << "): " << calc.area(side) << endl;
    double len = 8.0, br = 4.0;
    cout << "Area of Rectangle (" << len << "x" << br << "): " << calc.area(len, br) << endl;
    float rad = 7.0f;
    cout << "Area of Circle (radius=" << rad << "): " << calc.area(rad) << endl;
    return 0;
}
Sample Output:
Area of Square (side=5.00): 25.00
Area of Rectangle (8.00x4.00): 32.00
Area of Circle (radius=7.00): 153.94
 
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
    cout << "Multiply 2 integers (4, 5): " << calc.multiply(4, 5) << endl;
    cout << "Multiply 3 integers (2, 3, 4): " << calc.multiply(2, 3, 4) << endl;
    cout << fixed << setprecision(2);
    cout << "Multiply 2 doubles (3.5, 2.5): " << calc.multiply(3.5, 2.5) << endl;
    return 0;
}
Sample Output:
Multiply 2 integers (4, 5): 20
Multiply 3 integers (2, 3, 4): 24
Multiply 2 doubles (3.5, 2.5): 8.75
 
Q23: Hierarchical Inheritance - Area of Circle, Rectangle, Triangle (Java)
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
        java.util.Scanner sc = new java.util.Scanner(System.in);
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
Sample Output:
Enter radius of circle: Area of Circle: 153.94
Enter length and breadth of rectangle: Area of Rectangle: 50.00
Enter base and height of triangle: Area of Triangle: 40.00
 
Q24: Hierarchical Inheritance - Perimeter of Circle, Rectangle, Triangle (Java)
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
        java.util.Scanner sc = new java.util.Scanner(System.in);
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
Sample Output:
Enter radius of circle: Perimeter of Circle: 43.98
Enter length and breadth of rectangle: Perimeter of Rectangle: 30.00
Enter 3 sides of triangle: Perimeter of Triangle: 12.00
 
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
        EvenThread t1 = new EvenThread(20);            // using Thread class
        Thread t2 = new Thread(new OddRunnable(20));   // using Runnable interface
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
Sample Output:
===== Part A: Even & Odd (1 to 20) =====
--- Even Numbers (1 to 20) ---
--- Odd Numbers (1 to 20) ---
Even: 2
Odd:  1
Even: 4
Odd:  3
Even: 6
Odd:  5
Even: 8
Odd:  7
Odd:  9
Even: 10
Odd:  11
Even: 12
Even: 14
Odd:  13
Odd:  15
Even: 16
Even: 18
Odd:  17
Even: 20
Odd:  19

===== Part B: Even & Divisible by 5 (1 to 50) =====
--- Even Numbers (1 to 50) ---
Even: 2
--- Numbers Divisible by 5 (1 to 50) ---
Div5: 5
Even: 4
Div5: 10
Even: 6
Div5: 15
Even: 8
Even: 10
Div5: 20
Even: 12
Div5: 25
Even: 14
Even: 16
Div5: 30
Even: 18
Div5: 35
Even: 20
Even: 22
Div5: 40
Even: 24
Div5: 45
Even: 26
Even: 28
Div5: 50
Even: 30
Even: 32
Even: 34
Even: 36
Even: 38
Even: 40
Even: 42
Even: 44
Even: 46
Even: 48
Even: 50
 

