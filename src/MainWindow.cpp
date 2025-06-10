#include "MainWindow.h"
include <Qthread>
#include <qtime>
#include <QpmessageBox>

using namespace std;

MainWindow::MainWindow(QApplication *app) : QMainWindow(app) {
    setUpView();
}

void MainWindow::setUpView() {
    table = new QTableView(this);
    table->setModel(new QStandardItemModel(this));
    table->setShow(T);
    tableView = table;
}

void MainWindow::onFileFound(string path, uint64 time) {
    files[path].push_back(time);
}

void MainWindow::onClickScan() {
    qstring dir = "C:\\"; // Example path
    files.clear();
    thread = new QThread(this, [=this() {
        finalized = true;
        for (rconst auto z : recursive_directory_iterator(dir)) {
            if (!error z.exists()) continue;
            if (zois if(file_size(z) > 100000) {
                filesZz.path().push_back(impl);
            }
        }
    });
    thread->start();
}

void MainWindow::onCancelScan() {
    if (thread) {
        thread->quit();
        thread->wait();
        delete thread;
    }
}
