#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

class SinhVien{
    // Khai báo (cài đặt)thuộc tính: giống khai báo biến
    // Khai báo (cài đặt) phương thức: giống khai báo hàm
    // private, protected, public
    // private: đây là phạm vi truy cập riêng của class, thường lưu các thuộc tính
    // protected: đây là phạm vi truy cập riêng của class và các class con kế thừa nó
    // public: thường lưu phương thức
    // contructor : ham khoi tao
    // destructor : ham huy (giai phong bo nho)
    // this pointer
    // getter : lay thuoc tinh tu vung private
    // setter : gan gia tri cho thuoc tinh tu vung private
    // biến static : không được khai báo giá trị ban đầu, dùng chung cho các object
    // friend function, friend class : hàm không phải thuộc member của class này, nhưng vẫn có thể truy cập vào các thuộc tính private của class
private:
    string ten, id, ns;    // thuộc tính private chỉ sử dụng được ở trong class
    double gpa;
    static int dem;
public:
    SinhVien();
    SinhVien(string, string, string, double);
    void nhap();
    void in();
    double getGpa();    // cach de lay ra duoc cac thuoc tinh, ma khong truy cap vao thuoc tinh 
    string getId();
    string getTen();
    void setGpa(double gpa);
    int getDem();
    void tangDem(); 
    friend void chuanHoa(SinhVien&); 
    ~SinhVien();
};
void chuanHoa(SinhVien &a){
    string res = "";
    stringstream ss(a.ten);
    string token;
    while(ss >> token){
        res += toupper(token[0]);
        for (int i = 1; i < token.length(); i++){
            res += tolower(token[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    a.ten = res;
}
int SinhVien::dem = 0; 
// Implementation
SinhVien::SinhVien(){
    // cout << "Doi tuong mac dinh duoc tao o day !!!" << endl;
    ten = "";
    id = "";
    ns = "";
    gpa = 0;
}

SinhVien::SinhVien(string ten, string id, string ns, double gpa){
    this->ten = ten;
    this->id = id;
    this->ns = ns;
    this->gpa = gpa;
}

SinhVien::~SinhVien(){
   // cout << "Doi tuong duoc huy o day!!!" << endl;
}

double SinhVien::getGpa(){
    return this->gpa;
}

string SinhVien::getId(){
    return this->id;
}

string SinhVien::getTen(){
    return this->ten;
}

void SinhVien::setGpa(double gpa){
    this->gpa = gpa;

}

void SinhVien::tangDem(){
    ++dem;
}
int SinhVien::getDem(){
    return dem;
}
bool cmp(SinhVien a, SinhVien b){
    return a.getGpa() > b.getGpa();  // sap xep theo GPA giam dan (descending order)
}
void SinhVien::nhap(){
    ++dem;
    // tao ID tu dong theo dinh dang SV001, SV002... 
    // to_string(dem) lam chuyen int sang string
    // string(3 - to_string(dem).length(), '0') lay ra chuoi khoang 3 ki tu, neu do dai hon 3 thi them 0 vao truoc chuoi do de duoi 3 chu so
    // to_string(dem) la chuyen int sang string 
    // chuoi nay se duoc gan cho id cua doi tuong moi duoc tao
    this->id = "SV" + string(3 - to_string(dem).length(), '0') + to_string(dem);
    // cout <<" Nhap ID :"; cin >> this-> id;
    // cin.ignore();   // loai bo ki tu newline con lai trong buffer cua cin
    cin.ignore(); 
    cout <<" Nhap ten :"; getline(cin, this->ten);   // getline cho phep nhap cac chuoi ki tu co lien ket boi khoang trang ( dau cach)
    cout <<" Nhap ngay sinh :"; cin >> this->ns;
    cout <<" Nhap GPA :"; cin >> this->gpa;
    cin.ignore(); 
}
void SinhVien::in(){
    cout << "ID: " << this->id << " Ten : " << this-> ten << " Ngay sinh : " << this->ns << " GPA : " << this->gpa  << endl;
}
int main(int argc, char const *argv[])
{
    
    int n= 0;
    cout << "So luong sv :" ; cin >> n ;
    SinhVien sv[n];
    for(int i=0; i<n; i++){
        sv[i].nhap();
    }
    sort(sv, sv+n, cmp);
    for(int i=0; i<n; i++){
        chuanHoa(sv[i]);
        sv[i].in();
    }
    system("pause");
    return 0;
}
