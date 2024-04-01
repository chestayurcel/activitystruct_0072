#include <iostream>
using namespace std;

struct DetailAlamat{
    string data;
    string kota;
};

struct Mahasiswa{
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};