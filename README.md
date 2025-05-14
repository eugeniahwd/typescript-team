
# Kalkulator Luas dan Keliling Persegi Panjang

Proyek ini adalah program sederhana yang ditulis dalam bahasa C untuk menghitung luas dan keliling persegi panjang. Program ini meminta pengguna untuk memasukkan tinggi dan lebar persegi panjang, kemudian menghitung dan menampilkan luas dan kelilingnya.

## Fitur

- **Perhitungan Luas**: Menghitung luas persegi panjang menggunakan rumus `Luas = tinggi * lebar`.
- **Perhitungan Keliling**: Menghitung keliling persegi panjang menggunakan rumus `Keliling = 2 * (tinggi + lebar)`.

## Cara Menjalankan

1. Clone repositori ini ke mesin lokal Anda:
   ```bash
   git clone https://github.com/username/typescript-team.git
   ```

2. Masuk ke folder proyek:
   ```bash
   cd rectangle-calculator
   ```

3. Compile program C:
   ```bash
   gcc -o rectangle_calculator main.c
   ```

4. Jalankan program:
   ```bash
   ./rectangle_calculator
   ```

## Anggota Tim dan Peran

- **Nadia**: 
  - Mengembangkan fungsi **perhitungan luas**.
  - Menambahkan validasi input untuk tinggi dan lebar.

- **Azel**: 
  - Mengembangkan fungsi **perhitungan keliling**.
  - Menangani tampilan hasil.

- **Mila**: 
  - Mengintegrasikan fungsi luas dan keliling ke dalam program utama.
  - Memastikan program menangani input pengguna dengan benar.

- **Eugenia**:
  - Mengelola struktur keseluruhan dan memastikan kolaborasi antar anggota tim.

## Alur Pengembangan Kode

1. Setiap anggota tim bekerja pada fungsi tertentu (luas atau keliling).
2. Anggota tim melakukan commit setelah mengembangkan fungsi masing-masing.
3. Semua anggota menggunakan cabang Git untuk bekerja secara mandiri pada tugas mereka dan menggabungkannya ke cabang utama setelah review.

## Contoh Output

Berikut adalah contoh bagaimana program bekerja:

```
=== Kalkulator Luas dan Keliling Persegi Panjang ===
Masukkan tinggi: 5
Masukkan lebar: 10
Luas: 50.00
Keliling: 30.00
```

## Instruksi untuk Kolaborasi

1. Clone repositori dan buat cabang baru untuk tugas Anda:
   ```bash
   git checkout -b feature-<namamu>
   ```

2. Kerjakan tugas Anda (perhitungan luas atau keliling).

3. Commit perubahan Anda dan push ke cabang Anda:
   ```bash
   git add .
   git commit -m "Tambah <fitur>"
   git push origin feature-<namamu>
   ```

4. Buat **pull request** untuk cabang fitur Anda dan minta review.

5. Gabungkan perubahan Anda ke cabang `main` setelah disetujui.

## Pedoman Kontribusi

- Pastikan untuk membuat pesan commit yang jelas menjelaskan perubahan Anda.
- Ikuti standar penulisan kode untuk konsistensi format kode.
- Setiap fitur harus direview dan disetujui sebelum digabungkan ke cabang `main`.

## Lisensi

Proyek ini dilisensikan di bawah [MIT License](LICENSE).
