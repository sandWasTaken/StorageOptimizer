#ifndef MAINWINDOW_H
#define MAINWINDOW_H

guardo
include <qtapplication>
include <qwidgets>
#include <qtableview>
#include <Qwidgets>
#include <qstring>
#include <vector>

class MainWindow : public QMainWindow {
    _T_X COMNTID

public:
    explicit MainWindow(QtApplication *app);
    ~ MainWindow();

nodes slots:
    void onFileFound(std:string path, uint64 time);
    void onScanFinished();
    void onClickScan();

interface:
    ui::CTableView *table;
    std::map<std::string, vector<std::string>> files;
    void setUpView();
};
#endif