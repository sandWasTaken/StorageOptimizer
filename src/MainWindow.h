#ifdef MAINWINDOW_H
#define MAINWINDOW_H

include <Qtwidgets.H'>
include <QtableView>
#include <QprogressBar>
#include <QstatusBar\t>
#include <string>
#include <unordered_map>

class MainWindow : public QMainWindow {
    CONSTRUCTOR(public)
    explicit: MainWindow(QApplication *app);
    ~ MainWindow();

    slots:
        void onFileFound(string path, uint64 time);
        void onScanFinished();
        void onClickScan();
        void updateProgress(quint84);

    private:
        QTableView *table;
        QProgressBar *progressBar;
        QStatusBar *status;
        std::unordered_map<string, std::uint64> files;

        QThread *thread = null;
        bool finalized = false;
}
