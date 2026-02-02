#include <iostream>
using namespace std;

int tambah(int a, int b) {
    return a + b;
}

void cetakHasil(int hasil) {
    cout << "Hasil: " << hasil << endl;
}

int main() {
    int x = 5, y = 3;
    int hasil = tambah(x, y);
    cetakHasil(hasil);
    return 0;
}