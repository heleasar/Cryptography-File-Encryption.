#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Crypto {
private:
    string plaintext_filename;
    string ciphertext_filename;
    int key;

public:
    Crypto(string p_file, string c_file, int k) {
        plaintext_filename = p_file;
        ciphertext_filename = c_file;
        key = k;
        Encrypt();
    }

    void Encrypt() {
        ifstream plaintext(plaintext_filename);
        ofstream ciphertext(ciphertext_filename);

        if (plaintext.is_open() && ciphertext.is_open()) {
            char ch;
            while (plaintext.get(ch)) {
                int num = static_cast<int>(ch);
                num += key;
                ciphertext << num << " ";
            }
            plaintext.close();
            ciphertext.close();
        } else {
            cerr << "Error: could not open file(s) for encryption." << endl;
        }
    }

    void Decryption(string c_file, string p_file, int k) {
        ifstream ciphertext(c_file);
        ofstream plaintext(p_file);

        if (ciphertext.is_open() && plaintext.is_open()) {
            int num;
            while (ciphertext >> num) {
                num -= k;
                char ch = static_cast<char>(num);
                plaintext << ch;
            }
            ciphertext.close();
            plaintext.close();
        } else {
            cerr << "Error: could not open file(s) for decryption." << endl;
        }
    }
};
