#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "struktur_data.c"
#include "helper.c"
#include "input_data.c"
#include "load_data.c"
#include "lihat_data.c"
#include "pembagian_siswa.c"
#include "save_and_reopen.c"
#include "menu.c"

klassSiswa listSiswa[10000];
klassKelas listKelas[250];
int jumlahKelas;
int main(int argc, char const *argv[]) {
  // inputSiswa();
  // ambilBerulang("siswa", inputSiswa);
  // loadSiswaCsv();
  // lihatDataSiswa();
  // loadSiswaCsv();
  // bagiKelas(2, 2);
  // lihatDataKelas();
  // simpanKeFile();
  readFromFIle();
  menuUtama();
  return 0;
}

