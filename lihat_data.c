void lihatDataSiswa();
void lihatDataKelas();
void lihatDataSiswaDari(klassSiswa *siswa);

extern klassSiswa listSiswa[10000];

void lihatDataSiswa(){
  lihatDataSiswaDari(listSiswa);
}

void lihatDataSiswaDari(klassSiswa *siswa){
  int i = 0;
  while(siswa[i].nama != NULL){
    printf("%i ", siswa[i].nim);
    printf("%s\n", siswa[i].nama);
    i++;
  }
}

void lihatDataKelas(){
  int i = 0;
  while(listKelas[i].nama != NULL){
    printf("%s\n", listKelas[i].nama);
    lihatDataSiswaDari(listKelas[i].siswa);
    i++;
  }
}

void cariKelasSiswaNim(){
  int nim, i;
  printf("Masukan NIM siswa\n");
  scanf("%i", &nim);
  while(listSiswa[i].nama != NULL){
    if(listSiswa[i].nim == nim){
      printf("%i ", listSiswa[i].nim);
      printf("%s\n", listSiswa[i].nama);
    }
    i++;
  }
}