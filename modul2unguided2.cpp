#include <iostream>
#include <vector>
using namespace std;
int main() {
    int x_size, y_size, z_size;
    cout << "Masukkan ukuran array tiga dimensi (x y z): ";
    cin >> x_size >> y_size >> z_size;   
    vector<vector<vector<int>>> arr(x_size, vector<vector<int>>(y_size, vector<int>(z_size)));

    cout << "Masukkan nilai-nilai untuk setiap elemen:" << endl;
    for (int x = 0; x < x_size; ++x) {
        for (int y = 0; y < y_size; ++y) {
            for (int z = 0; z < z_size; ++z) {
                std::cout << "arr[" << x << "][" << y << "][" << z << "]: ";
                std::cin >> arr[x][y][z];
            }
        }
    }
    cout << "Nilai-nilai yang dimasukkan:" << endl;
    for (int x = 0; x < x_size; ++x) {
        for (int y = 0; y < y_size; ++y) {
            for (int z = 0; z < z_size; ++z) {
                cout << "arr[" << x << "][" << y << "][" << z << "]: " << arr[x][y][z] << endl;
            }
        }
    }

    return 0;
}
