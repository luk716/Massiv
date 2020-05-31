package task_4;

import java.util.Scanner;

public class Programm_4 {
    public static void main(String[] args) {


        System.out.println("Введите слово на А");
        Scanner src = new Scanner(System.in);
        String str = src.nextLine();
        boolean Correct = false;
        do {


            char c = str.charAt(0);
            if(c == 'A'){
                System.out.println("Вы ввели слово на буквку А,спасибо");
                Correct = true;
            }else {
                System.out.println("Вы ввели не то слово,повторите ещё раз");
                Correct = false;
            }
        }while( Correct == true);




    }
}
