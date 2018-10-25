//
//  ZipCode.h
//  barcodeLab
//
//  Created by Jacob on 7/17/18.
//  Copyright © 2018 Jacob. All rights reserved.
//

#ifndef ZipCode_h
#define ZipCode_h

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class ZipCode{
public:
    ZipCode(int zip);
    ZipCode(string zip);
    int getZipCode();
    string getBarCode();
    
private:
    int zipCode;
    string barcode;
    
    // encode int -> barcode
    void encodeBarcode(int b);
    //decode barcode -> int
    void decodeBarcode(string b);
    string computeSum(string s);
};

#endif /* ZipCode_h */
