public class Kurang {
    int a = 10;
    int setKurang(int a);
}

class Decrement implements Kurang{
    public int setKurang(int a){
        return a--;
    }
}

class PostTest{
    public static void main(String[] args){
        Decrement d = new Decrement();
        d.setKurang(d.a);
        System.out.println(d.a);
    }
}

// Output: 10
