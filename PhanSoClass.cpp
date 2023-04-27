#include <iostream>
using namespace std;

class phanso {
    int tu, mau;
public:
    phanso ();
    phanso (int tu, int mau);
    void setTu (int tu);
    void setMau (int mau);
    int getTu ();
    int getMau ();
    void tinhTong (phanso &ps1, phanso &ps2);
    friend void tinhTich (phanso &ps1, phanso &ps2);
};

phanso::phanso () {
    tu = 0;
    mau = 1;
}

phanso::phanso (int tu, int mau) {
    this -> tu = tu;
    this -> mau = mau;
}

void phanso::setTu (int tu) {
    this -> tu = tu;
}

void phanso::setMau (int mau) {
    this -> mau = mau;
}

int phanso::getTu () {
    return tu;
}

int phanso::getMau () {
    return mau;
}

void phanso::tinhTong (phanso &ps1, phanso &ps2) {
    int tu1 = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
    int mau1 = ps1.mau * ps2.mau;
    cout << "Ket qua phep nhan: " << tu << "/" << mau << endl;    
}

void tinhTich (phanso &ps1, phanso &ps2) {
    int tu = ps1.tu * ps2.tu;
    int mau = ps1.mau * ps2.mau;
    cout << "Ket qua phep nhan: " << tu << "/" << mau << endl;
}

int main () {
    phanso ps1 (1,2);
    phanso ps2 (1,4);

    ps1.tinhTong(ps1, ps2);
    tinhTich (ps1, ps2);

    return 0;
}