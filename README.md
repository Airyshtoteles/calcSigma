# Kalkulator Sigma GUI 🧮

Aplikasi Python dengan antarmuka GUI (Tkinter) untuk menghitung operasi sigma (∑) dari ekspresi matematika, dengan batas bawah dan atas yang bisa diatur secara dinamis.

## 📌 Fitur
- Input ekspresi matematika berbasis `i`, `ai`, atau `bi`.
- Batas bawah dan atas dinamis.
- Mendukung input jumlah suku jika ekspresi mengandung `ai` atau `bi`.
- Menampilkan langkah dan hasil.
- Hasil diekspor ke PDF (opsional).
- GUI simpel berbasis `tkinter`.

## 🖼️ Tampilan Awal
![preview](preview.png) <!-- opsional kalau kamu upload gambar -->

## 🚀 Cara Menjalankan

1. Pastikan Python 3 sudah terpasang.
2. Install dependensi jika diperlukan:
    ```bash
    pip install matplotlib fpdf
    ```
3. Jalankan file:
    ```bash
    python sigmaGui.py
    ```

## 🧠 Contoh Penggunaan

### Contoh 1:
Input ekspresi:
Batas bawah: `1`  
Batas atas: `10`  
➡️ Output: hasil dari ∑ᵢ₌₁¹⁰ 2i(i - 5)

### Contoh 2:
Input ekspresi:
Jumlah suku: `3`  
Sum ai: `5`  
Sum bi: `10`  
➡️ Maka dianggap:  
`ai = 5/3`, `bi = 10/3`  
Ekspresi dimodifikasi jadi: `(5/3) + (10/3)`

---

## 👨‍💻 Developer
Made with 💻 by [@Airyshtoteles](https://github.com/Airyshtoteles)
