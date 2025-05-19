#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int value) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack penuh (Overflow)!" << endl;
        } else {
            top++;
            data[top] = value;
            cout << "Elemen " << value << " berhasil ditambahkan ke stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack kosong (Underflow)!" << endl;
        } else {
            cout << "Elemen " << data[top] << " dihapus dari stack." << endl;
            top--;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack kosong." << endl;
        } else {
            cout << "Isi stack (dari atas ke bawah): ";
            for (int i = top; i >= 0; i--) {
                cout << data[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;
    int pilihan, nilai;

    do {
        cout << "\nMenu Stack:\n";
        cout << "1. Push\n2. Pop\n3. Tampilkan Stack\n4. Keluar\n";
        cout << "Pilih opsi: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai: ";
                cin >> nilai;
                s.push(nilai);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 4);

    return 0;
}
