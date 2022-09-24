import java.util.*;
public class Assign1 {
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter No of students");
        int n=sc.nextInt();
        int marks[]=new int[n];

        for(int i=0;i<n;i++){
            System.out.println("enter marks of student(enter -1 if absent):- ");
            marks[i]=sc.nextInt();

        }
        int sum=0;
        float average;
        int absent=0;
        for(int j=0;j<n;j++)
        {
            if(j!=-1){
                sum=sum+marks[j];
            }
            else{
                absent++;
            }
        }
        average=sum/n;

        System.out.println("the average score of student is  " +average);
        

    

    }
    
}
