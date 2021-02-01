#include <iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>

using namespace std;

class Fuzzy{
    float kualitasburuk = 0, kualitassedang = 0, kualitasbaik = 0, kualitassangatbaik = 0;
    float umurmuda = 0, umurparubaya = 0, umurtua = 0;
    double a,b;
    float nilaikesimpulanrendah[100], nilaikesimpulantinggi[100] ;
    float max_output = 100;
    float min_output = 0;

    //Input Defuzzifikasi
    float rendah;
    float tinggi;

    //Input Nilai Crisp
    float crispOutput;
    float crisp_val = 0;


    public:
    void kualitasacaratv(float a) {
        //mencek keanggotaan linguistik "kualitasburuk"
        // himpunan anggota dari kualitasacaratv

	if ((a >= 1) || (a <= 25))
	{
		kualitasburuk = 1;
	}

	{
		if ((a < 1) || (a >25))
		{
			kualitasburuk = 0;
		}
		else kualitassedang,kualitasbaik,kualitassangatbaik = 0;
	}

	//mencek keanggotaan linguistik "kualitassedang"
	if ((a >= 25) || (a <= 60))
	{
		kualitassedang = 1;
	}

	{
		if ((a < 25) || (a >60))
		{
			kualitassedang = 0;
		}

		else kualitasburuk,kualitasbaik,kualitassangatbaik = 0;
	}

	//mencek keanggotaan linguistik "baik"
	if ((a >= 60) || (a <= 85))
	{
		kualitasbaik = 1;
	}

	{
		if ((a < 60) || (a >85))
		{
			kualitasbaik = 0;
		}


			else kualitasburuk,kualitassedang,kualitassangatbaik = 0;
	}

	//mencek keanggotaan linguistik "kualitassangatbaik"
	if ((a >= 85) || (a <= 100))
	{
		kualitassangatbaik = 1;

	}

	{
		if ((a < 85) || (a > 100))
		{
			kualitassangatbaik = 0;
		}
		else kualitasburuk,kualitassedang,kualitasbaik = 0;
	}


    }
    void anggotaumur(float b) {
        //mencek keanggotaan linguistik "UMUR"
        // himpunan anggota dari Anak Remaja

	if (b < 25)
	{
		umurmuda = 1;
	}
	else
	{
		if ((b <= 45) || (b >= 25))
		{
			umurmuda = (float)((45 - b) / 20);
		}
		else umurmuda = 0;
	}
	//mencek keanggotaan linguistik "Dewasa"
	if ((b <= 35) || (b >= 55))
	{
		umurparubaya = 0;
	}
	else
	{
		if ((b <= 45) && (b >= 35))
		{
			umurparubaya = (float)((b - 35) / 10);
		}
		else
		{
			if ((b >= 45) && (b <= 55))
			{
				umurparubaya = (float)((55 - b) / 10);
			}
			else umurparubaya = 1;
		}
	}
	//mencek keanggotaan linguistik "Lansia"
	if (b <= 45)
	{
		umurtua = 0;
	}
	else
	{
		if ((b >= 45) && (b <= 65))
		{
			umurtua = (float)((b - 45) / 20);
		}
		else umurtua = 1;
	}
    }
         void cetakMember() {//cetak input

        printf("kualitas Acara TV Yang Di Dapat:\n");
        printf("buruk %.2f\n",kualitasburuk);
        printf("sedang %.2f\n",kualitassedang);
        printf("baik %.2f\n",kualitasbaik);
        printf("sangat baik %.2f\n",kualitassangatbaik);

        printf("\n\nAnggota Umur:\n");
        printf("Anak atau Remaja %.2f\n",umurmuda);
        printf("Dewasa %.2f\n",umurparubaya);
        printf("Lansia %.2f\n",umurtua);


    }
          float min(float x, float y) {
			if (x < y) {
				return x;
			}


			else if (y < x) {
				return y;

			}
          }
    float max(float x, float y){
    if (x > y) {
				return x;
			}
			else {
				return y;
			}
		}

    float max_array(float x[], int n){
    float max = 0;
    for(int i = 0; i < n; i++){
        if(x[i] > max){
            max = x[i];
            }
        }
        return max;
    }
        void inferensi(){
		int i = 0, j = 0;


    //Rules anak remaja
    if (umurmuda != 0 && kualitasburuk != 0) {
		nilaikesimpulanrendah[i] = min(umurmuda, kualitasburuk);
		printf("Rules 1 -> Nilai Rating Penonton Rendah\n", nilaikesimpulanrendah[i]);
		i++;
	}
	if (umurmuda != 0 && kualitassedang != 0) {
		nilaikesimpulanrendah[i] = min(umurmuda, kualitassedang);
		printf("Rules 2 -> Nilai Rating Penonton Sedang \n", nilaikesimpulanrendah[i]);
		i++;
	}
	if (umurmuda != 0 && kualitasbaik != 0) {
		nilaikesimpulantinggi[j] = min(umurmuda, kualitasbaik);
		printf("Rules 3 -> Nilai Rating Penonton Baik \n", nilaikesimpulantinggi[j] );
		j++;
	}
	if (umurmuda != 0 && kualitassangatbaik != 0) {
		nilaikesimpulantinggi[j] = min(umurmuda, kualitassangatbaik);
		printf("Rules 4 -> Nilai Rating Penonton Sangat Baik \n", nilaikesimpulantinggi[j]);
		j++;




    //Rules dewasa
	}if (umurparubaya != 0 && kualitasburuk != 0) {
		nilaikesimpulanrendah[i] = min(umurparubaya, kualitasburuk);
		printf("Rules 5 -> Nilai Rating Penonton Rendah \n", nilaikesimpulanrendah[i]);
		i++;
	}
	if (umurparubaya != 0 && kualitassedang != 0) {
		nilaikesimpulanrendah[i] = min(umurparubaya, kualitassedang);
		printf("Rules 6 -> Nilai Rating Penonton Sedang \n", nilaikesimpulanrendah[i]);
		i++;
	}
	if (umurparubaya != 0 && kualitasbaik != 0) {
		nilaikesimpulantinggi[j] = min(umurparubaya, kualitasbaik);
		printf("Rules 7 -> Nilai Rating Penonton Baik \n", nilaikesimpulantinggi[j] );
		j++;
	}
	if (umurparubaya!= 0 && kualitassangatbaik != 0) {
		nilaikesimpulantinggi[j] = min(umurparubaya, kualitassangatbaik);
		printf("Rules 8 -> Nilai Rating Penonton Sangat Baik \n", nilaikesimpulantinggi[j]);
		j++;





	//Rules lansia
	}if (umurtua != 0 && kualitasburuk != 0) {
		nilaikesimpulanrendah[i] = min(umurtua , kualitasburuk);
		printf("Rules 9 -> Nilai Rating Penonton Rendah \n", nilaikesimpulanrendah[i]);
		i++;
	}
	if (umurtua  != 0 && kualitassedang != 0) {
		nilaikesimpulanrendah[i] = min(umurtua , kualitassedang);
		printf("Rules 10 -> Nilai Rating Penonton Sedang \n", nilaikesimpulanrendah[i]);
		i++;
	}
	if (umurtua  != 0 && kualitasbaik != 0) {
		nilaikesimpulantinggi[j] = min(umurtua , kualitasbaik);
		printf("Rules 11 -> Nilai Rating Penonton Baik \n", nilaikesimpulantinggi[j] );
		j++;
	}
	if (umurtua  != 0 && kualitassangatbaik != 0) {
		nilaikesimpulantinggi[j] = min(umurtua , kualitassangatbaik);
		printf("Rules 12 -> Nilai Rating Penonton Sangat Baik \n", nilaikesimpulantinggi[j]);
		j++;
	}



	  //DEFUZZIFIKASI
		if(i == 0){
            rendah = 0;
		} else {
		    rendah = max_array(nilaikesimpulanrendah, i);
		}
		if(j == 0){
            tinggi = 0;
		} else {
		    tinggi = max_array(nilaikesimpulantinggi, j);
		}
		printf("\n\nHasil akhir inferensi: \n");
		printf("Nilai Kesimpulan Rendah %.2f\n" , rendah);
		printf("Nilai Kesimpulan Tinggi %.2f\n" , tinggi);

    }


    float valNKrendah(float x) {
			if (x <= 50) return 1;
			else {
				if (x <= 80) return (float)((-x+80)/30);
				else return 0;

			}
		}
		float valNKtinggi(float x) {
			if (x <=50) return 0;
			else {
				if (x <= 80)return(float)((x - 50)/30);
				else return 1;
			}
		}

	void defuzz_centroid(int sampel) {
        float t = (max_output - min_output) / sampel;
        float pengali_rendah[50],pengali_cukup[50], pengali_tinggi[50], pengali_others[50], others[50], pengali[50], sampels[100], valRendah, valTinggi;
        float x = min_output;
        float sumX = 0;
        int i, irendah = 0, itinggi = 0, iothers = 0;
        float crisp_val = 0;
        float crispOutput;

        char *result = "";

        for(i = 0; i < sampel; i++) {
            x = x + t;
            sampels[i] = x;
            valRendah = valNKrendah(x);
            valTinggi = valNKtinggi(x);

            if(valRendah > rendah)
                valRendah = rendah;
            if(valTinggi > tinggi)
                valTinggi = tinggi;

            pengali[i] = max(valRendah, valTinggi);

            if(pengali[i] == rendah) {
                pengali_rendah[irendah] = x;
                irendah++;
                }
                else {
                    if(pengali[i] == tinggi) {
                    pengali_tinggi[itinggi] = x;
                    itinggi++;
                    }
                    else {
                        pengali_others[iothers] = x;
                        others[iothers] = pengali[i];
                        iothers++;
                    }
                }
            crisp_val = crisp_val + (x*pengali[i]);
            sumX = sumX + pengali[i];
        }
        printf("crisp_val = %.2f \n", crisp_val);
        crispOutput = crisp_val/sumX;
		printf("crisp = %.2f" , crispOutput);


    }
};
    int main() {
    float kualitasacaratv,sampel;
    float umur;

    Fuzzy test;
    printf("\n TUBES AI KELOMPOK 6 : Aldio Rahardian dan Maulana Akbar Dwijaya\n\n");
    printf("\n PROGRAM PENGAMBILAN KEPUTUSAN UNTUK KESIMPULAN ACARA TV ANDA \n");

    printf("\nMasukkan Nilai Kesimpulan Kualitas Acara TV anda  : "); scanf("%f", &kualitasacaratv);
    printf("\nMasukkan nilai umur (1 tahun - 60 tahun) : "); scanf("%f", &umur);



    test.anggotaumur(umur);
    test.kualitasacaratv(kualitasacaratv);
    test.cetakMember();
    printf("\n\nRules yang dipakai di dalam inferensi: \n");
    test.inferensi();
    printf("\nMasukkan jumlah sampel pada centroid: "); scanf("%f", &sampel);
    test.defuzz_centroid(sampel);

    return 0;
    }

