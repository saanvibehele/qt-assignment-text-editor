#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QApplication>
#include <QInputDialog>
#include <QTextCursor>
#include <QTextCharFormat>




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->statusbar->addWidget();
    this->setWindowTitle("/home/saanvi/code/qt/txt_files/Untitled Document.txt");
    QString styleSheet = "QMenuBar::item { color: purple;}";
    ui->menubar->setStyleSheet(styleSheet);

}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_open_clicked()
{
    QString file_name = QFileDialog::getOpenFileName(this,"open file", "/home/saanvi/code/qt/txt_files/");
    this->setWindowTitle(file_name);
    QFile file(file_name);


    if(!file.open(QFile::ReadWrite | QFile::Text)){
        QMessageBox::warning(this,"error","file not open");
    }

    QTextStream in(&file);
    QString str = in.readAll();
    ui->textEdit_area->setText(str);
    file.close();

}


void MainWindow::on_pushButton_save_clicked()
{

//this commented code is obtained from google references, but I implemented my own logic
//    QFileDialog dialog;
//    dialog.setFileMode(QFileDialog::AnyFile);
//    dialog.setAcceptMode(QFileDialog::AcceptSave);

//    QStringList fileNames;
//    if (dialog.exec())
//        fileNames = dialog.selectedFiles();

//    if (!fileNames.isEmpty())
//    {
//        QString fileName = fileNames.first();
//        QFile file(fileName);
//        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
//        {
//            QString content = ui->textEdit_area->toPlainText();
//            QTextStream stream(&file);
//            stream << content;
//            file.close();
//        }


    QString file_name;
    file_name = this->windowTitle();
    QFile file(file_name);

    if(!file.exists() || file_name=="/home/saanvi/code/qt/txt_files/Untitled Document.txt"){
        file_name = QInputDialog::getText(this,"save as","file_name: ");
    }


    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"error","file not open");
    }
    else{
        QString str = ui->textEdit_area->toPlainText();

        QTextStream out(&file);
        out<<"";
        out<<str;
    }

    if (!file_name.isEmpty() && !file_name.isNull()){
        file.rename("/home/saanvi/code/qt/txt_files/" + file_name);
        if (this->windowTitle() == "/home/saanvi/code/qt/txt_files/Untitled Document.txt")
            this->setWindowTitle("/home/saanvi/code/qt/txt_files/" + file_name);
    }
    else{
        file_name = "Untitled Document.txt";
    }

    file.close();

    //QApplication::quit();

}


void MainWindow::on_actionNew_Window_triggered()
{
    this->setWindowTitle("/home/saanvi/code/qt/txt_files/Untitled Document.txt");
    ui->textEdit_area->setText("");
}


void MainWindow::on_actionsave_as_triggered()
{

    // here, my own code for save as keeps the previous saved text file copy as well as the newly edited file :)
    QFile *file;
    QString file_name;
    file_name = QInputDialog::getText(this,"save as","file_name: ");
    if(!file_name.isEmpty() && !file_name.isNull()) {
        file = new QFile("/home/saanvi/code/qt/txt_files/" + file_name);
        this->setWindowTitle("/home/saanvi/code/qt/txt_files/" + file_name);
    }
    else {
        file = new QFile("/home/saanvi/code/qt/txt_files/Untitled Document.txt");
    }

    if(!file->open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"error","file not open");
    }
    else{
        QString str = ui->textEdit_area->toPlainText();

        QTextStream out(file);
        out<<"";
        out<<str;
    }
    file->close();
}




void MainWindow::on_actionsuper_script_triggered()
{
    QTextCursor cursor = ui->textEdit_area->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    cursor.mergeCharFormat(format);
    ui->textEdit_area->setTextCursor(cursor);
}


void MainWindow::on_actionremove_super_subscript_triggered()
{
    QTextCursor cursor = ui->textEdit_area->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setVerticalAlignment(QTextCharFormat::AlignNormal);
    cursor.mergeCharFormat(format);
    ui->textEdit_area->setTextCursor(cursor);
}


void MainWindow::on_actionsub_script_triggered()
{
    QTextCursor cursor = ui->textEdit_area->textCursor();
    QTextCharFormat format = cursor.charFormat();
    format.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    cursor.mergeCharFormat(format);
    ui->textEdit_area->setTextCursor(cursor);
}


void MainWindow::on_pushButton_resume_clicked()
{
    QString str;
    str += "<html><b>SAANVI BEHELE</b><br><br><b><u>About</u></b> <br>A enthusiastic girl, positive thinker with a lot of ideas and WILL. Committed to innovation, with a strong passion for leveraging technology-driven approaches to solve complex problems. I grab every opportunity to learn something from everything. <br><br> <b><u>Education</u></b><br>SY, BTech in AI & DS in MIT University, Pune<br><br></html>";
    str += "<html><b><u>LinkedIn: </u></b><a href='https://www.linkedin.com/in/saanvi-behele-593a09229/'> https://www.linkedin.com/in/saanvi-behele-593a09229/</a> <br> <br> <b><u>Github: </u></b><a href='https://github.com/saanvibehele'>  https://github.com/saanvibehele</a> <br> <br><b><u>Skills</u></b><ul><li>Python for AI, ML and DS</li><li>Machine learning, Deep learning</li><li>Languages: C , C++ , JAVA, MySQL</li><li>Tools: QT Creator</li><li>and more...</li></ul></html>";
    str += "<html><b><u>Experience/Projects</u></b><ul><li>Intern at INFOSYS Springboard</li>building a GAN neural network<li>Topic Modeling using Latent Ditichlet Allocation Algorithm on Twitter dataset</li><li>Sentiment Analysis of Hinglish Data</li></ul></html>";
    str += "<html><b><u>Achievements</u></b><ul><li>CGPA: 9.92</li><li>Head Girl and Topper in School</li><li>Black Belt in Karate</li></ul></html>";
    QFont timesNewRomanFont("Times New Roman");

    QMessageBox q;
    q.setFont(timesNewRomanFont);
    q.information(this,"Saanvi Behele's Resume",str);
}


void MainWindow::on_actiongo_to_line_triggered()
{
    QString line = QInputDialog::getText(this,"choose line number","enter number: ");
    int lineNumber = line.toInt();

    QTextCursor cursor = ui->textEdit_area->textCursor();
    cursor.movePosition(QTextCursor::Start);
    cursor.movePosition(QTextCursor::Down, QTextCursor::MoveAnchor, lineNumber - 1);

    ui->textEdit_area->setTextCursor(cursor);
}




void MainWindow::on_actionhelp_triggered()
{
    QMessageBox::information(this,"Help","Visit sEdit's official website for FAQ's and help");
}


void MainWindow::on_actionexitfullscreen_triggered()
{
     this->showNormal();
}


void MainWindow::on_actionabout_sEdit_triggered()
{
    QMessageBox::information(this,"About sEdit","SEdit stands for Saanvi Edit");
}





void MainWindow::on_actionviewfullscreen_triggered()
{
    this->showFullScreen();
}


void MainWindow::on_actionbold_triggered()
{
    //bold_flag = 0 means it is unbold
    //bold_flag = 1 means it is bold text

    QTextCursor cursor = ui->textEdit_area->textCursor();
    QTextCharFormat format;
    if (cursor.hasSelection()) {
        if(bold_flag == 0){
            format.setFontWeight(QFont::Bold);
            bold_flag =1;
        }
        else {
            format = cursor.charFormat();
            format.setFontWeight(QFont::Normal);
            bold_flag = 0;
        }
        cursor.mergeCharFormat(format);
        ui->textEdit_area->setTextCursor(cursor);
    }
}

