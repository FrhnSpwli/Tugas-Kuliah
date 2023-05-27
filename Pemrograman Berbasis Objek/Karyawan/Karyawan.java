public class Karyawan {
    
}

public interface Karyawan {
        void setJabatan (String jabatan)
    }
    
public class KaryawanMagang implements Karyawan{
    private Stirng jabatan;
}

public void setJabatan (String jabatan){
    this.jabatan = jabatan;
}

public String getJabatan(){
    return jabatan;
}