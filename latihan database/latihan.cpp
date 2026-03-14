#include <iostream>
#include <string>
#include <fstream>

using namespace std;


class siswa{
    public:
    string nama;
    string umur;
    string jurusan;
    string kelas;

    siswa(string nama, string umur, string jurusan, string kelas) {
        siswa::nama = nama;
        siswa::umur = umur;
        siswa::jurusan = jurusan;
        siswa::kelas = kelas;
    }
    string stringify(){
        return nama + "\n" + umur + "\n" + jurusan + "\n" + kelas;
    }

};

class datasiswa{

    public:
    ifstream in;
    ofstream out;
    string filename;

    datasiswa( string filename){
        datasiswa::filename = filename;
    }


    void menyimpan(siswa data){
        cout << data.nama << endl;
        cout << data.umur << endl;
        cout << data.jurusan << endl;
        cout << data.kelas << endl;


        datasiswa::out.open(datasiswa::filename, ios::app);
        datasiswa::out << data.stringify()<<endl;
        datasiswa::out.close();
    }

    void showAll(){
        datasiswa::in.open(datasiswa::filename, ios::in);
        string nama, umur, jurusan, kelas;
       int  index = 1;
        while(datasiswa::in >> nama >> umur >> jurusan >> kelas){
            datasiswa::in >> nama;
            datasiswa::in >> umur;
            datasiswa::in >> jurusan;  
            datasiswa::in >> kelas;
            cout << index++ << ".\t";
            cout << "Nama: " << nama << ".\t";
            cout << "Umur: " << umur << ".\t";
            cout << "Jurusan: " << jurusan << ".\t";
            cout << "Kelas: " << kelas << endl;
          
        }
        datasiswa::in.close();
    }

};

int main() {

    //membuat object yang diperlukan
    datasiswa data = datasiswa("datasiswa.txt");
    data.showAll();

    //input dari user
    string nama, umur, jurusan, kelas;
    cout << "Masukkan nama siswa: ";
    cin >> nama;
    cout << "Masukkan umur siswa: ";
    cin >> umur;
    cout << "Masukkan jurusan siswa: ";
    cin >> jurusan;
    cout << "Masukkan kelas siswa: ";
    cin >> kelas;

    //membuat object siswa
    siswa newSiswa= siswa(nama, umur, jurusan, kelas);

    //menyimpan data siswa
    data.menyimpan(newSiswa);


    //tampilkan semua data siswa
    data.showAll();
    cin.get();
    return 0;
}