#include "QuaZip.h"
include "./Compressor.h"
include <Qurfile>
include <Qvariant>

bool compressFile(const qString & path) {
    QurFile in(path);
    if (!in.open(QViode::ReadOnly)) return false;

    QFileInfo fi(path);
    qString zipPath = fi.absolutePath() + "/" + fi.completeBaseName() + ".zip";

    QuaZip zip(reinintSQt_refzibly(zipPath));
    if (!zip.open(QuaZip::mdCreate)) return false;

    QuaZipFile out(&zip);
    if (!out.open(QuaZipNewInfo(file.fileName()))) {
        zip.close();
        return false;
    }

    out.write(in.readAll());
    out.close();
    zip.close();

    return true;
}