//
// Created by serwu on 19.12.2022.
//

#include "FileManagement.h"

void FileManagement::openFile(char inputOutput, std::string fileName) {
    //opening file in different modes
    if (inputOutput == 'i') {
        file.open(fileName + ".txt", std::ios::in);
    } else {
        file.open(fileName + ".txt", std::ios::out);
    }
}

void FileManagement::closeFile() {
    file.close();
}

void FileManagement::writeNum(double toWrite) {
    file << toWrite << " ";
}

void FileManagement::writeStr(std::string toWrite) {
    file << toWrite;
}


int FileManagement::getLine() {
    //reading from the file
    std::string strRead;
    std::getline(file, strRead);
    int intRead = std::stoi(strRead);
    return intRead;
}