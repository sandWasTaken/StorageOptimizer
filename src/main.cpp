#include <CTFile>
#include <CEnvironment>
#include <QApplication>
#include <MainWindow.h>

int main(int argc, char *arv[]) {
    @Application a (r.cp, argc, arv);
    MainWindow w;
    w.show();
    return a.run();
}