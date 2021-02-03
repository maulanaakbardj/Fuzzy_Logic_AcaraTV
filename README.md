# KUALITAS-ACARA-TV
Mengukur Kualitas Acara TV dengan Metode Fuzzy
# Parameter
3 input  :
1.	Edukatif
Nilai Linguistik untuk edukatif:
•	Buruk : nilai edukatif <= 40%;
•	Tidak Buruk :  nilai edukatif  > 60%;
•	Standar : nilai edukatif = 50% - 70% ;
•	Tidak Standar :  nilai edukatif < 40 % & nilai edukatif  > 80%;
•	Baik : nilai edukatif = 80% - 100%;
•	Tidak Baik :  nilai edukatif  < 60%;
2.  Informatif
Nilai Linguistik untuk informatif:
•	Kurang : nilai informatif <= 30%;
•	Tidak Kurang :  nilai informatif  > 50%;
•	Cukup : nilai informatif = 50% ;
•	Tidak Cukup :  nilai informatif < 30 % & nilai informatif  > 70%;
•	Banyak : nilai informatif  = 70% - 100%;
•	Tidak Banyak :  nilai informatif  < 50%;
3.	Jumlah penonton
Nilai Linguistik untuk jumlah penonton:
•	Sedikit : nilai jumlah penonton <= 300 orang;
•	Tidak Sedikit :  nilai jumlah penonton  > 500 orang;
•	Sedang : nilai jumlah penonton = 400 – 600 orang ;
•	Tidak Sedang :  nilai jumlah penonton < 300 orang & nilai jumlah penonton  > 700 orang;
•	Banyak : nilai jumlah penonton >= 700 orang;
•	Tidak Banyak :  nilai jumlah penonton  < 500 orang;

output :
1.	Kualitas TV, Nilai Linguistik untuk kualitas TV debagai berikut:
•	Buruk : nilai kualitas <= 40;
•	Tidak Buruk :  nilaii kualitas > 60;
•	Standar : nilai kualitas = 60 ;
•	Tidak Standar:  nilai kualitas < 40  & nilai kualitas  > 80;
•	Tinggi : nilai kualitas  = 70 - 100;
•	Tidak Tinggi :  nilai kualitas  < 60;

# Rules
Adapun spesifikasi rules yang telah kita rancang berjumlah 27 rules yaitu sebagai berikut :
RULE 1 : IF edukatif IS buruk AND informatif IS kurang AND jml_penonton IS sedikit THEN kualitas IS buruk;
RULE 2 : IF edukatif IS standar AND informatif IS cukup AND jml_penonton IS sedang THEN kualitas IS standar;
RULE 3 : IF edukatif IS baik AND informatif IS banyak AND jml_penonton IS banyak THEN kualitas IS tinggi;
RULE 4 : IF edukatif IS buruk AND informatif IS cukup AND jml_penonton IS sedikit THEN kualitas IS buruk;
RULE 5 : IF edukatif IS standar AND informatif IS kurang AND jml_penonton IS sedang THEN kualitas IS standar;
RULE 6 : IF edukatif IS baik AND informatif IS kurang AND jml_penonton IS banyak THEN kualitas IS tinggi;
RULE 7 : IF edukatif IS standar AND informatif IS kurang AND jml_penonton IS sedang THEN kualitas IS buruk;
RULE 8 : IF edukatif IS buruk AND informatif IS banyak AND jml_penonton IS sedikit THEN kualitas IS standar;
RULE 9 : IF edukatif IS baik AND informatif IS cukup AND jml_penonton IS banyak THEN kualitas IS tinggi;
RULE 10 : IF edukatif IS buruk AND informatif IS kurang AND jml_penonton IS sedang THEN kualitas IS buruk;
RULE 11 : IF edukatif IS standar AND informatif IS cukup AND jml_penonton IS banyak THEN kualitas IS standar;
RULE 12 : IF edukatif IS baik AND informatif IS banyak AND jml_penonton IS sedikit THEN kualitas IS tinggi;
RULE 13 : IF edukatif IS buruk AND informatif IS cukup AND jml_penonton IS sedang THEN kualitas IS buruk;
RULE 14 : IF edukatif IS standar AND informatif IS kurang AND jml_penonton IS banyak THEN kualitas IS standar;
RULE 15 : IF edukatif IS buruk AND informatif IS banyak AND jml_penonton IS sedang THEN kualitas IS tinggi;
RULE 16 : IF edukatif IS buruk AND informatif IS cukup AND jml_penonton IS banyak THEN kualitas IS buruk;
RULE 17 : IF edukatif IS baik AND informatif IS cukup AND jml_penonton IS sedikit THEN kualitas IS standar;
RULE 18 : IF edukatif IS baik AND informatif IS kurang AND jml_penonton IS sedang THEN kualitas IS tinggi;
RULE 19 : IF edukatif IS standar AND informatif IS kurang AND jml_penonton IS sedikit THEN kualitas IS buruk;
RULE 20 : IF edukatif IS baik AND informatif IS cukup AND jml_penonton IS sedang THEN kualitas IS standar;
RULE 21 : IF edukatif IS buruk AND informatif IS kurang AND jml_penonton IS banyak THEN kualitas IS tinggi;
RULE 22 : IF edukatif IS standar AND informatif IS banyak AND jml_penonton IS sedikit THEN kualitas IS buruk;
RULE 23 : IF edukatif IS baik AND informatif IS kurang AND jml_penonton IS banyak THEN kualitas IS standar;
RULE 24 : IF edukatif IS baik AND informatif IS banyak AND jml_penonton IS sedang THEN kualitas IS tinggi;
RULE 25 : IF edukatif IS standar AND informatif IS cukup AND jml_penonton IS sedikit THEN kualitas IS buruk;
RULE 26 : IF edukatif IS buruk AND informatif IS banyak AND jml_penonton IS banyak THEN kualitas IS standar;
RULE 27 : IF edukatif IS baik AND informatif IS kurang AND jml_penonton IS sedikit THEN kualitas IS tinggi;
