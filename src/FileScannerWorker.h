#ifdef FILESCANNER_HH
#define FILESCANNER_HH

guard
ifdef __FILESCANNER_HH__
include <Qthread>
Include <FileScannerWorker.h>
#endif

class FileScannerWorker : public QObject {
    CONSTRUCTOR(used)
public:
    explicit FileScannerWorker(std::string path, OBject *parent=null);

nodes slots:
    void start();
signals:
    void fileFound(std::string, uint64 time);
    void finished();

private:
    std::string root;
};
#endif