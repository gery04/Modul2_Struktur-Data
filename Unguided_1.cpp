#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Mendeklarasikan array dan variabel lainnya
    const int SIZE = 10;
    int numbers[SIZE];
    vector<int> oddNumbers, evenNumbers;

    // Meminta pengguna untuk memasukkan data array
    cout << "Masukkan 10 angka: ";
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    // Memisahkan angka ganjil dan genap ke dalam vektor yang sesuai
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] % 2 == 0) {
            evenNumbers.push_back(numbers[i]);
        } else {
            oddNumbers.push_back(numbers[i]);
        }
    }

    // Menampilkan angka ganjil
    cout << "Nomor Ganjil: ";
    for (int i = 0; i < oddNumbers.size(); ++i) {
        cout << oddNumbers[i];
        if (i != oddNumbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Menampilkan angka genap
    cout << "Nomor Genap: ";
    for (int i = 0; i < evenNumbers.size(); ++i) {
        cout << evenNumbers[i];
        if (i != evenNumbers.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    return 0;
}
