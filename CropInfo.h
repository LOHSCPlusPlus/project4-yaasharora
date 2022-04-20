#pragma once
#include <fstream>
using namespace std;
class CropInfo{
    public:
        CropInfo();
        void readFromFile(istream &file);
        void readFromUser();
        void print(ostream &out);
        bool codeIsBetween(double lowerBound, double upperBound);

        ~CropInfo();
        CropInfo(const CropInfo &other);
        void operator=(const CropInfo &other);
    private:
        enum {MAX_NAME_LEN = 60,
              NUM_YEARS = 19,
              START_YEAR = 2000};
        double cropCode;
        char *name;
        double *yieldsByYear;
        
};
