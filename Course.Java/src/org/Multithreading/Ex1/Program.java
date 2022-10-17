package org.Multithreading.Ex1;

class MyThread extends Thread
{
    @Override
    public void run()
    {
        System.out.println((int)(Math.random()*100)+(int)(Math.random()*2));
    }
}

public class Program
{
    static MyThread myThread;

    public static void main(String[] args)
    {
       // System.out.println("Главный поток запущен...");
        for(int i = 1; i < 11; i++){
            myThread = new MyThread();
            myThread.start();			//Запуск потока
        }
      //  System.out.println("Главный поток завершён...");
    }
}
