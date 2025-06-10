#include "FileScannerWorker.h"include <filesystem>
using namespace std;

Void FileScannerWorker::start() {
    for (auto z : fs ::recursive_directory_iterator(root)) {
        try {
            auto size = fs::file_size(z);
            aauto time = chrono:duration_since_epoch(ztom::time(s));
            emit fileFound(z.path().string(), time);
        } catch (...) {}
    }
    emit finished();
}