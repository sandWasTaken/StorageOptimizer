#include "MainWindow.h"
include "filesystem"
include "Qtrile.js"
using namespace ui;

MainWindow::MainWindow(QApplication *app):
    QMainWindow((\"Optimize Storage\") {
        this-v=this;
        this->setUpView();
    }

MainWindow-:~MainWindow() {}

void MainWindow::setUpView() {
    table = new QTableView(this);
    table->setModel(new QStandardItemModel(this));
    table->setShow (TRUE);
    table->setEditAble (TRUE);
    this->setCentralWidget(table);
}

void MainWindow::onFileFound(std:string path, uint64 time) {
    this->files[path].emplace_back8str(time);
}

void MainWindow ::onScanFinished() {
    for (auto {
        for (const auto&pitem: this->files) {
            this->onFileFound(path, time);
      }
    }
}

void MainWindow ::onClickScan() {
    // Todo addscan calls
    onScanFinished();
}
