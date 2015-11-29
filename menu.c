// Headers
void printHeaderMenu();
void ambilPilihanMenu();
void menuUtama();
void menuInputData();
void menuLihatData();
void menuSave();
void menuLoad();
void belumDiImplementasi();

void menuUtama() {
  // system("clear");
  int pilihan;
  printHeaderMenu();
  printf("    1) Input Data\n");
  printf("    2) Lihat Data\n");
  printf("    3) Bagi Siswa Kedalam Kelas\n");
  printf("    4) Load\n");
  ambilPilihanMenu(&pilihan);
  switch (pilihan) {
    case 1:
      menuInputData();
      break;
    case 2:
      menuLihatData();
      break;
    case 3:
      bagiSiswaKedalamKelas();
      break;
    case 4:
      loadSiswaCsv();
      urutkanSiswaBerdasarkanNim();
      menuUtama();
      break;
  }
}

void menuInputData(){
  int pilihan;
  printHeaderMenu();
  printf("    1) Input Siswa Manual\n");
  // printf("    2) Input Kelas Manual\n");
  // printf("    3) Input Ruangan Manual\n");
  printf("    2) Load Siswa (CSV) \n");
  // printf("    6) Load Kelas (CSV) \n");
  // printf("    7) Load Ruangan (CSV) \n");
  printf("    0) Kembali Ke Menu Utama \n");
  ambilPilihanMenu(&pilihan);

  switch (pilihan) {
    case 0:
      menuUtama();
      break;
    case 1:
      inputSiswa();
      ambilBerulang("siswa", inputSiswa);
      menuInputData();
      break;
    case 2:
      loadSiswaCsv();
      menuInputData();
      break;
  }
}

void printHeaderMenu(){
  printf("\n\nPEMBAGIAN KELAS OTOMATIS\n");
  printf(" Menu Utama :\n");
}

void ambilPilihanMenu(int *pilihan){
  printf("  Masukan Pilihan : ");
  scanf("%i", pilihan);
  fseek(stdin,0,SEEK_END);
}


void menuLihatData(){
  int pilihan;
  printHeaderMenu();
  printf("    1) Lihat Data Siswa\n");
  printf("    2) Lihat Data Kelas\n");
  printf("    3) Cari Data Siswa (Berdasarkan NIM)\n");
  printf("    0) Kembali Ke Menu Utama \n");
  ambilPilihanMenu(&pilihan);

  switch (pilihan) {
    case 0:
      menuUtama();
    case 1:
      lihatDataSiswa();
      menuLihatData();
    // case 2:
    //   loadSiswaCsv();
    case 3:
      cariKelasSiswaNim();
  }
}


void menuSave() {
  belumDiImplementasi();
}

void menuLoad() {
  belumDiImplementasi();
}

void belumDiImplementasi() {
  printf("Belum Di Implementasi\n");
}