pengukuran_suhu=[-3, 5, 0, -12, 8, 15, -1, 22]
ada_0 = 0 in pengukuran_suhu
print("Apakah ada pengukuran suhu 0 derajat? ", ada_0)

filter_produk=[x for x in pengukuran_suhu if x > 0]
print("Pengukuran suhu yang lebih dari 0 derajat adalah: ", filter_produk)