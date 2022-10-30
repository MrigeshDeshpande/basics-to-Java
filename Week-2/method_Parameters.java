public class method_Parameters {

    // Create a checkAge() method with an integer parameter called age
    static void checkAge(int age) {
  
      // If age is less than 18, print "access denied"
      if (age < 18) {
        System.out.println("Access denied - You are not old enough!"); 
        
      // If age is greater than, or equal to, 18, print "access granted"
      } else {
        System.out.println("Access granted - You are old enough!"); 
      }
      
    } 
  
    public static void main(String[] args) { 
      checkAge(20); // Call the checkAge method and pass along an age of 20

    } 
  }
  