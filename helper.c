int checkSiswaValid(klassSiswa siswa);
int indexSiswaKosong();
int checkKetersediaanDataSiswa();
int checkKetersediaanDataKelas();
int hitungJumlahSiswa();

extern klassSiswa listSiswa[10000];
extern klassKelas listKelas[250];

int checkSiswaValid(klassSiswa siswa){
  if(siswa.nim != 0){
    return 1;
  } else {
    return 0;
  }
}


int indexSiswaKosong(){
  int i;
  for(i = 0; i < (sizeof(listSiswa)/sizeof(listSiswa[0])) - 1; i++){
    if(listSiswa[i].nama == NULL){
      return i;
    }
  }
  return -1;
}

int checkKetersediaanDataSiswa(){
  if(listSiswa[0].nama == NULL)
    return 0;
  else
    return 1;
}

int checkKetersediaanDataKelas(){
  if(listKelas[0].nama == NULL)
    return 0;
  else
    return 1;
}

int hitungJumlahSiswa(){
  return indexSiswaKosong() + 1;
}