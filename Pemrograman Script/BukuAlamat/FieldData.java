package BukuAlamat;

public class FieldData { 
    private String nama, alamat, kontak, email; 

    public FieldData(String nama, String alamat, String kontak, String email) { 
        this.nama = nama; 
        this.alamat = alamat; 
        this.kontak = kontak; 
        this.email = email; 
    }
    //getter
    public String getNama() { 
        return nama; 
    }
    //setter
    public void setNama(String nama) { 
        this.nama = nama; 
    }
    //getter
    public String getAlamat() { 
        return alamat; 
    }
    //setter
    public void setAlamat(String alamat) { 
        this.alamat = alamat; 
    }
    //getter
    public String getKontak() { 
        return kontak; 
    }
    //setter
    public void setKontak(String kontak) { 
        this.kontak = kontak; 
    }
    //getter
    public String getEmail() { 
        return email; 
    }
}



