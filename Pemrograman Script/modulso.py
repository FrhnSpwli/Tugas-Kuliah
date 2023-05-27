import os

#Mengecek direktori saat ini
def current_directory():
    print("------------ Mengecek Direktori Saat Ini -----------")
    print(os.getcwd()) 
    input("Press enter to continue...")

#Mengecek isi direktori saat ini
def current_directory_content():
    print("------------ Mengecek Isi Direktori Saat Ini -----------")
    print(os.listdir(os.getcwd()))
    input("Press enter to continue...")

#Membuat direktori baru
def create_directory():
    print("------------ Membuat Direktori Baru -----------")
    nama_direktori = input("Masukkan nama direktori baru: ")
    try:
        os.mkdir(nama_direktori)
        print("Direktori berhasil dibuat")
    except FileExistsError:
        print("Direktori sudah ada")
    input("Press enter to continue...")


#Menghapus direktori
def delete_directory():
    print("------------ Menghapus Direktori -----------")
    nama_direktori = input("Masukkan nama direktori yang akan dihapus: ")
    try:
        os.rmdir(nama_direktori)
        print("Direktori berhasil dihapus")
    except FileNotFoundError:
        print("Direktori tidak ditemukan")
    input("Press enter to continue...")

#Mengubah nama direktori
def rename_directory():
    print("------------ Mengubah Nama Direktori -----------")
    nama_direktori = input("Masukkan nama direktori yang akan diubah: ")
    try:
        nama_direktori_baru = input("Masukkan nama direktori baru: ")
        os.rename(nama_direktori, nama_direktori_baru)
        print("Nama direktori berhasil diubah")
    except FileNotFoundError:
        print("Direktori tidak ditemukan")
    except FileExistsError:
        print("Nama direktori baru sudah ada")
    input("Press enter to continue...")


#Membuat file
def create_file():
    print("------------ Membuat File Baru -----------")
    nama_file = input("Masukkan nama file baru: ")
    try:
        with open(nama_file, "x") as file:
            print("File berhasil dibuat")
    except FileExistsError:
        print("File sudah ada")
    input("Press enter to continue...")

#Menghapus file
def delete_file():
    print("------------ Menghapus File -----------")
    nama_file = input("Masukkan nama file yang akan dihapus: ")
    try:
        os.remove(nama_file)
        print("File berhasil dihapus")
    except FileNotFoundError:
        print("File tidak ditemukan")
    input("Press enter to continue...")

#Mengubah nama file
def rename_file():
    print("------------ Mengubah Nama File -----------")
    nama_file = input("Masukkan nama file yang akan diubah: ")
    try:
        nama_file_baru = input("Masukkan nama file baru: ")
        os.rename(nama_file, nama_file_baru)
        print("Nama file berhasil diubah")
    except FileNotFoundError:
        print("File tidak ditemukan")
    except FileExistsError:
        print("File baru sudah ada")
    input("Press enter to continue...")

#Membaca file
def read_file():
    print("------------ Membaca File -----------")
    nama_file = input("Masukkan nama file yang akan dibaca: ")
    try:
        with open(nama_file, "r") as file:
            isi_file = file.read()
            if isi_file == "":
                print("Isi file kosong")
            else:
                print(isi_file)
    except FileNotFoundError:
        print("File tidak ditemukan")
    input("Press enter to continue...")

#Menulis file
def write_file():
    print("------------ Menulis File -----------")
    print("Masukkan nama file yang akan ditulis: ", end="")
    nama_file = input()
    try:
        with open(nama_file, "r") as file:
            isi_file = file.read()
            print("Isi file:")
            print(isi_file)
    except FileNotFoundError:
        print("File tidak ditemukan. Membuat file baru...")
        with open(nama_file, "w") as file:
            file.write("")
    with open(nama_file, "a") as file:
        print("Masukkan teks yang akan ditulis: ", end="")
        teks = input()
        file.write("\n" + teks)
        print("\n-----Teks berhasil ditulis-----\n")
    with open(nama_file, "r") as file:
        isi_file = file.read()
        print("Isi file terbaru:")
        print(isi_file)
    input("Press enter to continue...")

#Menghapus isi file
def delete_file_content():
    print("------------ Menghapus Isi File -----------")
    print("Masukkan nama file yang akan dikosongkan: ", end="")
    nama_file = input()
    try:
        file = open(nama_file, "w")
        file.close()
        print("Isi file berhasil dikosongkan")
        input("Press enter to continue...")
    except:
        print("File tidak ditemukan")
        input("Press enter to continue...")

#Menghapus sebagian isi file
def delete_file_content_part():
    print("------------ Menghapus Sebagian Isi File -----------")
    print("Masukkan nama file yang akan dihapus sebagian isinya: ", end="")
    nama_file = input()
    try:
        with open(nama_file, "r") as file:
            isi_file = file.read()
            print("Isi file:")
            print(isi_file)
        with open(nama_file, "w") as file:
            print("Masukkan teks yang akan dihapus: ", end="")
            teks = input()
            file.write(isi_file.replace(teks, ""))
            print("Teks berhasil dihapus")
        with open(nama_file, "r") as file:
            isi_file = file.read()
            print("Isi file:")
            print(isi_file)
        input("Press enter to continue...")
    except:
        print("File tidak ditemukan")
        input("Press enter to continue...")

#Menjalankan file
def run_file():
    print("------------ Menjalankan File -----------")
    nama_file = input("Masukkan nama file yang akan dijalankan: ")
    try:
        os.startfile(nama_file)
    except FileNotFoundError:
        print("File tidak ditemukan")
    input("Press enter to continue...")

#Menjalankan file python
def run_python_file():
    print("------------ Menjalankan File Python -----------")
    nama_file = input("Masukkan nama file yang akan dijalankan: ")
    try:
        os.system("python " + nama_file)
    except FileNotFoundError:
        print("File tidak ditemukan")
    input("Press enter to continue...")

#Keluar
def exit():
    print("Terima kasih telah menggunakan program ini")
    input("Press enter to continue...")
    os.system("cls")

#Menu
def menu():
    print("===================== M E N U =====================")
    print("1. Mengecek direktori saat ini")
    print("2. Mengecek isi direktori saat ini")
    print("3. Membuat direktori (folder) baru")
    print("4. Menghapus direktori (folder) baru")
    print("5. Mengubah nama direktori (folder) baru")
    print("6. Membuat file baru")
    print("7. Menghapus file")
    print("8. Mengubah nama file")
    print("9. Membaca file")
    print("10. Mengisi/menulis file")
    print("11. Menghapus isi file")
    print("12. Menghapus sebagian isi file")
    print("13. Menjalankan file")
    print("14. Menjalankan file python")
    print("15. Keluar")
    print("Pilihan anda: ", end="") 

#Main
def main():
    while True:
        menu()
        try:
            pilihan = int(input())
            if pilihan == 1:
                current_directory()
            elif pilihan == 2:
                current_directory_content()
            elif pilihan == 3:
                create_directory()
            elif pilihan == 4:
                delete_directory()
            elif pilihan == 5:
                rename_directory()
            elif pilihan == 6:
                create_file()
            elif pilihan == 7:
                delete_file()
            elif pilihan == 8:
                rename_file()
            elif pilihan == 9:
                read_file()
            elif pilihan == 10:
                write_file()
            elif pilihan == 11:
                delete_file_content()
            elif pilihan == 12:
                delete_file_content_part()
            elif pilihan == 13:
                run_file()
            elif pilihan == 14:
                run_python_file()
            elif pilihan == 15:
                exit()
                break
            else:
                print("Pilihan tidak tersedia")
                input("Press enter to continue...")
        except:
            print("Inputan Harus Bernilai INTEGER!")
            input("Press enter to continue...")

        os.system("cls")

if __name__ == "__main__":
    main()