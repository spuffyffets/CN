import java.io.*;
import java.net.*;

class TCPServer {
    public static final int PORT = 1222;
    
    public static void main(String a[]) throws Exception {
        ServerSocket s = new ServerSocket(PORT);
        System.out.println("Server Started");

        Socket c = s.accept();
        System.out.println("Connection accepted: " + c);

        BufferedReader in = new BufferedReader(new InputStreamReader(c.getInputStream()));
        PrintWriter out = new PrintWriter(new BufferedWriter(new OutputStreamWriter(c.getOutputStream())), true);

        String send;
        while (true) {
            String str = in.readLine();
            send = ("Echo: " + str);
            out.println(send);
            System.out.println("Echoing: " + str);
            if (str.equals("END"))
                break;
        }

        System.out.println("Closing server");
        c.close();
        s.close();
    }

    public static int getPort() {
        return PORT;
    }
}
