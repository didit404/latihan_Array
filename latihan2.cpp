#include <iostream>
#include <vector>
#include <string>    // Tambahkan header string
#include <algorithm>
#include <iterator>  // Untuk std::back_inserter

using namespace std;

int main() {
    const std::vector<std::string> daftar_produk = {"Laptop", "Mouse", "Keyboard", "Monitor", "Headset"};
    
    // 1. Cari apakah Keyboard ada
    const bool ada_keyboard = std::find(daftar_produk.begin(), daftar_produk.end(), "Keyboard") != daftar_produk.end();
    std::cout << "Apakah Keyboard ada? " << (ada_keyboard ? "True" : "False") << std::endl;
    
    // 2. Filter produk (> 5 karakter) tanpa mengubah daftar_produk asli
    std::vector<std::string> filter_produk;
    std::copy_if(daftar_produk.begin(), daftar_produk.end(), std::back_inserter(filter_produk), [](const std::string& x) { 
        return x.length() > 5; 
    });
    
    // 3. Tampilkan hasil
    std::cout << "Produk dengan nama lebih dari 5 karakter adalah: ";
    for (const auto& produk : filter_produk) {
        std::cout << produk << " ";
    }
    std::cout << std::endl;
    
    return 0;
}