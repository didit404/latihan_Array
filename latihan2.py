daftar_produk=["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"]
ada_keyboard = "Keyboard" in daftar_produk
print("Apakah Keyboard ada? ", ada_keyboard)
filter_produk=[x for x in daftar_produk if len(x) > 5]
print("Produk dengan nama lebih dari 5 karakter adalah: ", filter_produk)