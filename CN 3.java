import java.io.*;
import java.lang.String;

public class Xor4{
    public static void main(String args[]) {
        String Msg = "CN-PRACTICAL";
        char Key='$';
        String CTxt="";
        String DTxt="";
        int xor,xor1;
        char temp,temp1;
        
        // Encryption
        for(int i=0;i<Msg.length();i++ ) {
            xor=Msg.charAt(i) ^ Key;
            temp =(char)xor ; 
            CTxt=CTxt + temp;
        }
        
        // Output
        System.out.println("Encryption and Decryption using XOR Cryptogrpahy"); 
        System.out.println("Original Message is:" + Msg); 
        System.out.println("Encrypted Message is:" + CTxt); 
        
        // Decryption
        for(int i=0;i<CTxt.length();i++) {
            xor1=CTxt.charAt(i) ^ Key;
            temp1 =(char) xor1;
            DTxt=DTxt+ temp1;
        }
        
        // Output
        System.out.println("Decrypted Message is:" + DTxt); 
    } 
}
