import java.util.*;
public class circumference {
    public static double circum(int radius){
        double ans=6.28*radius;
        return ans;
        

    }
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.println("enter radius");
        int radius=sc.nextInt();
        double re=circum(radius);
        System.out.println(re);



    }
    
}
