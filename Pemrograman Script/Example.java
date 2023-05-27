public class Example {
  
    public static void main(String[] args) {
        Student mhs = new Student();
        // mhs.name = "Rizky";
        // System.out.println(mhs.name);

        mhs.setName("Rizky");
        System.out.println(mhs.getName());

        mhs.setNim(123456);
        System.out.println(mhs.getNim());

        mhs.setEmail("rizky@gmail.com");
        System.out.println(mhs.getEmail());

        

        // System.out.println("Input nilai a: ");
        // Scanner keyboard = new Scanner(System.in);
        // int a = keyboard.nextInt();

        // System.out.println("Input nilai b: ");
        // int b = keyboard.nextInt();

        // System.out.println("Input nilai c: ");
        // int c = keyboard.nextInt();

        // keyboard.close();

        // System.out.println();
        // avg(a, b, c);
        // max(a, b, c);
    }

    public static void avg (int a, int b, int c){
        int sum = a + b + c;
        double avg = sum/3;
        System.out.println("Rata-rata : "+avg);
    }

    public static void max (int a, int b, int c){
        if (a > b && a > c){
            System.out.println("Nilai tertinggi : "+a);
        } else if (b > a && b > c){
            System.out.println("Nilai tertinggi : "+b);
        } else {
            System.out.println("Nilai tertinggi : "+c);
        }
    }
}
