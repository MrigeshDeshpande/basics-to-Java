public class objects {
    int x = 5;
  
    public static void main(String[] args)
     {
        objects myObj1 = new objects();
        objects myObj2 = new objects();
        myObj1.x = 25;

        System.out.println(myObj1.x);
        System.out.println(myObj2.x);
    }
  }
  