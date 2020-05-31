package task_7;

public class Programm_Seven2 {
    private int []mas;
    public  Programm_Seven2(int n){

        mas = new int[n+1];
        for(int i=1;i < n+1;i++)
        {

            mas[i] = i;

        }
    }
    public void print(int n){
        if(n == 1 )return;
        System.out.print(mas[n-1] + " ");
        print(n-1);
    }
}
