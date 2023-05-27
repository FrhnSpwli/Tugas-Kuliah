public class ClassB extends ClassA {
    public ClassB(int x, int x2, int y) {
        super(x);
        x = x2;
        this.y = y;
    } private ClassB(int x, int y) {
        super(x);
        this.x = x;
        this.y = y;
    }

    private int x;

    private int y;

    public static void main(String[]args) {
        ClassA qa = new ClassA(10);

        ClassB qb = new ClassB(20, 10);

        qa = qb;
        System.out.println(qa.x + " " + qb.y);
    }
}
