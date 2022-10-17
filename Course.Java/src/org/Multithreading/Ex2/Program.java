package org.Multithreading.Ex2;

class MySecThread extends Thread
{

    @Override
    public void run()
    {
//        for(int i = 0; i < 1; i++) {
            System.out.println("Состояние потока во время запуска: " + Thread.currentThread().getState());
//        }
    }
}

    public class Program {

        static MySecThread myThread;
        public static void main(String[] args) throws InterruptedException {
            myThread = new MySecThread();	//Создание потока

            System.out.println("Состояние потока до запуска: " + myThread.getState());
            myThread.start();
            myThread.join();
//            Thread.sleep(1000);
            System.out.println("Состояние потока после завершения: " + myThread.getState());
        }
    }


