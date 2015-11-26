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
  int pilihan;
  printHeaderMenu();
  printf("    1) Input Data\n");
  printf("    2) Lihat Data\n");
  printf("    3) Save\n");
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
      menuSave();
    case 4:
      menuLoad();
  }
}

void menuInputData(){
  int pilihan;
  printHeaderMenu();
  printf("    1) Input Siswa Manual\n");
  printf("    2) Input Kelas Manual\n");
  printf("    3) Input Ruangan Manual\n");
  printf("    4) Load Siswa (CSV) \n");
  printf("    6) Load Kelas (CSV) \n");
  printf("    7) Load Ruangan (CSV) \n");
  printf("    0) Kembali Ke Menu Utama \n");
  ambilPilihanMenu(&pilihan);

  switch (pilihan) {
    case 0:
      menuUtama();
    case 4:
      loadSiswaCsv();
  }
}

void printHeaderMenu(){
  printf("\n\n  PEMBAGIAN KELAS OTOMATIS\n");
  printf("  Menu Utama :\n");
}

void ambilPilihanMenu(int *pilihan){
  printf("  Masukan Pilihan\n");
  scanf("%i", pilihan);
  fseek(stdin,0,SEEK_END);
}


void menuLihatData(){
  belumDiImplementasi();
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