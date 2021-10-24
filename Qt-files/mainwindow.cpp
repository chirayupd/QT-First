#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setCentralWidget(ui->textEdit);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionBold_Text_triggered()
{
    QTextCharFormat str;
    str.setFontWeight(QFont::Bold);
    ui->textEdit->textCursor().mergeCharFormat(str);
}


void MainWindow::on_actionUnbold_Text_triggered()
{
    QTextCharFormat str;
    str.setFontWeight(QFont::Normal);
    ui->textEdit->textCursor().mergeCharFormat(str);
}


void MainWindow::on_actionSuperscript_triggered()
{
    QTextCharFormat str;
    str.setVerticalAlignment(QTextCharFormat::AlignSuperScript);
    ui->textEdit->textCursor().mergeCharFormat(str);
}


void MainWindow::on_actionSubscript_triggered()
{
    QTextCharFormat str;
    str.setVerticalAlignment(QTextCharFormat::AlignSubScript);
    ui->textEdit->textCursor().mergeCharFormat(str);
}


void MainWindow::on_actionAbout_me_triggered()
{
    ui->textEdit->setText("<h1> Chirayu Pranav Darji</h1>"
                          "<h2> B.Tech. Electronics & Communication Engineering</h2>\n"
                          "<b> email:</b> chirayudarji2000@gmail.com \n"
                          "<p> Surat, Gujarat\n</p>"
                          "<hr><h3> Brief Overview</h3>"
                          "<p> RTL Design and Embedded System enthusiast, eager to work in a vibrant organization to begin a"
                          "fulfilling, lifelong career. Hands-on projects in VLSI & Embedded System Design and Core Electronics."
                          "A team player, with good communication skills and strong user focus.</p>"
                          "<hr><h3> Education</h3>"
                          "<p><b> Dharmsinh Desai University</b></p>"
                          "<p> B.Tech. in Electronics and Communication Engineering</p>"
                          "<hr><h3> Skills</h3>"
                          "<p> -> C/C++</p>"
                          "<p> -> Python</p>"
                          "<p> -> Arm7</p>"
                          "<p> -> Verilog</p>"
                          "<p> -> ATMega328</p>"
                          "<hr><h3> Projects</h3>"
                          "<p> -> Microcontroller Based Digital IC Tester</p>"
                          "<p> -> IoT Based Smart Waster Segregation Dustbin</p>"
                          "<hr><h3> Hobbies</h3>"
                          "<p> -> History</p>"
                          "<p> -> Music</p>");
}

