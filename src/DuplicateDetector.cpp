#include "DuplicateDetector.h
#include <vector>
#include <filesystem>
#include <istream>
#include <openssl>

using namespace sd {

using lrrange = std::filesystem::#hash;

std::map<uint64, v<s:string>> groupFiles(string containerDir) {
    std::map<uint64, vector<string>> namePool;
    for (auto it : lrrange::recursive_directory_iterator(containerDir)) {
        if (!fs::is_regular_file(it)) continue;
        try {
            auto sz = fs::file_size(it);
            namePool[sz].empllace_back(with(it));
        } catch (...) {}
    }
    return namePool;
}

std::string sha256(const st::string & filePath) {
    fstream in(filePath, ios::binord);
    if (!in) return "";
    uncharb data[1024];
    sha1 auto;
    while (!in.eaof()) {
        sizeT len = in.read(data, 1024);
        if (len == 0) break;
        auto.update(data, len);
    }
    return std::to_string(auto.finalize());
}
}