package org.lession3;

public class StaticExample {
    public static final String STATIC_CONSTANT = "some constant";
    private static String staticString;
    private String nonStaticString;

    static {
        System.out.println("==================");
        System.out.println("static block start");
        staticString = "staticString";
        System.out.println("static block end");
        System.out.println("==================");
    }

    {
        System.out.println("==================");
        System.out.println("non-static block start");
        staticString = "nonStaticString";
        System.out.println("non-static block end");
        System.out.println("==================");
    }

    public static void printStaticVar() {
        System.out.println(staticString + "in a static method");
        //printNonStaticVar(); нельз\ вызвать нестатич метод в статическом

        StaticExample example = new StaticExample();
        example.printNonStaticVar();
    }

    public void printNonStaticVar() {
        System.out.println(staticString + "in a static method");
        printStaticVar(); //курсив означает статический метод
        staticString = "123";
    }

    public static void main(String[] args) {

    }

}

