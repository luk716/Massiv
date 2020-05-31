package task_2;

import java.util.Scanner;

public class Program {
    public static void main(String[] args) {
        Scanner src = new Scanner(System.in);
        System.out.println("Введите число n :");
        int n = src.nextInt();
        System.out.println("Введите число m :");
        int m = src.nextInt();
        int[][] array = new int[n][m];
        for(int i = 0 ; i < n;i++)
        {
            for(int j = 0 ; j< m ;j++)
            {
                array[i][j]=(int)Math.round((Math.random()*50));
                if(array[i][j]%2==0)
                {
                    array[i][j]= array[i][j]+1;
                }
            }
        }
        for(int i = 0 ; i < n;i++)
        {
            System.out.println("  ");
            for(int j = 0 ; j< m ;j++)
            {
                System.out.print("   "+ array[i][j]+ "  ");
            }
        }
    }
}
