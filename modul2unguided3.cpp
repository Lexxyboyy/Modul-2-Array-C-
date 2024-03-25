#include <iostream>
#include <vector>
using namespace std;
int main() {
    int size;
    
    cout << "Masukkan ukuran array: ";
    cin >> size;

    vector<int> arr(size);
    cout << "Masukkan nilai-nilai array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Menu:"<<endl; 
    cout << "1. Mencari nilai maksimum"<<endl;
    cout << "2. Mencari nilai minimum"<<endl;
    cout << "3. Mencari nilai rata-rata"<<endl;
    cout << "Pilih opsi: "<<endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        int max = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        cout << "Nilai maksimum: " << max << endl;
    }
        else if (choice == 2) {
        int min = arr[0];
        for (int i = 1; i < size; ++i) {
            if (arr[i] < min) {
                min = arr[i];
            }
        }
        cout << "Nilai minimum: " << min <<endl;
    }
    
    else if (choice == 3) {
        int sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += arr[i];
        }
        double average = static_cast<double>(sum) / size;
        cout << "Nilai rata-rata: " << average << endl;
    }
    
    else {
        cout << "Opsi Gak valid!" << endl;
    }

    return 0;
}
