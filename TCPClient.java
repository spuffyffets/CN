import java.io.*;
import java.net.*;

class TCPClient {
    public static void main(String a[]) throws Exception {
        Socket cp = new Socket("localhost", 1222);
        System.out.println("Client connected: " + cp);

        String s1;
        BufferedReader abc = new BufferedReader(new InputStreamReader(cp.getInputStream()));
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(cp.getOutputStream())), true);

        while (true) {
            System.out.println("Enter the string to send to server");
            s1 = in.readLine();
            out.println(s1);
            String str = abc.readLine();
            System.out.println("From server: " + str);
            if (str.equals("END"))
                break;
        }

        System.out.println("Closing client");
        cp.close();
    }
}
