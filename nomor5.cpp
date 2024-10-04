#include <iostream>
using namespace std;

int main() {
    float beratBadan, tinggiBadan, imt;


    cout << "Masukkan Berat Badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan Tinggi Badan (m): ";
    cin >> tinggiBadan;


    imt = beratBadan / (tinggiBadan * tinggiBadan);


    cout << "Indeks Massa Tubuh (IMT): " << imt << endl;

    if (imt < 18.4)
        {
        cout << "Kriteria: Berat Badan Kurang" << endl;
    }
    else if (imt >= 18.4 && imt < 24.9)
        {
        cout << "Kriteria: Berat Badan Ideal" << endl;
    }
    else if (imt >= 24.9 && imt < 29.9)
        {
        cout << "Kriteria: Berat Badan lebih" << endl;
    }
    else if {imt >=29.9 && imt < 39.9)
    {
        cout <<"Kriteria: Gemuk"<< endl;
    }
        else {
        cout << "Kriteria: Sangat Gemuk" << endl;
    }

    return 0;
}
