public class Food {
    public String getFood() {
        return "Pizza";
    }
    public String getInfo() {
        return this.getFood();
    }
}

public class TradFood extends Food {
    public String getFood() {
        return "Barongko";
    }
}