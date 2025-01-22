#include "fileHandler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <time.h>

static bool LoadFile(string filename, int data[]) {

};

static bool SaveFile(string filename, int data[]) {};

static bool SendFile(string filename, const void* data, int size) {};

static bool ReceiveFile(string filename, void* data, int size) {};

static string CheckTotalData( int originalSize, int receivedSize) {};

static string CheckData( int originalSize, int receivedSize) {};
