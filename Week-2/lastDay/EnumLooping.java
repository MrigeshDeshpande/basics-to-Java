package lastDay;

    
enum Level {
    LOW,
    MEDIUM,
    HIGH
  }
  
  public class EnumLooping {
    public static void main(String[] args) { 
      for (Level myVar : Level.values()) {
        System.out.println(myVar);
      }
    } 
  }
  