package RealtimeApplicationTool;


import javafx.application.Application;
import javafx.scene.Group;
import javafx.scene.Scene;
import javafx.scene.canvas.Canvas;
import javafx.scene.canvas.GraphicsContext;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.stage.Stage;


public class UserInterface extends Application {

    @Override
    public void start(Stage primaryStage) {

        Button counter = new Button("Counter");
        Button stopwatch = new Button("Stopwatch");
        Button clock = new Button("Clock");


        counter.setTranslateX(540);
        counter.setTranslateY(200);
        stopwatch.setTranslateX(540);
        stopwatch.setTranslateY(300);
        clock.setTranslateX(540);
        clock.setTranslateY(400);




        counter.setOnAction(actionEvent -> {

            Counter counter1 = new Counter();
            try {

                counter1.start(primaryStage);
            } catch (Exception exception) {
                exception.printStackTrace();
            }

        });
        stopwatch.setOnAction(actionEvent -> {

        });


        clock.setOnAction(actionEvent -> {


        });



        setStyle(counter);
        setStyle(stopwatch);
        setStyle(clock);


        counter.setPrefSize(220, 80);
        stopwatch.setPrefSize(220, 80);
        clock.setPrefSize(220, 80);


        Button back = new Button("Back");
        Button exit = new Button("Exit");
        back.setTranslateX(0);
        back.setTranslateY(650);
        exit.setTranslateX(1100);
        exit.setTranslateY(650);
        back.setOnAction(actionEvent -> {

        });
        exit.setOnAction(actionEvent -> {
            System.exit(0);


        });

        setStyle(exit);
        setStyle(back);

        back.setPrefSize(200, 80);
        exit.setPrefSize(200, 80);



        Image image = new Image("libraryBackground2.jpg");
        Canvas canvas = new Canvas(1400,800);
        Group group = new Group();
        group.getChildren().addAll(canvas,counter,clock,
                stopwatch,exit,back);

        GraphicsContext graphicsContext = canvas.getGraphicsContext2D();
        graphicsContext.drawImage(image,0,0);



        Scene scene1 = new Scene(group,1400,800);


        primaryStage.setScene(scene1);
        primaryStage.setTitle("Books Statistics");
        primaryStage.setFullScreen(true);
        primaryStage.show();


    }

    public Button setStyle( Button button)
    {
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
        return  button;
    }
}
