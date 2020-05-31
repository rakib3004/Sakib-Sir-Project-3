package RealtimeApplicationTool;

import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.MenuItem;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;

import java.io.*;

import java.io.File;
import java.io.FileReader;

public class Counter extends Application {


    int positionLocator=85;
    int positionIndicator=660;
int positionLocatorY =200;
int countBox=0;
int positionLocatorX =200;
int activityCounter=0;



    @Override
    public void start(Stage primaryStage)  throws IOException{
        String FILENAME = "history.txt";
        File file = new File(FILENAME);
        FileReader fr = new FileReader(file);
        char[] arrayOfCharacter = new char[1200];
        fr.read(arrayOfCharacter);

        // reads the content to the array
        String history1="";
        String history2="";
        String history3="";
        String history4="";
        String history5="";

        int iterator;
        int charIndex=0;
        int wordIndex=0;

        for (iterator = 0; arrayOfCharacter[iterator] != '\n'; iterator++) {
            if (arrayOfCharacter[iterator] == '\t') {
                // iterator++;
                charIndex++;
                charIndex = charIndex % 5;
            }
            if (arrayOfCharacter[iterator] == '\n') {

                fr.close();

            }
            if (charIndex == 0) {

                history1 = history1 + arrayOfCharacter[iterator];
            } else if (charIndex == 1) {

                history2 = history2 + arrayOfCharacter[iterator];

            } else if (charIndex == 2) {
                history3 = history3 + arrayOfCharacter[iterator];


            } else if (charIndex == 3) {
                history4 = history4 + arrayOfCharacter[iterator];

            }
            else if(charIndex ==4){
                history5=history5+arrayOfCharacter[iterator];
            }
        }
        fr.close();


        history1 = history1.trim();
        history2 = history2.trim();
        history3 = history3.trim();
        history4 = history4.trim();
        history5 = history5.trim();

        int history1Count,history2Count,history3Count,history4Count,history5Count;

        history1Count = 0;
        history2Count = 0;
        history3Count = 0;
        history4Count = 0;
        history5Count = 0;

        history1Count = Integer.parseInt(history1);
        history2Count = Integer.parseInt(history2);
        history3Count = Integer.parseInt(history3);
        history4Count = Integer.parseInt(history4);
        history5Count = Integer.parseInt(history5);

        System.out.println(history1+"\t"+history2+"\t"+history3+"\t"+history4+"\t"+history5);
        TextField counterDisplay = new TextField("0");
        setStyle(counterDisplay);
        counterDisplay.setTranslateX(400+positionLocatorX);
        counterDisplay.setTranslateY(500- positionLocatorY);
        counterDisplay.setPrefSize(260,75);

        Text counterText = new Text("RK Counter");
        setStyle(counterText);
        counterText.setTranslateX(400+positionLocatorX+25);
        counterText.setTranslateY(500- positionLocatorY-50);



        Button button = new Button("+");
        setStyle(button);

        Font font = new Font("Arial",195);

        button.setFont(font);
        button.setTranslateX(540+positionLocatorX);
        button.setTranslateY(600- positionLocatorY);
        button.setOnAction(actionEvent -> {

            countBox++;
            counterDisplay.setText(Integer.toString(countBox));

        });


        button.setPrefSize(116, 80);




    }


    public Button setStyle(Button button) {
        button.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color: \n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #ffffff, #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-font-size: 2.1em;");
        return button;
    }

    public Button setStyle2(Button button) {
        button.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color: \n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #ffffff, #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-font-size: 1.3em;");
        return button;
    }

    public Text setStyle(Text text) {
        text.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color:\n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #ffffff, #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-font-size: 3.1em;");
        return text;
    }
    public Text setStyle2(Text text) {
        text.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color:\n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #ffffff, #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-font-size: 2.1em;");
        return text;
    }

    public Label setStyle(Label label) {
        label.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color:\n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #00ff00, #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-font-size: 1.1em;");
        return label;
    }

    public Label setStyle2(Label label) {
        label.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color:\n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #aaaaaa  , #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-font-size: 1.1em;");
        return label;
    }

    public TextField setStyle(TextField textField) {
        textField.setStyle("-fx-padding: 8 15 15 15;\n" +
                "    -fx-background-insets: 0,0 0 5 0, 0 0 6 0, 0 0 7 0;\n" +
                "    -fx-background-radius: 8;\n" +
                "    -fx-background-color: #C0C0C0\n" +
                "        linear-gradient(from 0% 93% to 0% 100%, #8d9092 0%, #717375 100%),\n" +
                "        #8d9092,\n" +
                "        #717375,\n" +
                "        radial-gradient(center 50% 50%, radius 100%, #ffffff, #a1a3a6);\n" +
                "    -fx-effect: dropshadow( gaussian , rgba(0,0,0,0.75) , 4,0,0,1 );\n" +
                "    -fx-font-weight: bold;\n" +
                "    -fx-text-align: center;\n" +
                "    -fx-font-size: 2.1em;");
        return textField;
    }
}
