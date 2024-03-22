#include <iostream>

using namespace std;

int main() {
    int size;
    
    // Meminta pengguna untuk memasukkan ukuran array
    cout << "Masukkan jumlah elemen array: ";
    cin >> size;

    // Mendeklarasikan array sesuai dengan ukuran yang dimasukkan pengguna
    int arr[size];

    // Meminta pengguna untuk memasukkan elemen array
    cout << "Masukkan elemen-elemen array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Elemen ke-" << i + 1 << ": ";
        cin >> arr[i];
    }

    // Menampilkan menu
    cout << "\nPilih operasi yang ingin Anda lakukan:\n";
    cout << "1. Cari nilai maksimum\n";
    cout << "2. Cari nilai minimum\n";
    cout << "3. Cari nilai rata-rata\n";

    int choice;
    cout << "Masukkan pilihan: ";
    cin >> choice;

    // Proses pemilihan
    switch (choice) {
        case 1: {
            // Mencari nilai maksimum
            int max = arr[0];
            for (int i = 1; i < size; ++i) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }
            cout << "Nilai maksimum dalam array adalah: " << max << endl;
            break;
        }
        case 2: {
            // Mencari nilai minimum
            int min = arr[0];
            for (int i = 1; i < size; ++i) {
                if (arr[i] < min) {
                    min = arr[i];
                }
            }
            cout << "Nilai minimum dalam array adalah: " << min << endl;
            break;
        }
        case 3: {
            // Menghitung nilai rata-rata
            int sum = 0;
            for (int i = 0; i < size; ++i) {
                sum += arr[i];
            }
            double average = static_cast<double>(sum) / size;
            cout << "Nilai rata-rata dari array adalah: " << average << endl;
            break;
        }
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
