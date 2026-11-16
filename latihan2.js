const nama_produk = ["Laptop", "Mouse", "Keyboard", "Monitor", "Headset"];
if(nama_produk.includes("Keyboard")){
    console.log("Apakah Keyboard ada? ", true);
    const filter_produk = nama_produk.filter((x) => x.length > 5);
    console.log("Produk dengan nama lebih dari 5 karakter adalah: ", filter_produk);
}
