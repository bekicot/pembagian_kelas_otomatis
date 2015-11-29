typedef struct klassSiswa 
{
  char* nama;
  int   nim;
}klassSiswa;

typedef struct klassKelas 
{
  char*       nama;
  klassSiswa  siswa[100];
}klassKelas;

typedef struct fileFormat
{
  klassSiswa listSiswa[10005];
  klassKelas listKelas[255];
}fileFormat;
