typedef struct klassSiswa 
{
  char* nama[50];
  int   nim;
}klassSiswa;

typedef struct klassKelas 
{
  char*       nama[20];
  klassSiswa  siswa[];
}klassKelas;

typedef struct klassLokasi 
{
  char* gedung[30];
  int   lantai;
}klassLokasi;

typedef struct klassJam
{
  int jam;
  int menit;
}klassJam;

typedef struct klassTanggal
{
  int tahun;
  int bulan;
  int hari;
}klassTanggal;

typedef struct klassWaktu 
{
  klassJam      jam;
  klassTanggal  tanggal;
}klassWaktu;

typedef struct klassJadwal 
{
  klassWaktu waktu;
  klassKelas kelas;
}klassJadwal;

typedef struct klassRuangan 
{
  char*         nama;
  klassLokasi   lokasi;
  int           jumlahKursi;
  klassJadwal   jadwal;
}klassRuangan;
