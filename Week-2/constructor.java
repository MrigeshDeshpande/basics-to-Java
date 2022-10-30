// Create a Main class
public class constructor {
    int x;
  
    // Create a class constructor for the Main class
    public constructor() {
      x = 5;
    }
  
    public static void main(String[] args) {
        constructor myObj = new constructor();
         System.out.println(myObj.x);
    }
  }
  