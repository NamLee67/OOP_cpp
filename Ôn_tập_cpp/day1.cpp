#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int x = 0;
    char y = 'a';
    cout << "Chuyen doi gia tri so sang ky tu va nguoc lai"<< endl;
    cout <<"Input x: ";
    cin >> x;
    y = x;
    cout << "x: " << x << ", y: " << y << endl;
    cout << "Khuon in & Dinh dang in";
    double i =  123.456;
    cout << setiosflags(ios::showpoint) << setprecision(4)<< endl ;    // định dạng in 4 chữ số
    cout << setw(7) << "NamLe"<< endl;
    cout << setw(7) << "NamLe" << "67" << endl; // khuôn in 7 kí tự và xếp các kí tự từ phải qua trái
                                                // nếu còn dư thì sẽ là khoảng trống
    
    cout << "Bien tham chieu" << endl;
    int k = 0;
    int &j = k;
    cout << "k = " << k << " , j = "<< j << endl;
    k = 10;
    cout << "k = " << k << " , j = "<< j << endl;
    j = 20;
    cout << "k = " << k << " , j = "<< j << endl;
    cout << "&k = " << &k << " , &j = "<< &j <<endl;
    
    return 0;                                   
}
