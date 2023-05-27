public class Car
{
    private int fuel;

    public Car(){ fuel = 0; }
    public Car (int g) {fuel = g;}

    public void addFuel() {fuel ++; }
    public void display() {System.out.println(fuel + " ");}
}

public class Sedan extends Car{
    public Sedan (int g) {super(2*g);}
}

