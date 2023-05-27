package main

import "fmt"

func main() {
	fmt.Println("Masukkan angka: ")
	var num int
	fmt.Scanln(&num)
	switch num {
	case 1:
		fmt.Println("JANUARI\n")
	case 2:
		fmt.Println("FEBRUARI\n")
	case 3:
		fmt.Println("MARET\n")
	case 4:
		fmt.Println("APRIL\n")
	case 5:
		fmt.Println("MEI\n")
	case 6:
		fmt.Println("JUNI\n")
	case 7:
		fmt.Println("JULI\n")
	case 8:
		fmt.Println("AGUSTUS\n")
	case 9:
		fmt.Println("SEPTEMBER\n")
	case 10:
		fmt.Println("OKTOBER\n")
	case 11:
		fmt.Println("NOVEMBER\n")
	case 12:
		fmt.Println("DESEMBER\n")
	default:
		fmt.Println("Angka yang Anda masukkan Invalid (Masukkan 1-12)\n")
	}
}
