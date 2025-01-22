#pragma once
#include "ReliableUDP.cpp"
class fileHandler
{
public:
	static bool LoadFile(string filename, int data[]);
	static bool StoreFile(string filename, const int data[]);
	static bool SendFile(string filename, const void* data, int size);
	static bool ReceiveFile(string filename, void* data, int size);
	static string CheckTotalData( int originalSize, int receivedSize);
	static bool VerifyFile(string filename);
};

