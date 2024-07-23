#include <bits/stdc++.h>
#include <iostream>

using namespace std;
/*
first 
second
*/
int main(int argc, char const *argv[])
{   
    #define SET
    #ifdef PAIR
    pair<int, int> p = make_pair(1, 1); // tao mot cap so
    // pair<int, int> q = {1, 1};
    // p.first = 1; p.second = 1;
    cout << p.first << " " << p.second <<endl;
    // pair<int, int> p1 = p;
    // cout << p1.first << " " << p1.second <<endl;
    int n;
    cin >> n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].first >> a[i].second;
    }
    vector<pair<int, int> > v;
    pair<int, pair<int,int>> p2;    p2.first = 1; p2.second.first = 1; p2.second.second = 1; 
    pair<char, vector<int> > p3;
    #endif
    #ifdef SET
    /*
    set tự động sắp xếp theo thứ tự tăng dần các giá trị
    set tự động loại bỏ các giá trị trùng lắp
    set khác mảng và vector : là các phần tử không có chỉ sổ (index)
    có kiểu cấu trúc dữ liệu kiểu cây , không thể duyệt số theo chỉ số
    set có iterator
    */
    // set<int> s;
    // s.insert(1);
    // s.insert(2);
    // s.insert(2);
    // s.insert(3);
    // cout << s.size() << endl;
    // for(int x : s){
    //     cout << x << " ";
    // }
    // cout << endl;
    // // set<int>:: iterator it;
    // set<int>::reverse_iterator it;
    // for ( it = s.rbegin(); it != s.rend(); it++) {
    //     cout << *it << " ";
    // }
    int n;
    set<int> s;
    // multiset<int> s; : multiset không xóa các giá trị trùng nhau, vẫn sắp xếp từ bé đến lớn
    cin >> n;
    for(int i = 0; i<n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }
    for(int x : s){
        cout << x << " ";
    }
    cout <<"\n" << s.size();
    // s.cound(1) != 0; : cound(1) đếm số lần xuất hiện của 1 trong set, nếu = 0 tức là không có giá trị 1
    if(s.find(1) != s.end()){   // find(): tìm kiếm giá trị trong set; nếu không có thì sẽ = s.end()
        cout << "\n1 FOUND";
        s.erase(1); // xóa giá trị 1 trong set ( đảm bảo giá trị 1 có tồn tại trong set)
                    // check thử 1 có trong set hay không, nếu có thì mới xóa, kh là sẽ bị lỗi
    }else{
        cout << "\n NOT FOUND";
    }
    


    #endif
    return 0;
}
