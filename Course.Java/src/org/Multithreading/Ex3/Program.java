package org.Multithreading.Ex3;

class Counter {
    int count = 0;

    public synchronized void increment() {
        count = count + 1;
    }
    public int getCount() {
        return count;
    }
}

class MyThread extends Thread
    {
        public int threadCount;

        @Override
        public synchronized void run(){
            Counter count = new Counter();
            for(int k = 0; k < 1000; k++){
                count.increment();
            }
            threadCount = count.getCount();
        }
    }

    public class Program {
        static MyThread myThread;

        public static void main(String[] args) throws InterruptedException {
            int thisCount = 0;
            for (int i = 0; i < 100; i++) {
                myThread = new MyThread();
                myThread.start();
//                Thread.sleep(25);// при добавлении времени замирания процессор успевает посчитать все потоки
                thisCount = thisCount + myThread.threadCount;
            }
            System.out.println(thisCount);
        }
    }
