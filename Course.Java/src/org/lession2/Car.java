package org.lession2;

public class Car {
    private String brand;
    private String model;
    private Colour color;
    private int doorsCount;
    private int seatPlace;
    private double engineCapacity;
    private boolean isNew;
    private long price;

    public Car(String brand, Colour color, boolean isNew) {
        this.brand = brand;
        this.color = color;
        this.isNew = isNew;
    }

    @Override
    public String toString() {
        return "Car{" +
                "brand='" + brand + '\'' +
                ", model='" + model + '\'' +
                ", color=" + color +
                ", doorsCount=" + doorsCount +
                ", seatPlace=" + seatPlace +
                ", engineCapacity=" + engineCapacity +
                ", isNew=" + isNew +
                ", price=" + price +
                '}';
    }

    public Car () {

    }

    public String getBrand() {
        return brand;
    }

    public void setBrand(String brand) {
        this.brand = brand;
    }

    public String getModel() {
        return model;
    }

    public void setModel(String model) {
        this.model = model;
    }

    public Colour getColor() {
        return color;
    }

    public void setColor(Colour color) {
        this.color = color;
    }

    public int getDoorsCount() {
        return doorsCount;
    }

    public void setDoorsCount(int doorsCount) {
        this.doorsCount = doorsCount;
    }

    public int getSeatPlace() {
        return seatPlace;
    }

    public void setSeatPlace(int seatPlace) {
        this.seatPlace = seatPlace;
    }

    public double getEngineCapacity() {
        return engineCapacity;
    }

    public void setEngineCapacity(double engineCapacity) {
        this.engineCapacity = engineCapacity;
    }

    public boolean isNew() {
        return isNew;
    }

    public void setNew(boolean aNew) {
        isNew = aNew;
    }

    public long getPrice() {
        return price;
    }

    public void setPrice(long price) {
        this.price = price;
    }

    // метод с возвращаемым значением
    // метод void ничего не возвращает

   public void calculate(Car car, int discount) {
        car.setPrice(car.getPrice() - discount);
   }

   public String carInfo () {
        String s;
        int x;

        if (true) {
            x = 10;
            s = "str1";
        } else {
            x = 20;
            s = "str2";
        }

        return "info";
   }

}
