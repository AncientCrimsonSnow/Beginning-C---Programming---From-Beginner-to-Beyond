#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    vector<vector<int>> vector2D;
    
    vector2D.push_back(vector1);
    vector2D.push_back(vector2);
    
    cout << vector2D.at(0).at(0) << endl;
    cout << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << endl;
    cout << vector2D.at(1).at(1) << endl;
    
    vector1.at(0) = 1000;
    
    cout << vector2D.at(0).at(0) << endl;
    cout << vector2D.at(0).at(1) << endl;
    cout << vector2D.at(1).at(0) << endl;
    cout << vector2D.at(1).at(1) << endl;
    
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;


    return 0;
}