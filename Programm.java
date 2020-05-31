package task_1;

public class Programm {
    public static void main(String[] args) {
        float sredArr = 0;
        int min = 1000;
        int max = 0 ;
        int[] array = new int[10];
        for(int i=0;i< array.length;i++)
        {
            array[i] = (int)Math.round((Math.random()*50));
            System.out.println(array[i]);
        }
        for(int i=0;i< array.length;i++)
        {
            if(min > array[i])
            {
                min = array[i];
            }
        }
        System.out.println("Минимальное " + " " + min);
        for(int i=0;i< array.length;i++)
        {
            if(max < array[i])
            {
                max = array[i];
            }
        }
        System.out.println("Максимальное" + " " + max);
        for(int i=0;i< array.length;i++)
        {
            sredArr =  sredArr+array[i];
        }
        sredArr=sredArr/array.length;
        System.out.println("Среднее значение = " + " "+ sredArr);

}}
