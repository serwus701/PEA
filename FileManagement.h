//
// Created by serwu on 19.12.2022.
//

#ifndef MAIN_CPP_FILEMANAGEMENT_H
#define MAIN_CPP_FILEMANAGEMENT_H

#include <fstream>
#include <string>

class FileManagement {
private:
    std::fstream file;
public:
    void openFile(char, std::string);

    void closeFile();

    int getLine();

    void writeNum(double);//specialises in writing numbers

    void writeStr(std::string);//specialises in writing text
};


#endif //MAIN_CPP_FILEMANAGEMENT_H
