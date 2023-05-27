public class Sedan{
    public static void main(String[] args) {
        Car car = new Car(5);
        Car fastCar = new Sedan(5);
        car.display();
        car.addFuel();
        car.display();
        fastCar.display();
        fastCar.addFuel();
        fastCar.display();
    }
}

