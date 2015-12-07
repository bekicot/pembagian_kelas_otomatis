// Headers
void printHeaderMenu(char *namaMenu);
void ambilPilihanMenu();
void menuUtama();
void menuInputData();
void menuLihatData();
void menuSave();
void menuLoad();
void belumDiImplementasi();
void salahPilih();

void menuUtama() {
  // system("clear");
  int pilihan;
  printHeaderMenu("Utama");
  printf("    1) Input Data\n");
  if(listSiswa[0].nama != NULL){
    printf("    2) Lihat Data\n");
    printf("    3) Bagi Siswa Kedalam Kelas\n");
  }
  printf("    4) Load\n");
  printf("    5) Save\n");
  printf("    6) exit\n");
  ambilPilihanMenu(&pilihan);
  switch (pilihan) {
    case 1:
      menuInputData();
      break;
    case 2:
      if(listSiswa[0].nama != NULL){
        menuLihatData();
      }else{
        salahPilih();
        menuUtama();
      }
      break;
    case 3:
      if(listSiswa[0].nama != NULL){
        bagiSiswaKedalamKelas();
      }else{
        salahPilih();
      }
      menuUtama();  
      break;
    case 4:
      loadSiswaCsv();
      menuUtama();
      break;
    case 5:
      simpanKeFile();
      menuUtama();
      break;
    case 6:
      system("exit");
      break;
    default:
      salahPilih();
      menuUtama();
  }
}

void menuInputData(){
  int pilihan;
  printHeaderMenu("Input Data");
  printf("    1) Input Siswa Manual\n");
  printf("    2) Load Siswa (CSV) \n");
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
    default:
      salahPilih();
      menuUtama();
  }
}

void menuLihatData(){
  int pilihan;
  printHeaderMenu("Lihat Data");
  printf("    1) Lihat Data Siswa\n");
  if(listKelas[0].nama != NULL){
    printf("    2) Lihat Data Kelas\n");
    printf("    3) Cari Data Siswa (Berdasarkan NIM)\n");
  }
  printf("    0) Kembali Ke Menu Utama \n");
  ambilPilihanMenu(&pilihan);

  switch (pilihan) {
    case 0:
      menuUtama();
      break;
    case 1:
      lihatDataSiswa();
      menuLihatData();
      break;
    case 2:
      if(listKelas[0].nama != NULL){
        lihatDataKelas();
      } else {
        salahPilih();
      }
      menuUtama();  
      break;
    case 3:
      cariKelasSiswaNim();
      break;
  }
}

void printHeaderMenu(char *namaMenu){
  printf("\n\nPEMBAGIAN KELAS OTOMATIS\n");
  printf(" Menu %s :\n", namaMenu);
}

void ambilPilihanMenu(int *pilihan){
  printf("  Masukan Pilihan : ");
  scanf("%i", pilihan);
  getchar();
  fseek(stdin,0,SEEK_END);
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

void salahPilih(){
  printf("\nPilihan anda salah, silahkan coba lagi");
}