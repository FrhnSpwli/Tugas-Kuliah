public class Base {
    public void methodOne() {
        System.out.println("A");
        methodTwo();
    }

    public void methodTwo() {
        System.out.println("B");
    }
}

public class Derived extends Base {
    public void methodOne() {
        super.methodOne();
        System.out.println("C");
    }
    
    public void methodTwo() {
        super.methodTwo();
        System.out.println("D");
    }
}