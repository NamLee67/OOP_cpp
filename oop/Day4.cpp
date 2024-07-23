#include <bits/stdc++.h>

using namespace std;

/*
base class : class cha, cac thuoc tinh chung
deriving class : class con, ke thua cac thuoc tinh chung
tính chất kế thừa nếu : derived class "is-a" base class
*/
class person{
    private:
        string name;
        string address;
    public:
        person(string name, string address){
            this->name = name;
            this->address = address;
        }
        person(){

        }
        void nhap(){
            cout <<"Ten : "; getline(cin, name);
            cout <<"Dia chi : "; getline(cin, address);
        }
        void setName(string name){
            this->name = name;
        }
        void setAddress(string address){
            this->address = address;
        }
        string getName(){
            return this->name;
        }
        string getAddress(){
            return this->address;
        }
        void in(){
            cout << "Name: " << name << " - " << "Address: " << address;
        }
};
// class student kế thừa từ class person
// class student kế thừa các thuộc tính pravte của class person, 
// nhưng không thể trực tiếp lấy các thuộc tính đó ra được, phải lấy thông qua các hàm getter
// hoặc có thể sử dụng toán tử phạm vi, để gọi hàm từ lớp cha đưa vào lớp con
// Function overriding : ghi đè
// access mode : public, private, protected
// multilevel : Kế thừa nhiều lớp 
// multiple : một lớp được kế thừa từ nhiều lớp vd: class Bat : public Animal, public Mammal{}
// để tránh việc lộn xộn giữa 2 class cha của nó thì nên thêm toán tử phạm vi mà của class muốn lấy phương thức ra vd Bat.Animal::read()
class student : public person{
    private:
        float gpa;
    public:
    
        // cú pháp tạo Constructor kế thừa từ constructor cha
        // student(string name, string address, float gpa) : person(name, address){
        //     this->gpa = gpa;
        // }
        // student(){

        // }
        // Function overriding 
        void nhap(){
            person :: nhap();
            cout <<"Gpa: "; cin >> gpa;
        }
        void setGpa(float gpa){
            this->gpa = gpa;
        }
        float getGpa(){
            return this->gpa;
        }
        // Function overriding 
        void in(){
            // cout << "Name: " << getName() << " " << "Address: " << getAddress() << " " <<  "GPA: " << gpa << endl;
            person :: in();
            cout << " - GPA: " << gpa << endl;
        }

};
// class lecture ke thua tu class person
// - public acces mode
class lecture : public person{
    private:
        float salary;
        string department;
    public:
        void setDepartment(string department){
            this->department = department;
        }
        void setSalary(float salary){
            this->salary = salary;
        }
        float getSalary(){
            return this->salary;
        }
        string getDepartment(){
            return this->department;
        }
};
int main(int argc, char const *argv[])
{
    student s;
    s.nhap();
    s.in();
    // gọi hàm của lớp cha
    // s.person::nhap();
    

    return 0;
}
