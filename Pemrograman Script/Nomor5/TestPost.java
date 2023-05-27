interface Bunga{
    void warna();
}

class Melati implements Bunga{
    void warna(){
        System.out.println("Warna putih");
    }
}

class PostTest {
    public static void main(String[] args) {
        Melati melati = new Melati();
        melati.warna();
    }
}


