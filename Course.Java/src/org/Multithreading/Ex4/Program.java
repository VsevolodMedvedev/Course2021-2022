package org.Multithreading.Ex4;

class MyThread extends Thread{

    @Override
    public void run()
    {

        while(1 > 0){
            if (Thread.currentThread().getState().equals("WAITING")){
                Thread.currentThread().notify();
                System.out.println(Thread.currentThread().getName());
                try {
                    Thread.currentThread().wait();
                } catch (InterruptedException e) {}
            }else{
                System.out.println(Thread.currentThread().getName());
                try {
                    wait();
                } catch (InterruptedException e) {}
            }
        }
    }
}

public class Program {

    static MyThread myThread1;
    static MyThread myThread2;
    public static void main(String[] args) throws InterruptedException {
        myThread1 = new MyThread();	//Создание потока
        myThread2 = new MyThread();
        myThread1.start();
        myThread2.start();

    }
}