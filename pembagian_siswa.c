void bagiKelas(int jumlah, int metodePembagian);
void urutkanSiswaBerdasarkanNim();
void urutkanSiswaBerdasarkanNama();
void swap(klassSiswa *pnode1,klassSiswa *pnode2);

extern int jumlahKelas;
void bagiSiswaKedalamKelas(){
  int metodePembagian, sudahCoba = 0;
  while(metodePembagian > 3 || metodePembagian < 1){
    if(sudahCoba)
      printf("\nPilihan Anda Invalid, Coba Lagi\n");
    printf("Berapa jumlah kelas tersedia ? : ");
    scanf("%i", &jumlahKelas);
    printf("    Metode pembagian kelas :\n");
    printf("      1) Berdasarkan NIM\n");
    printf("      2) Berdasarkan Nama\n");
    printf("      3) Berdasarkan Urutan Siswa Saat Ini");
    printf("\n");
    printf("Masukan Metode Pembagian Kelas : ");
    scanf("%i", &metodePembagian);
  }
  bagiKelas(jumlahKelas, metodePembagian);
}

void bagiKelas(int jumlah, int metodePembagian){
  int i = 0, offset = 0, hasilBagi, targetOffset, idxSiswa;
  hasilBagi = hitungJumlahSiswa()/jumlah;
  printf("Satu kelas akan terdapat %i siswa\n", hasilBagi);
  if(metodePembagian == 1){
    urutkanSiswaBerdasarkanNim();
  } else if (metodePembagian == 2){
    urutkanSiswaBerdasarkanNama();
  }
  for(i = 0; i < jumlah; i++){
    idxSiswa = 0;
    targetOffset = offset + hasilBagi;
    printf("Masukan Nama Kelas\n");
    listKelas[i].nama = malloc(sizeof(char)*100);
    scanf("%s", listKelas[i].nama);
    for(;offset<=targetOffset; offset++){
      printf("offset = %i\n", offset);
      listKelas[i].siswa[idxSiswa] = listSiswa[offset];
      idxSiswa++;
    }
  }
}


void urutkanSiswaBerdasarkanNim(){
  int i, j;
  int jmlhSiswa = hitungJumlahSiswa();
  for (i = 1 ; i < jmlhSiswa; i++)
  {
    for (j = i - 1 ; j > 0; j--)
    {
      if (listSiswa[j].nim < listSiswa[j-1].nim)
      {
        swap(&listSiswa[j], &listSiswa[j-1]);
      }
    }
  }
}

void urutkanSiswaBerdasarkanNama(){
  int i, j;
  int jmlhSiswa = hitungJumlahSiswa();
  for (i = 1 ; i < jmlhSiswa; i++)
  {
    for (j = i - 1 ; j > 0; j--)
    {
      if(strcmp(listSiswa[j].nama, listSiswa[j-1].nama) < 0)
      {
        swap(&listSiswa[j], &listSiswa[j-1]);
      }
    }
  }
}

void swap(klassSiswa *pnode1,klassSiswa *pnode2)
{
    klassSiswa temp;
    temp=*pnode1;
    *pnode1=*pnode2;
    *pnode2=temp;
}

