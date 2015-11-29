void inputKelas();
void ambilBerulang();
void inputSiswa();


extern klassSiswa listSiswa[10000];

void inputSiswa(){
  int idx = indexSiswaKosong();
  if(idx != -1){
    getchar();
    printf("Masukan Nama Siswa Anggota kelas : ");
    listSiswa[idx].nama = malloc(sizeof(char)*100);
    fgets (listSiswa[idx].nama, 100, stdin);
    // scanf("%[^\n]%*c", listSiswa[idx].nama);
    printf("Masukan NIM Siswa Anggota kelas : ");
    scanf("%i", &listSiswa[idx].nim);
  }
}

void ambilBerulang(char* konteks, void (*f)()){
  char respon[5];
  printf("Masukan data %s lagi ( Ya | Tidak ) ? ", konteks);
  scanf("%s", respon);
  if(strcmp(respon, "Ya") == 0 || strcmp(respon, "Tidak") == 0){
    if(strcmp(respon, "Ya") == 0){
      (*f)();
      ambilBerulang(konteks, f);
    }
  } else {
    printf("Respon tidak valid. Hanya Pilih Ya Atau Tidak\n");
    ambilBerulang(konteks, f);
  }
}
