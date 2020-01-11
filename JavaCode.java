package BasicJava;

import java.io.*;

public class JavaCode {
    public static void main(String[] args) throws IOException {

        FileInputStream in = null;
        FileOutputStream out = null;
        try {
            in = new FileInputStream("C:\\Users\\Rakib\\Desktop\\input.txt");
            out = new FileOutputStream("C:\\Users\\Rakib\\Desktop\\output.txt");

            int c;
            while ((c = in.read()) != -1) {
                out.write(c);

            }
        }
            finally{
                if(in!=null){
                    in.close();
                }if(out!=null){
                    out.close();
                }
            }
        }
    }


