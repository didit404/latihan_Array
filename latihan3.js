const pengukuran_suhu = [-3, 5, 0, -12, 8, 15, -1, 22];
const ada_0 = pengukuran_suhu.includes(0);
console.log("Apakah ada pengukuran suhu 0 derajat? ", ada_0);

const filter_produk = pengukuran_suhu.filter((x) => x > 0);
console.log("Pengukuran suhu yang lebih dari 0 derajat adalah: ", filter_produk);