#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    // Data pengukuran suhu
    const std::vector<int> suhu = {-3, 5, 0, -12, 8, 15, -1, 22};

    // 1. Cari apakah nilai 0 ada di dalam array data
    bool ada_nol = std::find(suhu.begin(), suhu.end(), 0) != suhu.end();
    
    std::cout << "Apakah nilai 0 ada di dalam array? " << (ada_nol ? "Ya" : "Tidak") << std::endl;

    // 2. Filter hanya nilai suhu yang positif (> 0)
    std::vector<int> suhu_positif;
    std::copy_if(suhu.begin(), suhu.end(), std::back_inserter(suhu_positif), [](int x) {
        return x > 0;
    });

    // Menampilkan hasil filter
    std::cout << "Nilai suhu yang positif: [";
    for (size_t i = 0; i < suhu_positif.size(); ++i) {
        std::cout << suhu_positif[i];
        if (i != suhu_positif.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
