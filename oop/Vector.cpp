#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> arr;
    for(int i = 0; i < 11; i++) {
        arr.push_back(i);
    }
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    
    return 0;                                   
}
