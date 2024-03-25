#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main (){
    string input;
    cout << "Masukkan data array (pisahkan dengan spasi): ";
    getline(cin, input);

    vector<int> numbers;
    istringstream iss(input);
    int num;
    while (iss >> num){
        numbers.push_back(num);
    } 
    
    cout << "Data Array :";
    for (int i=0; i<numbers.size();++i){
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    cout << "Nomor Genap : ";
    for (int i=0; i < numbers.size();++i){
        if (numbers[i] % 2 == 0){
            cout << numbers[i] << ","; 
        }
    } 
    cout << endl;
    
    cout << "Nomor Ganjil : ";
    for (int i = 0; i < numbers.size(); ++i){
        if (numbers[i] % 2 != 0) {
            cout << numbers[i] << ",";
        }
    }
    cout << endl;
    
    return 0;
}
