import java.util.*;
public class darrays {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        
        int rows=sc.nextInt();
        int column=sc.nextInt();
        int[][]number=new int[rows][column];
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){
                 number[i][j]=sc.nextInt();
            }
        }
        int x=sc.nextInt();
        for(int i=0;i<rows;i++){
            for(int j=0;j<column;j++){
                if(number[i][j] == x){
                    System.out.println("x found at location"+i+j);

                }
            }
        }
        
    }
    
}
