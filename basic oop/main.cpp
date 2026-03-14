#include <iostream>
#include <string>



class TAMPILAN {
    public:
        std::string tombol;
        std::string nama_pengguna;
        std::string touchpad;
        std::string keyboard;
        std::string layar;
        double fullscreen;

};

int main() {

    TAMPILAN apk_scan;
    apk_scan.tombol = "tombol power";
    apk_scan.nama_pengguna = "admin";
    apk_scan.touchpad = "touchpad smartphone";
    apk_scan.keyboard = "QWERTY";
    apk_scan.layar = "layar touchscreen";
    apk_scan.fullscreen = 32;


    std::cout << "tombol: " << apk_scan.tombol << std::endl;
    std::cout << "nama pengguna: " << apk_scan.nama_pengguna << std::endl;
    std::cout << "touchpad:" << apk_scan.touchpad << std::endl;
    std::cout << "keyboard:" << apk_scan.keyboard << std::endl;
    std::cout << "layar:" << apk_scan.layar << std::endl;
    std::cout << "fullscreen:" << apk_scan.fullscreen << std::endl;


    std::cout << "program selesai " << std::endl;

    std::cin.get();
    return 0;
}