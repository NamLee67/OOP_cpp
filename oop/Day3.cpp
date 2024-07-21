#include <bits/stdc++.h>

using namespace std;
using ll = long long;
/* hàm tìm ước chung lớn nhất: số nguyên lớn nhất mà cả 2 số cùng chia hết
- Thuật toán auclid sử dụng đệ quy ( return về chính hàm nó với tham số khác cho đến khi đạt điều kiện dừng): 
    + Nếu b == 0 thì GCD của a và b là a
    + Nếu b!= 0 thì GCD của b và a % b là GCD của a và b ==> gcd(a, b) = gcd(b, a % b)
    + Ví dụ: gcd(18, 24) = gcd(24, 6) = gcd(6, 6) = gcd(6,0) = 6
*/
ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}
/*
Bội chung nhỏ nhất của hai số: Số nhỏ nhất chia hết cho cả 2 số
lcm(a,b) = (a*b)/gcd(a,b)
*/
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
class phanso{
    private:
    ll tu, mau;
    public:
    phanso();
    phanso(ll tu, ll mau);
    friend ostream& operator << (ostream& , phanso);
    friend istream& operator >> (istream& , phanso&);
    friend phanso operator + (phanso, phanso);
    void rutgon();

};
phanso::phanso() {}

phanso::phanso(ll tu, ll mau){
    this->tu = tu;
    this->mau = mau;
}
ostream& operator << (ostream& out, phanso a){
    out << a.tu << "/" << a.mau << endl;
    return out;
}
istream& operator >> (istream& in , phanso& a){
    in >> a.tu >> a.mau;
    return in;
}
phanso operator + (phanso a, phanso b){
    phanso tong(1,1);
    ll g = lcm(a.mau, b.mau);
    tong.tu = (a.tu * (g / a.mau)) + (b.tu * (g / b.mau));
    tong.mau = g;
    tong.rutgon();
    return tong;
}
void phanso::rutgon(){
    ll g = gcd(tu, mau);
    tu /= g;
    mau /= g;
}

int main(int argc, char const *argv[])
{
    phanso ps1(1,1);
    cin >> ps1;
    cout << "Phan so 1: " << ps1;
    ps1.rutgon();
    cout << "Phan so 1 sau khi rut gon: " << ps1;
    phanso ps2(1,1);
    cin >> ps2;
    cout << "Phan so 2: " << ps2;
    cout << "Tong 2 phan so : " << ps1+ps2;

    return 0;
}
