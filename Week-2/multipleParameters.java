public class multipleParameters 
{
    static void myMethod(String fname, int age)
     {
        System.out.println(fname + " is " + age);

    }

    public static void main(String[] args) {
        myMethod("Rahul", 5);
        myMethod("Reena", 8);
        myMethod("Anshul", 31);
    }
}