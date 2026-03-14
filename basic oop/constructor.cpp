#include <iostream>
#include <string>

using namespace std;

class karakter{

    public:
    string nama;
    int umur;
    string jenis_kelamin;
    string hobi;
    string pekerjaan;
    string kepribadian;

    karakter(string inputnama,int inputumur,string inputjenis_kelamin,string inputhobi,string inputpekerjaan,string inputkepribadian
    ) {
        karakter::nama = inputnama;
        karakter::umur = inputumur;
        karakter::jenis_kelamin = inputjenis_kelamin;
        karakter::hobi = inputhobi;
        karakter::pekerjaan = inputpekerjaan;
        karakter::kepribadian = inputkepribadian;

        cout << karakter::nama << endl;
        cout << karakter::umur << endl;
        cout << karakter::jenis_kelamin << endl;
        cout << karakter::hobi << endl;
        cout << karakter::pekerjaan << endl;
        cout << karakter::kepribadian << endl;

    }

};

int main() {

    karakter karakterutama("Revand", 17, "Laki-laki", "Bermain game", "Pelajar", "introvert"); 
    karakter karakternpc("aliana", 17, "perempuan", "Baca buku","mahasiswa", "ambivert");

    cin.get();
    return 0;
}