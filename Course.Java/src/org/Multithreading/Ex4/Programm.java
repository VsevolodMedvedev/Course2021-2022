package org.Multithreading.Ex4;

class CountThread implements Runnable{

    CommonResource res;
    CountThread(CommonResource res){
        this.res=res;
    }
    public void run(){
        synchronized(res){
            while(res.x<100){
                System.out.printf("%s \n", Thread.currentThread().getName());
                try{
                    wait();
                    Thread.sleep(1);
                }
                catch(InterruptedException e){}
            }
            notify();
        }
    }
}
public class Programm {

    public static void main(String[] args) {

        CommonResource commonResource= new CommonResource();
        for (int i = 1; i < 3; i++){
            Thread t = new Thread(new CountThread(commonResource));
            t.setName("Thread "+ i);
            t.start();
        }
    }
}

class CommonResource{

    int x=0;
}