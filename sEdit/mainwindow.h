#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_open_clicked();

    void on_pushButton_save_clicked();

    void on_actionNew_Window_triggered();

    void on_actionsave_as_triggered();

    void on_actionsuper_script_triggered();

    void on_actionremove_super_subscript_triggered();

    void on_actionsub_script_triggered();

    void on_pushButton_resume_clicked();

    void on_actiongo_to_line_triggered();

    void on_actionhelp_triggered();

    void on_actionexitfullscreen_triggered();

    void on_actionabout_sEdit_triggered();

    void on_actionbold_triggered();

    void on_actionviewfullscreen_triggered();

private:
    Ui::MainWindow *ui;
    int bold_flag;
};
#endif // MAINWINDOW_H
