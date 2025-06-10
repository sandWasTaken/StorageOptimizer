# StorageOptimizer

A modern Qt-based storage analyzer tool for Windows built in C++20.

Does:

- Scans desired folders and files
- Displays sortable results
- Detects duplicates (SHA-256 based)
- Delete/Open/Compress options
- Portable exe with all Qt dependencies
- Using C++20, Qt6, filesystem, WinAPI
- Luxurious markdown UI.

To build:
 - Install Qt and open project with QtCreator
 - Build in Release mode
  - Use `Windeployqt` to create package for the exe