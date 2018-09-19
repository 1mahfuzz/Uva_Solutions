import java.util.Scanner;
/*
    Date: 18/9/18
    Author: mahfuz
*/

class uva_11172 {

    static Scanner usrInp = null;

    public static void main(String[] args) {

        Scanner usrInp = new Scanner(System.in);

        //Main Code
        int n;
        int a, b;
        String rel = "";

        n = usrInp.nextInt();

        for (int i = 0; i < n; i++) {
            a = usrInp.nextInt();
            b = usrInp.nextInt();

            if (a > b){
                rel += ">\n";
            }else if (a < b){
                rel += "<\n";
            }else {
                rel += "=\n";
            }
        }
        System.out.print(rel);
    }
}