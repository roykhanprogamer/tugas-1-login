#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username, password, data; // deklarasi variable username, password, dan data dengan nilai null
    string data_username = "", data_password = ""; // deklarasi variable data_username dan data_password dengan nilai kosong ("")
    int panjang_username, panjang_password; // deklarasi variable panjang_username dan panjang_password dengan nilai null
    
    cout << "Masukkan Username" << endl; // hanya text
    cin >> username; // input ke dalam variable username
    cout << "Masukkan Password" << endl; // hanya text
    cin >> password; // input ke dalam variable password
    
    // memasukkan nilai panjang_username + username + panjang_password + password ke dalam variable data
    data = to_string(username.length()) + username + to_string(password.length()) + password;
    
    cout << "\ndata yang dikirim " << data << endl; // menampilkan nilai dari data
    
    // cari username
    panjang_username = (int) data[0] - 48 /* 48 code ascii dari char 0 */; //supaya mudah merubah string ke integer
    data.erase(0, 1); // menghapus data index ke 0
    for(int i=0; i<panjang_username; i++) { // perulangan menambahkan isi dari data_username sebanyak nilai panjang panjang_username
        data_username = data_username + data[0]; // menambahkan data_username dengan data index ke 0
        data.erase(0, 1); // menghapus data index ke 0
    }
    
    // cari password
    panjang_password = (int) data[0] - 48 /* 48 code ascii dari char 0 */;
    data.erase(0, 1); // menghapus data index ke 0
    for(int i=0; i<panjang_password; i++) { // perulangan menambahkan isi dari data_password sebanyak nilai panjang panjang_password
        data_password = data_password + data[0]; // menambahkan data_password dengan data index ke 0
        data.erase(0, 1); // menghapus data index ke 0
    }
    
    cout << "\ndata yang diterima" << endl; // hanya text
    cout << "username " << data_username << endl; // menampilkan isi dari data_username
    cout << "password " << data_password << endl; // menampilkan isi dari data_password
    
    return 0;
}
