#include <iostream>
#include <string>

using namespace std;

class siswa{

    public:
    string nama;
    int umur;

    siswa(string nama,int umur) {
        siswa::nama = nama;
        siswa::umur = umur;

        cout << siswa::nama << endl;
        cout << siswa::umur << endl;
    }

    //fungsi tanpa parameter dan tanpa return
    void menampilkandatasiswa() {
        cout << "Nama siswa: " << siswa::nama << endl;
        cout << "Umur siswa: " << siswa::umur << endl;
    }
    //fungsi dengan parameter dan tanpa return
    void menampilkannamasiswa(const char* namabaru) {
        cout << "Nama siswa: " << namabaru << endl;
    }

    //fungsi tanpa paremeter dan dengan return
    string getnamasiswa(){
        return siswa::nama;
    }

    int getumursiswa(){
        return siswa::umur;
    }

    //method dengan parameter dan dengan return
    int mengubahumur(const int &umurbaru){
        return siswa::umur + umurbaru;
    }
};

int main() {
    siswa siswaTKR("abie",17);
    siswa siswaTJKT("putri",16);
    siswaTKR.menampilkandatasiswa();
    siswaTKR.menampilkannamasiswa("abie");
    siswaTJKT.menampilkandatasiswa();
    siswaTJKT.menampilkannamasiswa("elsa");

    string namasiswa = siswaTKR.getnamasiswa();
    cout << "nama siswa:" << namasiswa << endl;
    int umursiswa = siswaTKR.getumursiswa();
    cout << "umur siswa:" << umursiswa << endl;

    cout << "umur siswa setelah diubah: " << siswaTKR.mengubahumur(1) << endl;
    cout << "umur siswa setelah diubah: " << siswaTJKT.mengubahumur(1) << endl;
    cout << "umur siswa tjkt: " << siswaTJKT.getumursiswa() << endl;
    cout << "umur siswa tkr: " << siswaTKR.getumursiswa() << endl;

    cin.get();
    return 0;
}