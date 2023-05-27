package main

import (
	"fmt"
)

func main() {

	fmt.Println("Ahmad Muhajir Bachtiar (D121211098)\n")

	fmt.Println("Masukkan angka pertama: ")
	var num1 float32
	fmt.Scanln(&num1)

	fmt.Println("Masukkan angka kedua: ")
	var num2 float32
	fmt.Scanln(&num2)

	fmt.Printf("Hasil penjumlahan: %.1f\n", num1+num2)
	fmt.Printf("Hasil pengurangan: %.1f\n", num1-num2)
	fmt.Printf("Hasil perkalian: %.1f\n", num1*num2)
	fmt.Printf("Hasil pembagian: %.1f\n", num1/num2)

	fmt.Printf("Terima kasih\n\n")
}
