//Section 7, Lesson 4 Starter for Exercise 2 - Slide 14
public class Prisoner_Student_7_4 {
    //Fields 
    public String name;
    public double height;
    public int sentence;
    
    //Constructor
    public Prisoner_Student_7_4(String name, double height, int sentence){
 	this.name = name;
 	this.height = height;
 	this.sentence = sentence;
    }

    //Constuctor dengan zero parameter
    public Prisoner_Student_7_4 (){
        this(null, 0.0, 0);
    }

    //Methods
    public void think(){
        System.out.println("I'll have my revenge.");
    }     

    public void print(){
        System.out.println("Name: " + name);
        System.out.println("Height: " + height);
        System.out.println("Sentence: " + sentence);
    }

    public void print (boolean a){
        if (a == true){
            think();
        }
        else{
            print();
        }
    }
}
