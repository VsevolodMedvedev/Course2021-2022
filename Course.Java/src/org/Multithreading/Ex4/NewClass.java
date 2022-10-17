package org.Multithreading.Ex4;


class Name {
    Thread name = new Thread();

    public synchronized void getName(){
        System.out.println(name.getName());
    }
}

public class NewClass extends Thread {
    Thread newName = new Thread();

    @Override
    public void run() {
        try {
            wait();

        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }

    }
}

class Main{
    public static void main(String[] args){
        NewClass myThread = new NewClass();
        myThread.start();
        NewClass myThread2 = new NewClass();
//        myThread2.notifyAll();
        myThread2.start();
    }
}