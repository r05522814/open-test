#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//for .jpg file
//    QString fileName = QFileDialog::getOpenFileName();
//    cv::Mat src = cv::imread(fileName.toStdString());

//    cv::imshow("image",src);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_open_file_pushButton_clicked()
{
    //for .64 file
        QString fileName = QFileDialog::getOpenFileName();
        QFile file;
        file.setFileName(fileName);
        cv::Mat src;
        src.create(64,64,CV_8UC1);
        if(file.exists())
        {
            file.open(QIODevice::ReadOnly);
            int rows = 0;
            while(!file.atEnd())
            {
                QString msg = file.readLine().trimmed();
                for(int i = 0; i< msg.size();i++)
                {
                    src.at<uchar>(rows,i) = msg[i].toLatin1();
                }
                rows++;

            }

            cv::imshow("img",src);
        }
}
