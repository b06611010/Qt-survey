#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    moviecount=1;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_confirm_clicked()
{
    if(ui->rd_boy->isChecked())
        ui->textBrowser->setText("A male.");
    if(ui->rd_girl->isChecked())
        ui->textBrowser->setText("A female.");
    if(ui->rd_7->isChecked())
        ui->textBrowser->append("7~18 years old.");
    if(ui->rd_19->isChecked())
        ui->textBrowser->append("19~30 years old.");
    if(ui->rd_31->isChecked())
        ui->textBrowser->append("31~40 years old.");
    if(ui->rd_41->isChecked())
        ui->textBrowser->append("41 years old or older.");

    if(ui->cb_Passenger->isChecked())
        moviecount=moviecount*2;
    if(ui->cb_Avengers->isChecked())
        moviecount=moviecount*3;
    if(ui->cb_Mission->isChecked())
        moviecount=moviecount*5;
    if(ui->cb_Pirates->isChecked())
        moviecount=moviecount*7;
    if(ui->rd_boy->isChecked())
    {
    if(moviecount==2)
        ui->textBrowser->append("He has seen 1 of the movies: Passenger.");
    if(moviecount==3)
        ui->textBrowser->append("He has seen 1 of the movies: Avengers:Endgame.");
    if(moviecount==5)
        ui->textBrowser->append("He has seen 1 of the movies: Mission Impossible: Fallout.");
    if(moviecount==7)
        ui->textBrowser->append("He has seen 1 of the movies: Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==6)
        ui->textBrowser->append("He has seen 2 of the movies: Passenger and Avengers:Endgame.");
    if(moviecount==10)
        ui->textBrowser->append("He has seen 2 of the movies: Passenger and Mission Impossible: Fallout.");
    if(moviecount==14)
        ui->textBrowser->append("He has seen 2 of the movies: Passenger and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==15)
        ui->textBrowser->append("He has seen 2 of the movies: Avengers:Endgame and Mission Impossible: Fallout.");
    if(moviecount==21)
        ui->textBrowser->append("He has seen 2 of the movies: Avengers:Endgame and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==35)
        ui->textBrowser->append("He has seen 2 of the movies: Mission Impossible: Fallout and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==30)
        ui->textBrowser->append("He has seen 3 of the movies: Passenger, Avengers:Endgame and Mission Impossible: Fallout .");
    if(moviecount==70)
        ui->textBrowser->append("He has seen 3 of the movies: Passenger, Avengers:Endgame and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==105)
        ui->textBrowser->append("He has seen 3 of the movies: Avengers:Endgame, Mission Impossible: Fallout and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==210)
        ui->textBrowser->append("He has seen all of the movies: Passenger, Avengers:Endgame, Mission Impossible: Fallout and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(ui->rd_Love->isChecked())
        ui->textBrowser->append("He likes love movie the most.");
    if(ui->rd_Science->isChecked())
        ui->textBrowser->append("He likes science-fiction movie the most.");
    if(ui->rd_Drama->isChecked())
        ui->textBrowser->append("He likes drama movie the most.");
    if(ui->rd_Suspense->isChecked())
        ui->textBrowser->append("He likes suspense movie the most.");
    if(ui->rd_Action->isChecked())
        ui->textBrowser->append("He likes action movie the most.");
    if(ui->rd_Fantasy->isChecked())
        ui->textBrowser->append("He likes fantasy movie the most.");

    }
    if(ui->rd_girl->isChecked())
    {
    if(moviecount==2)
        ui->textBrowser->append("She has seen 1 of the movies: Passenger.");
    if(moviecount==3)
        ui->textBrowser->append("She has seen 1 of the movies: Avengers:Endgame.");
    if(moviecount==5)
        ui->textBrowser->append("She has seen 1 of the movies: Mission Impossible: Fallout.");
    if(moviecount==7)
        ui->textBrowser->append("She has seen 1 of the movies: Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==6)
        ui->textBrowser->append("She has seen 2 of the movies: Passenger and Avengers:Endgame.");
    if(moviecount==10)
        ui->textBrowser->append("She has seen 2 of the movies: Passenger and Mission Impossible: Fallout.");
    if(moviecount==14)
        ui->textBrowser->append("She has seen 2 of the movies: Passenger and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==15)
        ui->textBrowser->append("She has seen 2 of the movies: Avengers:Endgame and Mission Impossible: Fallout.");
    if(moviecount==21)
        ui->textBrowser->append("She has seen 2 of the movies: Avengers:Endgame and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==35)
        ui->textBrowser->append("She has seen 2 of the movies: Mission Impossible: Fallout and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==30)
        ui->textBrowser->append("She has seen 3 of the movies: Passenger, Avengers:Endgame and Mission Impossible: Fallout .");
    if(moviecount==70)
        ui->textBrowser->append("She has seen 3 of the movies: Passenger, Avengers:Endgame and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==105)
        ui->textBrowser->append("She has seen 3 of the movies: Avengers:Endgame, Mission Impossible: Fallout and Pirates of the Caribbean:Dead Men Tell No Tales.");
    if(moviecount==210)
        ui->textBrowser->append("She has seen all of the movies: Passenger, Avengers:Endgame, Mission Impossible: Fallout and Pirates of the Caribbean:Dead Men Tell No Tales.");


    if(ui->rd_Love->isChecked())
        ui->textBrowser->append("She likes love movie the most.");
    if(ui->rd_Science->isChecked())
        ui->textBrowser->append("She likes science-fiction movie the most.");
    if(ui->rd_Drama->isChecked())
        ui->textBrowser->append("She likes drama movie the most.");
    if(ui->rd_Suspense->isChecked())
        ui->textBrowser->append("She likes suspense movie the most.");
    if(ui->rd_Action->isChecked())
        ui->textBrowser->append("She likes action movie the most.");
    if(ui->rd_Fantasy->isChecked())
        ui->textBrowser->append("She likes fantasy movie the most.");



    }



    ui->label_thanks->setText("Thank you for filling the questionnaire.");
    moviecount=1;
}
