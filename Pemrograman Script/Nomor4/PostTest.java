abstract class Tumbuhan{
    void berbunga(){
        System.out.println("Tumbuhan berbunga");
    }
    abstract void fotosintesis();
}

class Lumut extends Tumbuhan{
    void fotosintesis(){
        System.out.println("Berfotosintesis");
    }
}

public class PostTest {
    public static void main(String[] args) {
        Tumbuhan lumut = new Lumut();
        lumut.fotosintesis();
    }
}