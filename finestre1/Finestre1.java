/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package finestre1;

import java.util.Scanner;

/**
 *
 * @author studente
 */
public class Finestre1 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Finestra f;
        int n, x;
        int p1=0, p2=0;
        Scanner input=new Scanner(System.in);
        System.out.println("Quante finestre vuoi stampare? ");
        n=input.nextInt();
        for(x=0;x<n;x++) {
        f=new Finestra();
        f.setVisible(true);
        f.Testo.setText("Sono la finestra 1");
        f.setLocation(100,100);
    }
    
}

}