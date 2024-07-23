/*
Buổi 1. Vector, Iterator, Pair, Set Trong C++
*/


#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using ll = long long;
// for reach:  range base for loop
// push back
int main(int argc, char const *argv[])
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout << "size of vector: " << v.size() << endl;
    // thay doi cac gia tri trong v thanh 1000: khong duoc : chi thay doi gia tri x chu khong thay doi gia tri trong vector
    // muon thay doi thi phai khai bao tham chieu int &x
    // for(int x:v){
    //     x = 1000;
    // }
    // thay doi cac gia tri trong v thanh 1000: duoc
    // for(int i = 0; i < v.size();i++){
    //     v[i] =1000;
    // }
    // duyet cac phan tu trong vector v
    for(int x : v) {
        cout << x << " " ;   
    }
    
    cout << endl;
    vector <int>::iterator it;  // iterator trỏ đến vị trí đầu tiên
    auto it1 = v.end();         // kiểu dữ liệu auto : sẽ dựa vào giá trị bạn gán cho biến đó rồi xác định giá trị đó thuộc kiểu dữ liệu nào
    // duyet cac phan tu trong vector
    for(it = v.begin(); it != v.end();it++){
        cout << *it << " ";                 // iterator như một con trỏ nên cần giải tham chiếu của nó để lấy giá trị
    } 
    v.insert(v.begin()+1, 100); // chen gia tri 100 vao vi tri 1 cua vector
    v.erase(v.begin() + 4);     // xoa di phan tu vi tri 4 cua vector
    v.pop_back();               // xoa phan tu cuoi cung cua vector
    for(it = v.begin(); it != v.end();it++){
        cout << *it << " ";                 // iterator như một con trỏ nên cần giải tham chiếu của nó để lấy giá trị
    } 
    return 0;
}
