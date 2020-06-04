package RealtimeApplicationTool;

import javafx.animation.KeyFrame;
import javafx.animation.PathTransition;
import javafx.animation.Timeline;
import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.paint.Color;
import javafx.scene.text.Font;
import javafx.scene.text.Text;
import javafx.stage.Stage;
import javafx.util.Duration;

import java.io.FileWriter;
import java.io.IOException;

public class Stopwatch extends Application {

    int numberOfBooks;
    int typeCounter=6,writerCounter=350, yearCounter =12;
    int typePalse,writerPalse,yearPalse;
    int timeSec = 1;
    int bookCounter=0;

    int positionLocator=85;
    int positionIndicator=660;
    int positionLocatorY =200;
    int countBox=0;
    int positionLocatorX =200;
    int activityCounter=0;
    Text text = new Text();


    int miliSecondCounter=0;
    int secondCounter=0;
    int minitueCounter=0;
    int hourCounter=0;
    int iterator;

    public  void stopWatchStrating(){

        Thread thread  = new Thread(){

        };

        miliSecondCounter++;

        if (miliSecondCounter==100){
            secondCounter++;
            miliSecondCounter=0;
        }   if (secondCounter==60){
            minitueCounter++;
            secondCounter=0;
        }   if (minitueCounter==60){
            hourCounter++;
            minitueCounter=0;
        }   if (hourCounter==3){
         System.exit(0);
        }
        text.setText(hourCounter+" Hours : "+minitueCounter+" Minitues : "+secondCounter+" Seconds");

    }

    Timeline time = new Timeline();

    @Override
    public void start(Stage primaryStage) {
        Button back = new Button("Back");
        Button exit = new Button("Exit");
        back.setTranslateX(0);
        back.setTranslateY(650);
        exit.setTranslateX(1100);
        exit.setTranslateY(650);



        back.setOnAction(actionEvent -> {
            UserInterface userInterface = new UserInterface();
            userInterface.start(primaryStage);
        });
        exit.setOnAction(actionEvent -> {
                        System.exit(0);

        });

        setStyle(back);
        setStyle(exit);

        back.setPrefSize(200, 80);
        exit.setPrefSize(200, 80);

        Text counterText = new Text("RK Stopwatch");
        setStyle(counterText);
        counterText.setTranslateX(400+positionLocatorX+25);
        counterText.setTranslateY(500- positionLocatorY-50);

setStyle(text);
text.setText(hourCounter+" Hours : "+minitueCounter+" Minitues : "+secondCounter+" Seconds");
        text.setTranslateX(400+positionLocatorX);
        text.setTranslateY(500- positionLocatorY);

        Button start = new Button("Start");
        setStyle(start);

        Font font = new Font("Arial",195);

        start.setFont(font);
        start.setTranslateX(540+positionLocatorX);
        start.setTranslateY(600- positionLocatorY);
        start.setOnAction(actionEvent -> {

for(iterator=10;iterator>=8;iterator++){
    stopWatchStrating();
}
        });


        start.setPrefSize(116, 80);


        Button reset = new Button("Reset");


        reset.setTranslateX(400+positionLocatorX);
        reset.setTranslateY(600- positionLocatorY);

        reset.setOnAction(actionEvent -> {

            System.exit(0);

        });


        reset.setPrefSize(116, 80);
        setStyle(reset);


        PathTransition pt = new PathTransition();
        pt.setDuration(Duration.seconds(6));
        // pt.setNode(ball);
//        pt.setOrientation(PathTransition.OrientationType.ORTHOGONAL_TO_TANGENT);
        pt.setCycleCount(1);
        pt.setAutoReverse(false);
        pt.play();



        time = new Timeline();
        time.setCycleCount(6);
        time.setAutoReverse(false);
        time.getKeyFrames().add(
                new KeyFrame(Duration.seconds(2),
                        event -> {
                            timeSec++;

                            if(timeSec%4==1){

                            }
                            else  if(timeSec%4==2){


                            }  else  if(timeSec%4==3){

                            }   else  if(timeSec%4==0){


                            }
                        })
        );

        time.play();

        Image image = new Image("libraryBackground20.jpg");
        Canvas canvas = new Canvas(1500,950);
        Group group = new Group();
        group.getChildren().addAll(canvas,exit,back,reset,start,text);
        GraphicsContext graphicsContext = canvas.getGraphicsContext2D();
        graphicsContext.drawImage(image,0,0);


        Scene scene1 = new Scene(group,1500,950);


        primaryStage.setScene(scene1);
        primaryStage.setTitle("Books Statistics");
        primaryStage.setFullScreen(true);
        primaryStage.show();
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
