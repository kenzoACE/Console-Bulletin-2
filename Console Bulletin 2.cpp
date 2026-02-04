#include <algorithm>
#include <assert.h>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <time.h>
#include <vector>
// #include <Windows.h>
//#include <locale>
//#include "FormatDelim.h"
#include <C:\Users\kenzo\source\repos\ConsoleApplication3\ConsoleApplication3\FormatDelim.h>
#include <regex>
//#include "FormatDelim.h"

using namespace std;

#define _HAS_U8_INTRINSICS (0x20, ' ');

char htmlOut[500000];
string temp;
int juggerknot;

string file;
int headingNum = 0;
string alertText[500];
int expandedTag[65];
string baseArray[65];
int baseIndex = 1;
int globalTreeNum = 0;
int lastTreeNum = 1;
int lastIndex_global;
int index_global;
string commentArray[128];
int tempindex = 0;
int globalcounter;
int global_headingNum;
int currentCommentNum;
string listString[257];
string file2;
bool master_post = false;
int master_postNum = 0;
int master_commentNum = 0;
int num50 = 0;
// int index = 0;
int main();
// static string GetComments(int, string);
// string GetHeading(int);
// static string GetComment(int, string, int);
// static string GetTitle(int, string);
string getFile2();
// string _GetComments(int);
// string GetComment(int, int);
// string comments();
// string Children();
// bool IsHack(string, int, int);
string _GetPost(int);
int _getNumComments(int, int);
string listPost();
// int newItem_Expanded(int, int);
// int _BulletinWrite();
string _GetComments(int);
// static string Children(string);
// static string Groups(string);
// static string CreateHeading(int, string);
void myReplace(std::string&, std::string&, std::string&);
bool isNumber(const std::string& str);
void removeEmptyStrings(std::string arr[], int size);
std::string base64_encode(const std::string& input);
std::vector<std::string> split(const std::string& str, const std::string& delim);
string current_filename;
string comment_array;
string heading_array;
int globalCommentNum;
int global_headingnum;
int currentCommentNum2;
int headerNum = 0;
int _headingNumber = 0;
int counter = 0;
// int outputFinalHtml(int);
int exists[INT16_MAX];
int exisits_index = 0;
char temp244[50000000];
int numPosts;
int temp16 = 0;
string number = "   ";
string commentExistCheck = "COMMENT_FOUND";

string groups[256];	 // array of string of size max 4000 bytes set with strnset function
string children[64]; // array of strings with string size of 3000 bytes set with strnset function

char num[3];
int numberOfPosts = 0;
// string temp;
int index3 = 0;

int count_input = 0;
string tempFileLines2[257];

string fileOldNames[10000];

int _depth = 0;
int _depth2 = 0;
int _headerNum = 0;

int _zero = 0;
string _comment;
string _comments;
int _heading = 0;

string tempFileLines[257];

string tempFileLines3[257];
const int MAX_COMMENT_NUM = 64;
string comment = "";
string fileLines[257];
string fileLines2[257];

string commentToInsert;
string commentNumber2;
string name3;
string title3;
string post3;
string postNum2;
string commentNumber;
int commentNumber3;
string postNum;
char commentNumberChar[50];
char postNumChar[50];

int numberOfComments = 1;
int nextCommentNum = 0;
string temp2;
string comments2;
int count = 0;
// int currentCommentNum = 0; ;
string temp5;
int lastTreeNum2;
string bufferString;

//        string fileLine = "";

//        int index2 = 0;
int lastIndex = 0;
int postNumber = 0; // The heading number. 1 through 255
int commentNum = 0;
int positionNum = 0;
int NumberOfComments = 0;
int numComments = 0;
int nextCommentNum2 = 0;
int length = 0;
size_t chunkSize = 1; // Define a chunk size (adjust as needed)
string encryptedFileName = "encrypted_filename";

string input;

/*
void waitForKeyPress() {
	std::cout << "Press 'e' to expand or 'c' to collapse: ";
	while (true) {
		if (GetAsyncKeyState('E') & 0x8000) {
			std::cout << "\nExpanded content here.\n";
			std::cout << "Press 'c' to collapse or 'q' to quit: ";
		}
		if (GetAsyncKeyState('e') & 0x8000) {
			std::cout << "\nExpanded content here.\n";
			std::cout << "Press 'c' to collapse or 'q' to quit: ";
		}
		else if (GetAsyncKeyState('C') & 0x8000) {
			std::cout << "\nCollapsed view.\n";
			std::cout << "Press 'e' to expand or 'q' to quit: ";
		}
		else if (GetAsyncKeyState('c') & 0x8000) {
			std::cout << "\nCollapsed view.\n";
			std::cout << "Press 'e' to expand or 'q' to quit: ";
		}
		else if (GetAsyncKeyState('Q') & 0x8000) {
			std::cout << "\nQuitting...\n";
			break;
		}
		else if (GetAsyncKeyState('q') & 0x8000) {
			std::cout << "\nQuitting...\n";
			break;
		}
		Sleep(100); // Small delay to prevent high CPU usage
	}
}


void waitForKeyInput() {
	char key;
	while (true) {
		key = _getch(); // Wait for key input
		switch (key) {
		case 72: // Up arrow
			std::cout << "Up arrow pressed" << std::endl;
			// Add code to scroll up
			break;
		case 80: // Down arrow
			std::cout << "Down arrow pressed" << std::endl;
			// Add code to scroll down
			break;
		case 13: // Enter
			std::cout << "Enter key pressed: max comment number will be 64 and after the limit, post will be cloned at the top." << std::endl;
			// Add code to select post/comment
			break;
		case 27: // Esc
			std::cout << "Esc key pressed" << std::endl;
			// Add code to exit or go back
			postNumChar[0] = 'f';
			postNumChar[1] = 'i';
			postNumChar[2] = 'n';
			postNumChar[3] = 'i';
			postNumChar[4] = 's';
			postNumChar[5] = 'h';
			return; // Exit the loop
		default:
			std::cin.getline(postNumChar, 50, '\n');
			std::cout << "Invalid key" << std::endl;
			break;
		}
		break;
	}
}
*/

void xorEncryptDecrypt(std::vector<char>& data, char key)
{
	for (auto& byte : data)
	{
		byte ^= key;
	}
}

void NewItemExpanded(int, int, int)
{
	counter = 0;

	lastTreeNum2 = lastTreeNum;

	int numberOfComments = 0;
	string header2 = "";
	header2.assign('a', 4000);
	header2.clear();
	// header2.resize(4000);

	int index = 0;
	int indexTemp3 = 0;

	if (_depth2 == 0)
	{
		//_depth--;
		return;
	}

	header2 += (baseArray[globalcounter - 1].c_str());

	int y = 0;
	for (int x = 0; x < 64 && strcmp(commentArray[x].c_str(), "") != 0; x++)
	{
		y++;
	}

	numberOfComments = y;

	// remove tree chars to find the comment number
	while (indexTemp3 != std::string::npos && header2.find("->") >= 0)
	{
		std::size_t indexTemp2 = header2.find("->");

		if (indexTemp2 == std::string::npos)
		{
			break;
		}

		indexTemp3 = indexTemp2;
		header2 = (header2.substr(2, header2.length() - 2));
		// header2.shrink_to_fit();
	}

	try
	{
		headerNum = stoi(header2.substr(0, 2).c_str());
	}
	catch (exception e)
	{
		headerNum = 0;
	}

	if (globalcounter > numberOfComments)
	{
		_depth = 0; // set for exit branch
		//_depth2 = 0;
		// globalTreeNum = headerNum;
		return;
	}

	currentCommentNum2 = headerNum;

	do
	{
		counter++;
		try
		{
			if (commentArray[baseIndex].length() != 0)
			{
				temp5.assign(5000, 'a');
				temp5.clear();
				// temp5.resize(5000);
				temp5 += (commentArray[baseIndex]);
				// temp5.shrink_to_fit();
			}

			nextCommentNum = stoi(temp5.substr(0, 2).c_str());
		}
		catch (exception e)
		{
			throw e.what();
			cout << "unpredictable error occurred.... Possible no comments to read.";
		}

		if (_depth == 1 && (nextCommentNum == lastTreeNum || (globalTreeNum != lastTreeNum && baseIndex + 1 != numberOfComments && currentCommentNum2 < nextCommentNum)))
		{
			baseArray[baseIndex] += "->";
			baseArray[baseIndex] += commentArray[baseIndex];
			baseIndex++;
			globalcounter++;
			//_depth--;
			//_depth2 = 0;
		}
		else if (lastTreeNum < nextCommentNum)
		{
			//_depth--;
		}

		header2 += (baseArray[baseIndex - 1].c_str());

		// remove tree chars to find the comment number
		while (indexTemp3 != std::string::npos && header2.find("->") >= 0)
		{
			std::size_t indexTemp2 = header2.find("->");

			if (indexTemp2 == std::string::npos)
			{
				break;
			}

			indexTemp3 = indexTemp2;
			header2 = (header2.substr(indexTemp2 + 2, header2.length() - 4));
			// header2.shrink_to_fit();
		}

		try
		{
			headerNum = stoi(header2.substr(0, 2).c_str());
		}
		catch (exception e)
		{
			_depth2 = 0; // set for exit
			return;
		}

		if ((baseIndex <= numberOfComments && baseArray[baseIndex].empty()) || lastTreeNum + 1 == headerNum)
		{
			bufferString.assign(64, 'a');
			bufferString.clear();
			// bufferString.resize(64);

			// this should be complete
			for (int x = 0; x < _depth; x++)
			{
				bufferString += "->";
			}
			// bufferString.shrink_to_fit();

			temp2.assign(5000, 'a');
			temp2.clear();
			// temp2.resize(5000);
			temp2 += (bufferString);
			temp2 += (commentArray[baseIndex]);
			// temp2.shrink_to_fit();

			if (temp2.size() == 0)
			{
				_depth2 = 0; // set for exit
				break;
			}

			if (_depth != 1)
			{
				baseArray[baseIndex] += (temp2);
				globalcounter++;
				baseIndex++;
			}
			header2 += (baseArray[baseIndex - 1].c_str());

			// remove tree chars to find the comment number
			while (indexTemp3 != std::string::npos && header2.find("->") >= 0)
			{
				std::size_t indexTemp2 = header2.find("->");

				if (indexTemp2 != std::string::npos)
				{
					break;
				}

				indexTemp3 = indexTemp2;
				header2 += (header2.substr(indexTemp2 + 2, header2.length() - 4));
				// header2.shrink_to_fit();
			}

			headerNum = stoi(header2.substr(0, 2).c_str());

			try
			{
				nextCommentNum2 = stoi(commentArray[globalcounter].substr(0, 3));
			}
			catch (const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				nextCommentNum2 = 100;
			}

			lastTreeNum = headerNum;

			if (nextCommentNum2 < nextCommentNum || lastTreeNum - 1 > globalTreeNum || baseIndex - 1 == numberOfComments || globalTreeNum == 0) // the nextCommentNum should be the one just appended
			{
				_depth--; // return the recursive function the global variable remembering the branch
				//_depth2 = 0;  //set for exit
				break;
			}
			else if (((nextCommentNum <= headerNum && headerNum != globalTreeNum && numberOfComments != globalcounter) ||
				(lastTreeNum >= nextCommentNum && globalTreeNum < lastTreeNum)))
			{
				_headerNum = currentCommentNum2;
				globalTreeNum = headerNum;
				_depth++;
				_depth2 = baseIndex;
				counter++;
				NewItemExpanded(baseIndex, _depth, _depth2);
				_depth--;
			}
			else
			{
				lastTreeNum = headerNum;
				break;
			}

			if ((globalTreeNum > nextCommentNum) || counter > 64)
			{
				_depth2 = 0;
				break;
			}
			else if (baseIndex == numberOfComments)
			{
				_depth2 = 0; // set for exit
				break;
			}
		}
		else
		{
			_depth2 = 0; // trigger the collapsed node
		}

	} while (_depth2 != 0);

	globalTreeNum = headerNum;
	_depth--;
	return;
}

void Comments()
{
	int count = 0;
	globalcounter = 0;
	currentCommentNum2 = 0;
	string temp = "";
	temp.assign(5000, 'a');
	temp.clear();
	int numberOfComments = 1;
	int nextCommentNum = 1;
	string returnString[65];
	int currentPosition = 1;
	baseIndex = 0;
	exisits_index = 0;
	temp5.assign(5000, 'a');
	temp5.clear();
	// temp5.resize(5000);
	//  temp.append(GetHeading(headingNum));
	_depth = 1;
	_depth2 = -1;
	int index = 0;
	string header = "";
	header.assign('a', 400);
	header.clear();
	// header.resize(400);
	string header2 = "";
	header2.assign('a', 4000);
	header2.clear();
	// header2.resize(4000);

	for (int x = 0; x < 64; x++)
	{
		baseArray[x].assign(5000, 'a');
		baseArray[x].clear();
		// baseArray[x].resize(5000);
	}

	// std::string toString2 = to_string(_heading);

	// toString += (toString2);
	// toString.shrink_to_fit();
	// temp5 += (toString);
	// temp5 += (":@" + temp);
	// temp5.shrink_to_fit();

	temp = _GetComments(stoi(postNum2)); // fill in the commentArray array

	// reset globalcounter
	globalcounter = 0;

	// check for no comment
	std::size_t pos = commentArray[0].find(":@");
	if (pos == std::string::npos)
	{
		cout << "unpredictable error occurred....." << "\r\n";
		return;
	}

	int y = 0;

	for (int x = 0; x < 64; x++)
	{
		std::size_t pos2 = commentArray[x].find(":@");
		if (pos2 == std::string::npos)
		{
			break;
		}
		else
		{
			y++;
		}
	}

	numberOfComments = y;
	// only one comment will return without doing anything else
	if (NumberOfComments == 1)
	{
		currentCommentNum2 = stoi(commentArray[baseIndex].substr(0, 2).c_str()); // where is baseIndex being set?
		baseArray[0] += (commentArray[0]);
		return;
	}
	else if (globalcounter == 0) // first time call
	{
		baseArray[0] += (commentArray[0]);
		globalcounter++;
		baseIndex++;
		lastTreeNum = stoi(commentArray[0].substr(0, 3));
	}

	temp5.assign(5000, 'a');
	temp5.clear();
	// temp5.resize(5000);

	// main loop
	while (baseIndex != numberOfComments && _depth2 != 0)
	{
		if (_depth2 == 0) // last comment, make sure to set all variables to default for next use of the function
		{
			nextCommentNum = 0;
			break;
		}
		else
		{
			//_depth = 0;
		}

		header.assign(400, 'a');
		header.clear();
		// header.resize(400);

		try
		{
			header.assign(400, 'a');
			header.clear();
			// header.resize(400);
			header += (commentArray[baseIndex]);

			int indexTemp3 = 0;

			while (indexTemp3 != std::string::npos && header.find('-') == 0)
			{
				std::size_t indexTemp2 = header.find("->");

				if (indexTemp2 != std::string::npos)
				{
					break;
				}

				indexTemp3 = indexTemp2;
				header = header.substr(2, header.length() - 2);
				// header.shrink_to_fit();
			}
			currentCommentNum = currentCommentNum2;
			currentCommentNum2 = stoi(header.substr(0, 2));
		}
		catch (exception e)
		{
			// do nothing
		}

		// find next comment number the same way by updating baseIndex
		try
		{
			header.assign(400, 'a');
			header.clear();
			// header.resize(400);
			header += (commentArray[baseIndex + 1]);

			int indexTemp3 = 0;

			while (indexTemp3 != std::string::npos && header.find('-') == 0)
			{
				std::size_t indexTemp2 = header.find("->");

				if (indexTemp2 == std::string::npos)
				{
					break;
				}

				indexTemp3 = indexTemp2;
				header = header.substr(2, header.length() - 2);
			}

			nextCommentNum = stoi(header.substr(0, 2));
		}
		catch (exception e)
		{
			_depth2 = 0; // set for exit?
		}

		if (currentCommentNum == 0)
		{
			currentCommentNum++; // there will be no comment number zero
		}

		header.assign(400, 'a');
		header.clear();
		// header.resize(400);

		if ((globalcounter < numberOfComments) && nextCommentNum < currentCommentNum2 || lastTreeNum2 < currentCommentNum2)
		{
			lastTreeNum = currentCommentNum2;
			_depth2 = -1;
			_depth = 1;
			NewItemExpanded(baseIndex, _depth, _depth2);

			if (_depth2 == 0)
			{
				cout << "expanded mode error...";
				cout << "\r\n";
				break;
			}
		}
		else
		{
			baseArray[baseIndex] += (commentArray[baseIndex]);

			lastTreeNum = 0;
			globalcounter++;
			baseIndex++;
		}

		// returned and from defaulting to -new- comment
		_depth = 0;
		_depth2 = -1;
	}

	return;
}

// Function to split a string by a delimiter and return a vector of strings
std::vector<std::string> split(const std::string& str, const std::string& delim)
{
	std::vector<std::string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == std::string::npos)
			pos = str.length();
		std::string token = str.substr(prev, pos - prev);
		if (!token.empty())
			tokens.push_back(token);
		prev = pos + delim.length();
	} while (pos < str.length() && prev < str.length());
	return tokens;
}

// Function to check the alignment of the delimiters in each line
void checkFileAlignment(const std::string& filePath)
{
	std::ifstream file(filePath);
	//file.imbue(std::locale("C.UTF-8"));
	std::string line;
	int lineNumber = 0;
	const std::string delimiter = ":@";

	if (!file.is_open())
	{
		std::cerr << "Error opening file." << std::endl;
		return;
	}

	while (getline(file, line))
	{
		++lineNumber;
		// Check if the line ends with the correct ending delimiter
		if (line.rfind(delimiter + ";@") != line.length() - 4 && line.length() > 3)
		{
			std::cerr << "Alignment error on line " << lineNumber << ", near the end." << std::endl;
			continue;
		}

		// Split the line by the delimiter and check the number of segments
		std::vector<std::string> segments = split(line, delimiter);
		if (segments.size() < 1 && line.length() > 10)
		{ // Assuming at least 1 segments per line
			std::cerr << "Alignment error on line " << lineNumber << ", not enough segments." << std::endl;
			continue;
		}
		/*
				// Check if each segment starts with a number
				for (size_t i = 0; i < 1; ++i) {
					std::istringstream iss(segments[i]);
					int num;
					if (!(iss >> num)) {
						std::cerr << "Alignment error on line " << lineNumber << ", segment " << i + 1 << " does not start with a number." << std::endl;
					}
				}
		*/
	}

	file.close();
}

/*
void clearConsole() {
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
	FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE, screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
	SetConsoleCursorPosition(console, topLeft);
}
*/

bool isNumber(const std::string& str)
{
	std::stringstream ss(str);
	double d;
	char c;

	// Skip whitespace at the beginning
	ss >> std::ws;

	// Try to extract a number
	if (!(ss >> d))
	{
		// Failed to extract a number
		return false;
	}

	// Check for any remaining non-whitespace characters
	ss >> std::ws;

	// Check if we've reached the end of the stream or if there's a non-numeric character
	if (ss.eof())
	{
		// We've reached the end of the stream without finding any non-numeric characters
		return true;
	}
	else if (ss >> c)
	{
		// Found a non-numeric trailing character
		return false;
	}

	// In case there's something else in the stream
	return false;
}

std::string base64_encode(const std::string& input)
{
	static const char encode_table[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
	std::string encoded;
	int val = 0, valb = -6;
	for (unsigned char c : input)
	{
		val = (val << 8) + c;
		valb += 8;
		while (valb >= 0)
		{
			encoded.push_back(encode_table[(val >> valb) & 0x3F]);
			valb -= 6;
		}
	}
	if (valb > -6)
		encoded.push_back(encode_table[((val << 8) >> (valb + 8)) & 0x3F]);
	while (encoded.size() % 4)
		encoded.push_back('=');
	return encoded;
}

string getFile2()
{
	std::string fileItSelf2;
	//fstream myfile_reset_file;
	numberOfPosts = 0;
	fileItSelf2.assign(50000000, 'a');//4MB
	fileItSelf2.clear();
	fileItSelf2.resize(50000000);
	num50 = 1;
	string STRING;
	std::string NUMBER = "   ";
	STRING.assign('a', 400000);//4MB
	STRING.clear();
	STRING.resize(400000);

	encryptedFileName.assign('a', 50);
	encryptedFileName.clear();
	encryptedFileName.resize(50);

	//get archived files first
	std::string encrypted_string = "encryptedfile1";
	encryptedFileName.assign(base64_encode(encrypted_string));
	ifstream infile33;
	//infile33.imbue(std::locale("C.UTF-8"));

	try {
		infile33.open(encryptedFileName, std::ios::in);
		if (!infile33.is_open()) {
			throw std::ios_base::failure("File not found");
		}
	}
	catch (const std::ios_base::failure& e) {
		std::cerr << "Exception caught: " << e.what() << std::endl;
		std::wofstream outfile(encryptedFileName); // Create the file
		//outfile.imbue(std::locale("C.UTF-8"));

		if (!outfile) {
			std::cerr << "Failed to create the file." << std::endl;
			return fileItSelf2;
		}
	}
	infile33.getloc();
	STRING.clear();

	for (int x = 0; x < 1000 && infile33.peek() != EOF; x++)// To get you all the lines.
	{
		getline(infile33, STRING);

		if (STRING.length() > 4)
		{
			fileOldNames[x].assign(50, 'a');
			fileOldNames[x].clear(); //erase because it re-reads every time.
			//fileOldNames[x].resize(50);
			fileOldNames[x] += STRING;
		}
		else
		{
			cout << "unable to collect archive";
			cout << "\r\n";
		}

		STRING.assign(400, 'a');
		STRING.clear();
		STRING.resize(400);
	}
	infile33.close();

	//initialize temp244
	for (int x = 0; x < 50000000; x++)
	{
		temp244[x] = NULL;
	}

	char duplicate[40000] = "";

	ifstream infile;
	//infile.imbue(std::locale("C.UTF-8"));
	//infile.open(current_filename, ios::in);
	try {
		infile.open(current_filename, std::ios::in);
		if (!infile.is_open()) {
			throw std::ios_base::failure("File not found, creating... ");
		}
	}
	catch (exception e)
	{
		//create a blank file
		wofstream outfile;
		//outfile.imbue(std::locale("C.UTF-8"));
		outfile.open(current_filename, ios::out);
		for (int x = 0; x < 257; x++)
		{
			outfile << "\r\n";
		}
		outfile.close();
	}
	infile.close();

	ifstream infile41;
	//infile41.imbue(std::locale("C.UTF-8"));
	try {
		infile41.open("BulletinData.txt", ios::in);
		if (!infile41.is_open()) {
			throw ios_base::failure("Data file not found, creating...");
			//num50 = 0;
		}
		else
		{
			getline(infile41, NUMBER);
			infile41.close();
			//num50 = 1;
		}
	}
	catch (exception& e) {
		// Create a blank file
		wofstream outfile41("BulletinData.txt", ios::out);
		//outfile41.imbue(std::locale("C.UTF-8"));
		outfile41 << "0  ";
		outfile41.close();
	}

	//infile.getloc();
	if (NUMBER.size() == 0)
	{
		NUMBER = "0  ";
	}
	else
	{
		numberOfPosts = stoi(NUMBER.c_str());
	}

	for (int x = 0; x < 257; x++)
	{
		tempFileLines3[x].assign(400000, 'a');
		tempFileLines3[x].clear();
		tempFileLines3[x].resize(400000);
	}

	//char* charPtr = (char*)fileItSelf2.c_str();

	int fileCount = 0;

	if (strcmp(NUMBER.c_str(), "0  ") == 0)  //only should hit when nothing posted ie. blank file
	{
		//initialize file if empty and used for the first time
		wofstream outfile;
		//outfile.imbue(std::locale("C.UTF-8"));
		outfile.open(current_filename, ios::out);

		for (int x = 0; x < 257; x++)
		{
			outfile << "\r\n";
		}

		outfile.close();

		wofstream outfile41("BulletinData.txt", ios::out);
		//outfile41.imbue(std::locale("C.UTF-8"));
		outfile41 << "0  ";
		outfile41.close();

		std::cout << "nothing in file.... please post something";
		std::cout << "\r\n";
		numberOfPosts = 0;

		//initialize the array because file is empty ie. first time use
		for (int x = 0; x < 257; x++)
		{
			tempFileLines3[x] += "\n";
		}

		return "";
	}

	std::size_t atCount = 0;
	infile.open(current_filename, std::ios::in);

	numberOfPosts = 0;
	STRING.assign(5000000, 'a');
	STRING.clear();
	//STRING.resize(400);

	for (int x = 0; x < 256; x++)// To get you all the lines.
	{
		getline(infile, STRING);
		atCount = STRING.find(";@");

		if (atCount == std::string::npos)
		{
			numberOfPosts = 0;
			//cout << "end counting file";
			return "";
		}
		else
		{
			tempFileLines3[x].assign(STRING);

			for (int i = 0; i < atCount + 2; i++)
			{
				temp244[fileCount] = STRING.at(i);
				fileCount++;
			}
			numberOfPosts++;
		}

		STRING.assign(400000, 'a');
		STRING.clear();
	}
	infile.close();

	int tempNum = stoi(NUMBER.c_str());
	numPosts = numberOfPosts;

	if (numberOfPosts != tempNum)
	{
		cout << "debug here. array count = ";
		cout << numberOfPosts;
		cout << "data file = ";
		cout << tempNum;
		cout << "\r\n";
	}

	for (int x = 0; x < 50000000; x++)
	{
		fileItSelf2.at(x) = temp244[x];
	}

	STRING.clear();

	if (current_filename.length() > 15) // the file name is "Bulletin.txt" which is shorter than log file name with dates added
	{
		for (int x = 0; x < 256; x++)
		{
			tempFileLines3[x].assign(400000, 'a');
			tempFileLines3[x].clear();
			tempFileLines3[x].resize(400000);
		}

		string tempFileLines4[256];
		tempFileLines4[0].assign(10000000, 'a'); //10MB
		tempFileLines4[0].clear();
		tempFileLines4[0].resize(10000000);

		// Decrypt each line
		for (auto& line : tempFileLines4) {
			std::vector<char> data(line.begin(), line.end());
			xorEncryptDecrypt(data, 'K');
			line = std::string(data.begin(), data.end());
		}
		for (size_t i = 0; i < fileItSelf2.size(); i += chunkSize) {
			std::vector<char> chunk(fileItSelf2.begin() + i, fileItSelf2.begin() + min(i + chunkSize, fileItSelf2.size()));
			xorEncryptDecrypt(chunk, 'K');
			tempFileLines4[0].replace(i, chunk.size(), std::string(chunk.begin(), chunk.end()));
		}

		fileItSelf2.clear();
		fileItSelf2 += tempFileLines4[0];
		numPosts = 256;
		numberOfPosts = 256;

		int currentPos = 0;
		int startPos = -1;

		for (int x = 0; x <= 256; x++)
		{
			currentPos = tempFileLines4[0].find('\n', currentPos + 1);
			tempFileLines3[x] += (tempFileLines4[0].substr(startPos + 1, currentPos - startPos - 1));
			startPos = currentPos;
		}
	}

	bool isWhitespaceOnly = true;
	for (char c : fileItSelf2) {
		if (!std::isspace(static_cast<unsigned char>(c))) {
			isWhitespaceOnly = false;
			break;
		}
	}
	/*
		if (isWhitespaceOnly) {
			// The string contains only whitespace characters
		}
		else if (fileItSelf2.length() < 20)
		{
			//initialize file for start using
			wofstream outfile;
			outfile.imbue(std::locale("en_US.UTF-8"));
			outfile.open(current_filename, ios::out);

			for (int x = 0; x < 257; x++)
			{
				outfile << '\n';
			}

			outfile.close();
		}
	*/


	return fileItSelf2;
}

void myReplace(std::string& str,
	const std::string& oldStr,
	const std::string& newStr)
{
	std::string::size_type pos = 0u;
	while ((pos = str.find(oldStr, pos)) != std::string::npos)
	{
		str.replace(pos, oldStr.length(), newStr);
		pos += newStr.length();
	}
}

void removeEmptyStrings(std::string arr[], int size)
{
	int insertPos = 0;
	for (int i = 0; i < size; ++i)
	{
		if (!arr[i].empty())
		{
			arr[insertPos++] = arr[i];
		}
	}
	// Clear the remaining elements
	for (int i = insertPos; i < size; ++i)
	{
		arr[i].clear();
	}
}

string _GetPost(int headingNum)
{
	string post = "";
	int counter = 0;
	int lastIndex = 0;

	_comment.assign(2000, 'a');
	_comment.clear();
	_comment.resize(2000);
	post.assign(6000, 'a');
	post.clear();
	post.resize(6000);
	int indexpost = 0;

	string filePost;
	filePost.assign(50000000, 'a');
	filePost.clear();
	// filePost.resize(50000000);

	getFile2();

	// check for unwanted calls
	if (temp244[0] == '\0' || headingNum == 0)
	{
		return "POST_NOT_FOUND";
	}

	for (int x = 0; x < 50000000 && temp244[x] != '\0'; x++)
	{
		filePost.assign(x, temp244[x]);
	}

	filePost.shrink_to_fit();

	int temp19;
	lastIndex_global = 0;
	index_global = 0;
	tempindex = 0;
	int comment_counter = 0;
	string indexstring = "       ";
	indexstring.clear();
	indexstring.resize(7);

	do
	{
		lastIndex_global = index_global;

		if (lastIndex_global < 0)
		{
			return "POST_NOT_FOUND";
		}

		try
		{
			indexstring.append(tempFileLines3[numPosts - headingNum].substr(tempindex, 3).c_str());
			globalcounter = stoi(indexstring.c_str());
			indexstring.clear();
			indexstring.resize(7);
		}
		catch (exception e)
		{
			// cout << " error ";
		}

		std::size_t tempIndex19 = tempFileLines3[numPosts - headingNum].find(":@", index_global);
		tempindex = tempIndex19 + 2;

		if (tempindex > 0)
		{
			index_global = tempindex;
		}

		comment_counter++;

	} while (comment_counter < 4); // go through until the end of post where comments begin

	if (post == "POST_NOT_FOUND")
	{
		return "POST_NOT_FOUND";
	}

	// count the number of posts by looking at the array.  A single array contains the whole post

	numPosts = 0;
	int location = 0;
	for (int x = 0; x < 257; x++)
	{
		location = tempFileLines3[x].find(";@");
		if (location > 22)
		{
			numPosts++;
		}
		else
		{
			break;
		}
	}

	std::size_t index19 = tempFileLines3[numPosts - headingNum].find(":@;@");
	index_global = index19;

	if (index19 > INT32_MAX)
	{
		return "POST_NOT_FOUND";
	}

	post.append(tempFileLines3[numPosts - headingNum].substr(lastIndex_global, index_global - lastIndex_global));

	std::string s = std::to_string(headingNum);
	post.insert(0, s + ":@");
	post.shrink_to_fit();

	_comment.assign(20000, 'a');
	_comment.clear();
	_comment.resize(20000);
	_comment += (post);

	return post;
}

string listPost()
{
	int num = 0;
	numPosts = 0;
	char temp[4];
	int offset = 0;
	int offset2 = 0;
	int second = 0;
	/*
	int second2 = 0;
	int second3 = 0;
	int second4 = 0;
	int second5 = 0;
	int second6 = 0;
	*/
	string tempString;
	// tempString.resize(5000);

	string post = "";
	string heading = "";
	//	int index = 0;
	int counter = 0;
	int lastIndex = 0;

	// check for unwanted calls
	if (tempFileLines3[0] == "\0")
	{
		std::cout << "Bulletin used for the first time.... ";
		return "";
	}

	string fileList;
	fileList.assign('a', 50000000);
	fileList.clear();
	// fileList.resize(500000);

	// count the number of posts
	for (int x = 0; x < 257; x++)
	{
		listString[x].assign(4000, 'a');
		listString[x].clear();
		// listString[x].resize(4000);

		std::size_t pos = tempFileLines3[x].find(";@");
		if (pos != std::string::npos)
		{
			numPosts++;
		}
		else
		{
			break;
		}
	}

	fileList += getFile2();
	// fileList.shrink_to_fit();

	index_global = 0;
	lastIndex_global = 0;
	globalcounter = 0;
	string number;
	number.assign(3, 'a');
	number.clear();
	number.resize(3);

	char chars[10];
	string temp3;
	int secondPos = 0;

	string temp24 = "";
	string temp3_2;
	temp3.assign(50, 'a');
	temp3.clear();
	temp3.resize(50);

	offset = 0;

	// go through the file String which contains the whole file and find the post
	do
	{
		if (numPosts == 0)
		{
			break;
		}

		tempString.assign(5000, 'a');
		tempString.clear();

		temp3.assign(500, 'a');
		temp3.clear();
		// temp3.resize(500);

		/*
		second2 = 0;
		second3 = 0;
		second4 = 0;
		second5 = 0;
		second6 = 0;
		*/

		try
		{
			std::size_t temp2 = tempFileLines3[counter].find(":@", 0);
			second = temp2;
			std::size_t temp12 = tempFileLines3[counter].find(":@", second + 2);
			second = temp12;
			std::size_t temp13 = tempFileLines3[counter].find(":@", second + 2);
			second = temp13;
			std::size_t temp14 = tempFileLines3[counter].find(":@", second + 2);
			second = temp14;
			std::size_t temp15 = tempFileLines3[counter].find(":@", second + 2);
			second = temp15;

			std::size_t temp16 = tempFileLines3[counter].find(":@", second + 2);
			offset = temp16;
			// second6 += temp16;

			// if (temp16 == std::string::npos) break;
		}
		catch (exception e)
		{
			break; // end of comments section reached and is not finding delimiter anymore
		}
		// adjust the digits according to comment number and pick up the comment number
		if (counter < 10)
		{
			tempString += tempFileLines3[counter].substr(0, second);
			temp3 += tempString.c_str();
		}
		else if (counter >= 10)
		{
			tempString += tempFileLines3[counter].substr(0, second);
			temp3 += tempString.c_str();
		}

		listString[counter] += temp3.c_str();

		counter++;

	} while (numPosts != counter);

	// decrement numPosts since it adds first thing in do-while loop
	// numPosts--;

	return temp3;
}

int _getNumComments(int postNum7, int headingNumber7)
{
	string post = "";
	post.assign(500000, 'a');
	post.clear();
	// post.resize(500000);
	//       String temp = "";
	string temp4 = "";
	temp4.assign(400000, 'a');
	temp4.clear();
	//      String content = "";
	string comment = "";
	//           String commentHeading = "";
	int index = 1;
	int counter = 0;
	int lastIndex = 0;
	globalcounter = 0;

	string temp3;
	string heading = "";
	int headingNumber = _heading;
	std::string fileComment;

	numberOfComments = 0;
	getFile2(); // to fill in temp244

	for (int x = 0; x < 64; x++)
	{
		commentArray[x].assign(2000, 'a');
		commentArray[x].clear();
	}

	int tempIndex = 0;
	int tempIndex2;
	int tempIndex3;

	tempindex = 0;

	comment.assign(4000, 'a');
	comment.clear();
	comment.resize(4000);

	getFile2(); // to fill in temp244
	listPost();
	fileComment.assign(400000, 'a');
	fileComment.clear();
	fileComment.resize(400000);
	string fileComment2;
	fileComment2.assign(400000, 'a');
	fileComment2.clear();
	fileComment2.resize(400000);

	fileComment.assign(temp244, 400000);
	fileComment2.assign(temp244, 400000);

	string comments3;
	comments3.assign(50000, 'a');
	comments3.clear();
	// comments3.resize(50000);

	lastIndex_global = 0;
	index_global = 0;

	int tempindex_found = 0;
	int tempindex_found2 = 0;
	string indexstring = "       ";
	indexstring.clear();
	// indexstring.resize(8);

	// set number of posts here
	numPosts = 0;
	for (int x = 0; x < 257; x++)
	{
		if (strcmp(tempFileLines3[x].c_str(), "") != 0)
		{
			numPosts++;
		}
		else
		{
			x = 257;
		}
	}

	// check for unwanted calls
	if (headingNumber7 <= 0 || headingNumber7 >= 256 || temp244[0] == '\n')
	{
		std::cout << "post number out of range";
		std::cout << "\r\n";
		return -1;
	}

	int findPost = 0;
	
	// extract the post line from whole file
	for (int x = 0; numPosts - headingNum - x != 0; x++)
	{

		// skip post section and jump to comments only
		std::size_t index69 = fileComment2.find(":@", findPost);
		index_global = index69;
		std::size_t index61 = fileComment2.find(":@", index_global + 2);
		index_global = index61;
		std::size_t length61 = fileComment2.find(":@", index_global + 2);
		index_global = length61;
		std::size_t length63 = fileComment2.find(":@", index_global + 2);
		index_global = length63;
		std::size_t length62 = fileComment2.find(":@", index_global + 2);
		index_global = length62;

		fileComment2 = fileComment2.substr(findPost, index_global - /*findPost*/ + 4);
		
		//findPost = fileComment.find(';', findPost);
		//fileComment2 = fileComment2.substr(findPost + 2, fileComment2.length() - findPost + 2);
		

		//findPost = fileComment2.find(":@;@", findPost);
		headingNum++;

		//found the post
		if (stoi(fileComment2.substr(0, 2)) == headingNumber7 || headingNum > numPosts)
		{
			//get rid of trailing posts then break
			for (int z = 0; numPosts - headingNum != 1; z++)
			{
				//findPost = fileComment2.find(index_global, findPost + 4);
				fileComment2 = fileComment2.substr(findPost, fileComment2.length() - findPost + 2);
				headingNum++;
			}

			break;
		}
		
	}

	//string post0;
	//post0.assign(5000000, 'a');
	//post0.clear();
	index_global = 0;

	// findPost = fileComment2.find(":@;@");
	// fileComment2 = fileComment2.substr(0, findPost + 4);

	// skip post section and jump to comments only
	std::size_t index59 = fileComment2.find(":@", 0);
	index_global = index59;
	std::size_t index51 = fileComment2.find(":@", index_global + 2);
	index_global = index51;
	std::size_t length51 = fileComment2.find(":@", index_global + 2);
	index_global = length51;
	std::size_t length52 = fileComment2.find(":@", index_global + 2);
	index_global = length52;
	std::size_t length53 = fileComment2.find(":@", index_global + 2);
	index_global = length53;

	// check for two digit comment number
	temp3.assign(200, 'a');
	temp3.clear();

	temp3 += fileComment2.at(index_global - 2);
	temp += fileComment2.substr(findPost, index_global - 1);

	int number = 0;

	/*
	if (isOneDigit)
	{
		fileComment2 = (fileComment2.substr(0, findPost + 1));
	}
	else
	{
		fileComment2 = (fileComment2.substr(0, findPost));
	}
	*/
	//post0 += fileComment2;
	counter = 0;
	index_global = 0;
	// this loop will just check if only post exists
	do
	{
		if (tempindex_found != std::string::npos && tempindex_found - index_global > 77 && globalcounter == headingNumber7)
		{
			break; // reached the end of whole post and no error finding the post number, should check match in if statement
		}

		if (globalcounter == 0)
		{
			try
			{
				indexstring = (temp.substr(index_global, 3).c_str());
				// indexstring.shrink_to_fit();
				globalcounter = stoi(indexstring.c_str());
				// indexstring.clear();
			}
			catch (exception e)
			{
				_comment = "COMMENT_NOT_FOUND";
				break;
			}
		}
		else
		{
			try
			{
				indexstring = (temp.substr(index_global - 2, 3).c_str());
				// indexstring.shrink_to_fit();
				globalcounter = stoi(indexstring.c_str());
				// indexstring.clear();
			}
			catch (exception e)
			{
				_comment = "COMMENT_NOT_FOUND";
				break;
			}
		}
 
		std::size_t tempIndex = temp.find(":@", index_global); // this is correct
		tempindex = tempIndex;
		std::size_t index19 = temp.find(":@", tempindex + 2);
		tempindex = index19;
		std::size_t index21 = temp.find(":@", tempindex + 2);
		tempindex = index21;
		std::size_t length21 = temp.find(":@", tempindex + 2);
		tempindex = length21;
		std::size_t length22 = temp.find(":@", tempindex + 2);
		tempindex = length22;

		index_global = tempindex;
		indexstring = "       ";
		counter++;

		tempindex_found = temp.find(";@", tempindex);
	} while (tempindex_found != std::string::npos && tempindex_found - index_global > 70); // can make it true

	counter = 0;
	/*
	// no comments check used to return FIRST_COMMENT
	index_global = 0;
	try
	{
		std::size_t length23 = temp.find(":@", index_global + 2);
		index_global = length23;
		std::size_t length24 = temp.find(":@", index_global + 2);
		index_global = length24;
	}
	catch (const std::exception& e)
	{
		// redundant code
		_comment.assign(30, 'a');
		_comment.clear();
		_comment += ";@";
	}
	*/

	if (strcmp(_comment.c_str(), "COMMENT_NOT_FOUND") == 0)
	{
		return -1;
	}

	int index2 = 0; // reset index6
	int lastIndex5;
	int index3 = 0;
	// skip main post field
	lastIndex5 = index2;

	// post0.resize(50000);

	std::size_t last = temp.find(":@;@", index3);

	int index5 = 0;
	int index9 = 0;
	string tempComment;
	int length10 = 0;
	int index_global2 = 0;

	tempComment.assign(20000, 'a');
	tempComment.clear();
	// tempComment.resize(20000);
	int temp_length = temp.length();
	index_global2 = 0;
	int temp_num = 0;

	index_global2 = -1; // initialize for second use
	int pos = temp.find(":@;@");
	bool isTwoDigits = false;
	bool firstArray = true;
	lastIndex_global = 0; // set for starting to extract from comments section post0
	int number3 = 0;
	int number2 = 0;
	int number1 = 0;
	int number4 = 0;

	// go through the comments and extract each comment and put in array
	for (int x = 0; x < 64; x++)
	{
		tempComment.assign(20000, 'a');
		tempComment.clear();

		std::size_t commentIndex = temp.find(":@", index_global2 + 2);
		index9 = index_global2;
		index_global2 = commentIndex;
		std::size_t commentIndex22 = temp.find(":@", index_global2 + 2);
		index_global2 = commentIndex22;
		std::size_t commentIndex32 = temp.find(":@", index_global2 + 2);
		index_global2 = commentIndex32;
		std::size_t commentIndex42 = temp.find(":@", index_global2 + 2);
		index_global2 = commentIndex42;
		std::size_t commentIndex43 = temp.find(":@", index_global2 + 2);
		index_global2 = commentIndex43;
		// index9 = commentIndex43;
		// test the comment number, 1:@ will be temp="@1" and 12:@ will be temp="12" which will through a stoi argument exception
		//temp.assign(2000, 'a');
		//temp.clear();

		temp4 += temp.at(commentIndex - 1);
		//temp += temp.at(commentIndex);

		isTwoDigits = false;

		try
		{
			number = stoi(temp4.c_str());
		}
		catch (exception e)
		{
			isTwoDigits = true;
		}

		if (isTwoDigits)
		{
			tempComment.assign(200000, 'a');
			tempComment.clear();
			if (firstArray)
			{
				tempComment += temp.substr(index9 + 1, index_global2 - commentIndex); // account for extra digit. There is a if function to account for index9 - 1 which should be just index9
				firstArray = false;
			}
			else
			{
				tempComment += temp.substr(index9, index_global2 - commentIndex); // account for extra digit.
			}
			lastIndex_global = index_global2;
		}
		else if (!isTwoDigits) // comment number is less than 10 meaning one digit
		{
			tempComment.assign(200000, 'a');
			tempComment.clear();
			if (firstArray)
			{
				tempComment = temp.substr(index9 + 1, index_global2 - commentIndex + 1); // index9 - commentIndex is the length of copied string.
				firstArray = false;
			}
			else
			{
				tempComment = temp.substr(index9 + 2, index_global2 - commentIndex + 1); // index9 - commentIndex is the length of copied string.
			}
			lastIndex_global = index_global2;
		}

		number3 = temp.find(tempComment); // this does not work for some reason, always set to 0
		number2 = tempComment.size();
		number1 = temp.find(";@");
		number4 = tempComment.length();

		numberOfComments++;

		if (number1 - number3 + number2 < 70) // should only be about 3. The date and time field is about 24.
		{
			break;
		}

		index9 = index_global2;
	}

	return numberOfComments;
}

string _GetComments(int headingNumber2)
{
	string post = "";
	post.assign(500000, 'a');
	post.clear();
	// post.resize(500000);
	//       String temp = "";
	int temp2;
	//      String content = "";
	string comment = "";
	//           String commentHeading = "";
	int index = 1;
	int counter = 0;
	int lastIndex = 0;
	globalcounter = 0;

	string temp3;
	string heading = "";
	int headingNumber = _heading;
	std::string fileComment;
	// fileComment.assign(500000, '/0');

	numberOfComments = 0;
	getFile2(); // to fill in temp244
	/*
	for (int x = 0; x < 500000; x++)
	{
		fileComment.at(x) = temp244[x];
	}
	*/
	// Resize the string to the required size first
	//fileComment.resize(50000000);
	// Use std::copy for better performance
	//std::copy(temp244, temp244 + 50000000, fileComment.begin());
	// fileComment.shrink_to_fit();

	for (int x = 0; x < 64; x++)
	{
		commentArray[x].assign(2000, 'a');
		commentArray[x].clear();
		// commentArray[x].resize(2000);
	}

	int tempIndex = 0;
	int tempIndex2;
	int tempIndex3;

	tempindex = 0;

	comment.assign(4000, 'a');
	comment.clear();
	comment.resize(4000);

	getFile2(); // to fill in temp244
	listPost();
	fileComment.assign(400000, 'a');
	fileComment.clear();
	fileComment.resize(400000);
	string fileComment2;
	fileComment2.assign(400000, 'a');
	fileComment2.clear();
	fileComment2.resize(400000);
	
	fileComment.assign(temp244, 400000);
	fileComment2.assign(temp244, 400000);

	string comments3;
	comments3.assign(500000, 'a');
	comments3.clear();
	// comments3.resize(50000);

	lastIndex_global = 0;
	index_global = 0;

	int tempindex_found = 0;
	int tempindex_found2 = 0;
	string indexstring = "       ";
	indexstring.clear();
	// indexstring.resize(8);

	// set number of posts here
	numPosts = 0;
	for (int x = 0; x < 257; x++)
	{
		if (strcmp(tempFileLines3[x].c_str(), "") != 0)
		{
			numPosts++;
		}
		else
		{
			x = 258;
		}
	}

	// check for unwanted calls
	if (headingNumber2 <= 0 || headingNumber2 >= 256 || temp244[0] == '\n')
	{
		std::cout << "post number out of range";
		std::cout << "\r\n";
		return "COMMENT_NOT_FOUND";
	}

	int findPost = 0;
	//headingNum = headingNumber2;
	// extract the post line from whole file
	for (int x = 0; numPosts - headingNum - x != 0; x++)
	{	
		fileComment2 = fileComment2.substr(findPost, fileComment2.length()); // when first loop hits, does not change anything
		
		if (stoi(fileComment2.substr(0, 2)) == headingNumber2)
		{
			// gather post section with jump to comments plust post section
			std::size_t index39 = fileComment2.find(":@", index_global);
			index_global = index39;
			std::size_t index31 = fileComment2.find(":@", index_global + 2);
			index_global = index31;
			std::size_t length33 = fileComment2.find(":@", index_global + 2);
			index_global = length33;
			std::size_t length32 = fileComment2.find(":@", index_global + 2);
			index_global = length32;
			std::size_t length42 = fileComment2.find(":@", index_global + 2);
			index_global = length42;

			fileComment2 = fileComment2.substr(findPost, index_global);
			break;
		}
		
		// skip post since not the right post
		std::size_t index19 = fileComment2.find(":@", index_global);
		index_global = index19;
		std::size_t index21 = fileComment2.find(":@", index_global + 2);
		index_global = index21;
		std::size_t length21 = fileComment2.find(":@", index_global + 2);
		index_global = length21;
		std::size_t length22 = fileComment2.find(":@", index_global + 2);
		index_global = length22;
		std::size_t length23 = fileComment2.find(":@", index_global + 2);
		index_global = length23;
		findPost = index_global;
	}

	string post0;
	post0.assign(5000000, 'a');
	post0.clear();

	// findPost = fileComment2.find(":@;@");
	// fileComment2 = fileComment2.substr(0, findPost + 4);

	// skip post section and jump to comments only
	std::size_t index10 = fileComment2.find(":@", index_global);
	index_global = index10;
	std::size_t index28 = fileComment2.find(":@", index_global + 2);
	index_global = index28;
	std::size_t length27 = fileComment2.find(":@", index_global + 2);
	index_global = length27;
	std::size_t length26 = fileComment2.find(":@", index_global + 2);
	index_global = length26;
	std::size_t length22 = fileComment2.find(":@", index_global + 2);
	index_global = length22;

	// check for two digit comment number
	temp.assign(200, 'a');
	temp.clear();

	temp += fileComment.at(index_global - 2);
	//temp += fileComment.at(index_global - 1);

	int number = 0;
	bool isOneDigit = false;
	try
	{
		number = stoi(temp);
	}
	catch (exception e)
	{
		isOneDigit = true;
	}

	// use an another string for safety purposes
	fileComment += (fileComment2.substr(index_global, fileComment2.length() - index_global));

	if (isOneDigit)
	{
		fileComment2 = (fileComment2.substr(index_global + 2, fileComment2.length() - 2));
	}
	else
	{
		fileComment2 = (fileComment2.substr(index_global + 3, fileComment2.length() - 3));
	}

	post0 += fileComment2;
	counter = 0;
	index_global = 0;
	// this loop will just check if only post exists
	do
	{
		if (tempindex_found != std::string::npos && tempindex_found - index_global > 77 && globalcounter == headingNumber2)
		{
			break; // reached the end of whole post and no error finding the post number, should check match in if statement
		}

		if (globalcounter == 0)
		{
			try
			{
				indexstring = (fileComment2.substr(index_global + 1, 3).c_str());
				// indexstring.shrink_to_fit();
				globalcounter = stoi(indexstring.c_str());
				// indexstring.clear();
			}
			catch (exception e)
			{
				_comment = "COMMENT_NOT_FOUND";
				break;
			}
		}
		else
		{
			try
			{
				indexstring = (fileComment2.substr(index_global + 2, 3).c_str());
				// indexstring.shrink_to_fit();
				globalcounter = stoi(indexstring.c_str());
				// indexstring.clear();
			}
			catch (exception e)
			{
				_comment = "COMMENT_NOT_FOUND";
				break;
			}
		}
		/*
		if (counter <= 5)
		{
			tempindex_found2 = index_global;
		}
		*/
		std::size_t tempIndex = fileComment2.find(":@", index_global); // this is correct
		tempindex = tempIndex;
		std::size_t index19 = fileComment2.find(":@", tempindex + 2);
		tempindex = index19;
		std::size_t index21 = fileComment2.find(":@", tempindex + 2);
		tempindex = index21;
		std::size_t length21 = fileComment2.find(":@", tempindex + 2);
		tempindex = length21;
		std::size_t length22 = fileComment2.find(":@", tempindex + 2);
		tempindex = length22;

		index_global = tempindex;
		indexstring = "       ";
		counter++;

		tempindex_found = fileComment2.find(";@", tempindex);
	} while (tempindex_found != std::string::npos && tempindex_found - index_global > 70); // can make it true

	counter = 0;

	// no comments check used to return FIRST_COMMENT
	index_global = 0;
	try
	{
		std::size_t length23 = fileComment2.find(":@", index_global + 2);
		index_global = length23;
		std::size_t length24 = fileComment2.find(":@", index_global + 2);
		index_global = length24;
	}
	catch (const std::exception& e)
	{
		// redundant code
		_comment.assign(30, 'a');
		_comment.clear();
		_comment += ";@";
	}

	// this is important, check if there are no comments when calling this function. There is a number put in a comment at the very end it will return COMMENT_NOT_FOUND
	// int number2 = comments3.length();
	if (strcmp(_comment.c_str(), ";@") == 0 || index_global == std::string::npos || globalCommentNum == 0)
	{
		_comment.assign(30, 'a');
		_comment.clear();
		//_comment.resize(30);
		_comment += ("FIRST_COMMENT");
		return _comment;
	}
	
	if (strcmp(_comment.c_str(), "COMMENT_NOT_FOUND") == 0)
	{
		return "COMMENT_NOT_FOUND";
	}

	int index2 = 0; // reset index6
	int lastIndex5;
	int index3 = 0;
	// skip main post field
	lastIndex5 = index2;

	// post0.resize(50000);

	std::size_t last = fileComment2.find(":@;@", index3);

	//_comment.clear();
	// _comment = fileComment2.substr(2, fileComment2.length() - 6);

	

	/*
	number = stoi(comments3.substr(0, 3).c_str());

	int noCommentNum = last - length21;

	if (last <= 24)  //there should be only timestamp when last delimiter other than a comment and a timestamp
	{
		_comment.assign(30, 'a');
		_comment.clear();
		//_comment.resize(30);
		_comment += ("FIRST_COMMENT");
		return _comment;
	}
	*/

	int index5 = 0;
	int index9 = 0;
	string tempComment;
	int length10 = 0;
	int index_global2 = 0;

	tempComment.assign(20000, 'a');
	tempComment.clear();
	// tempComment.resize(20000);
	int temp_length = post0.length();
	index_global2 = 0;
	int temp_num = 0;

	index_global2 = -1; // initialize for second use
	int pos = post0.find(":@;@");
	bool isTwoDigits = false;
	bool firstArray = true;
	lastIndex_global = 0; // set for starting to extract from comments section post0
	int number3 = 0;
	int number2 = 0;
	int number1 = 0;
	int number4 = 0;
	
	// go through the comments and extract each comment and put in array
	for (int x = 0; x < 64; x++)
	{
		tempComment.assign(20000, 'a');
		tempComment.clear();

		std::size_t commentIndex = post0.find(":@", index_global2 + 2);
		index9 = index_global2;
		index_global2 = commentIndex;
		std::size_t commentIndex22 = post0.find(":@", index_global2 + 2);
		index_global2 = commentIndex22;
		std::size_t commentIndex32 = post0.find(":@", index_global2 + 2);
		index_global2 = commentIndex32;
		std::size_t commentIndex42 = post0.find(":@", index_global2 + 2);
		index_global2 = commentIndex42;
		std::size_t commentIndex43 = post0.find(":@", index_global2 + 2);
		index_global2 = commentIndex43;
		// index9 = commentIndex43;
		// test the comment number, 1:@ will be temp="@1" and 12:@ will be temp="12" which will through a stoi argument exception
		temp.assign(200, 'a');
		temp.clear();

		temp += post0.at(commentIndex - 1);
		//temp += post0.at(commentIndex);

		isTwoDigits = false;

		try
		{
			number = stoi(temp.c_str());
		}
		catch (exception e)
		{
			isTwoDigits = true;
		}

		if (isTwoDigits)
		{
			tempComment.assign(200000, 'a');
			tempComment.clear();
			if (firstArray)
			{
				tempComment += post0.substr(index9, index_global2 - commentIndex); // account for extra digit.
				firstArray = false;
			}
			else
			{
				tempComment += post0.substr(index9, index_global2 - commentIndex); // account for extra digit.
			}
			lastIndex_global = index_global2;
		}
		else if (!isTwoDigits) // comment number is less than 10 meaning one digit
		{
			tempComment.assign(200000, 'a');
			tempComment.clear();
			if (firstArray)
			{
				tempComment = post0.substr(index9 + 2, index_global2 - commentIndex + 1); // index9 - commentIndex is the length of copied string.
				firstArray = false;
			}
			else
			{
				tempComment = post0.substr(index9 + 2, index_global2 - commentIndex + 1); // index9 - commentIndex is the length of copied string.
			}
			lastIndex_global = index_global2;
		}

		number3 = post0.find(tempComment); // this does not work for some reason, always set to 0
		number2 = tempComment.size();
		number1 = post0.find(";@");
		number4 = tempComment.length();

		commentArray[x] += tempComment;
		numberOfComments++;

		if (number1 - number3 + number2 < 70) // should only be about 3. The date and time field is about 24.
		{
			break;
		}

		index9 = index_global2;
	}

	// removeEmptyStrings(commentArray, 127);

	indexstring.clear();
	indexstring.resize(7);

	/*
	if (commentNumber3 == 0)
	{
		return "FIRST_COMMENT";
	}
	*/

	return post0;
}

//entering a number crashes the program for some reason.
int main()
{
	//std::locale::global(std::locale("C.UTF-8")); // Set global locale to UTF-8
	//std::wcout.imbue(std::locale("C.UTF-8"));	 // Adjust wwcout to use the new locale

	current_filename.assign('a', 40);
	current_filename.clear();
	current_filename.resize(40);
	current_filename.assign("Bulletin.txt"); // set the file name to begin with, could change when reading old posts command
	string post_string2;
	post_string2.assign(2000, 'a');
	post_string2.clear();
	post_string2.resize(2000);
	commentExistCheck.assign(30, 'a');
	commentExistCheck.clear();
	commentExistCheck.resize(30);
	_comment.assign(2000, 'a');
	_comment.clear();
	_comment.resize(2000);
	string child;
	time_t now;
	struct tm tstruct;
	// char       buf[80];

	char list2[5000];
	string time_str2;
	name3.assign(50, 'a');
	name3.clear();
	name3.resize(50);
	title3.assign(50, 'a');
	title3.clear();
	title3.resize(50);
	post3.assign(2000, 'a');
	post3.clear();
	post3.resize(2000);
	number.assign(4, 'a');
	number.clear();
	number.resize(4);
	char name[50];
	char title[50];
	char post_string[2000];

	char commentNumberChar[50];
	char input2[5000];

	char buf[80];
	char buf2[80];
	char buf3[80];

	int _headingNum = 0;
	int _headingNum2 = 0;
	int _postNum = 0;

	getFile2();

	// count the number of posts
	ifstream infile;
	//infile.imbue(std::locale("C.UTF-8"));
	infile.open("BulletinData.txt", ios::in);
	string number26;
	number26.assign(3, 'a');
	number26.clear();
	number26.resize(3);
	if (infile.is_open())
	{
		infile >> num;
	}
	else
	{
		cout << "data file error... initializing";
		cout << "\r\n";
	}
	infile.close();

	// check file integrity before anything else
	const std::string filePath = current_filename;
	checkFileAlignment(filePath);

	// initialize the old file name list array
	for (int x = 0; x < 1000; x++)
	{
		fileOldNames[x].assign('a', 40);
		fileOldNames[x].clear();
		// fileOldNames[x].resize(40);
	}

	/*
	file.assign(500000, 'a');
	file.clear();
	file.resize(500000);
	file = getFile2();
	file.shrink_to_fit();
	for (int x = 0; x < file.length(); x++)
	{
		temp244[x] = file.at(x);
	}
	*/
	// file2.clear();
	// file2.append(file);
	// file2.shrink_to_fit();
	getFile2();

	for (int x = 0; x < 64; x++)
	{
		baseArray[x].assign(5000, 'a');
		baseArray[x].clear();
		baseArray[x].resize(5000);
	}

	for (int x = 0; x < 64; x++)
	{
		commentArray[x].assign(2000, 'a');
		commentArray[x].clear();
		commentArray[x].resize(2000);
	}

	for (int x = 0; x <= 256; x++)
	{
		listString[x].assign(2000, 'a');
		listString[x].clear();
		listString[x].resize(2000);
	}

	number26.assign('a', 3);
	number26.clear();
	number26.resize(3);
	number26 += num[0];

	if (num[0] == '\0')
	{
		number = "0";
	}
	else
	{
		number26 += num[0];
	}
	if (num[1] != '\0')
	{
		number26 += num[1];
	}
	if (num[2] != '\0')
	{
		number26 += num[2];
	}
	number = number26;

	if (!isNumber(number))
	{
		numberOfPosts = 0;
	}
	else
	{
		numberOfPosts = stoi(number.c_str());
	}

	number = numberOfPosts;

	string strOutData;
	// string fileitself[500000];
	// string* duplicate;
	// strOutData.assign(500000, '/0');
	strOutData.clear();

	// strOutData = "Content-type: text/html; charset=Shift_JIS\n";
	// hypertext no javascripting here7^
	// strOutData +="Pragma: no-cache\n";
	// strOutData+="Cache-Control: no-cache\n\n";
	/*
	string temp;
	string output[5000000];
	string commentsString;
	string tempString;

	strOutData.resize(5000000, 'a');
	strOutData.clear();
	strOutData.append("<html><head><title>?e?X?g?o?????B</title><head>");
	//strOutData += "<html><head><title>?e?X?g?o?????B</title><head>";
	//output->append(temp);

	//string* duplicate2;
	//duplicate2->resize(500000);
	//strOutData += "<body>";
	//strOutData->resize(500000);
	strOutData.append("<body>");
	//output->append(temp);

	//duplicate2 = getFile2();

	temp.assign(500000, 'a');
	temp.clear();

	string tempString2;
	string tempString3;
	tempString.assign(500000, 'a');
	tempString.clear();
	tempString2 = getFile2();
	tempString.append(tempString2);
	tempString.shrink_to_fit();

	commentsString.assign(50000, 'a');
	commentsString.clear();
	string temp0;
	//temp0 = GetComments(200, tempString);
	commentsString.append(temp0);
	commentsString.shrink_to_fit();
	tempString2.clear();
	tempString2.shrink_to_fit();
	tempString2.assign(50000, 'a');
	tempString2.clear();
	tempString3.assign(50000, 'a');
	tempString3.clear();

	strOutData.append(commentsString);

	//temp0 = GetComment(200, tempString, 1);
	tempString3.append(temp0);
	string groupsString;
	//groupsString = Groups(tempString);
	tempString3.append(groupsString);
	//temp0 = Children(tempString2);
	tempString3.append(temp0);
	//temp0 = GetHeading(200, tempString);
	tempString3.append(temp0);
	//temp0 = GetTitle(200, tempString);
	tempString3.append(temp0);
	//temp0 = CreateHeading(200, tempString);
	tempString3.append(temp0);
	tempString3.shrink_to_fit();

	strOutData.append(tempString3);
	strOutData.append(tempString);
	//temp.append(getFile2());
	//temp.shrink_to_fit();
	//temp = strdup((const char*)&duplicate2);


	//duplicate = strdup((const char*)getFile2().c_str()); //something went wrong here, need to figure out what the hell happened somewhere when this code used to work//began working this should be fine
	//strOutData.append(temp);
	//strcat((char*)fileitself, (const char*)&temp);
	//duplicate = strdup((const char*)fileitself.c_str()); //this seems to be an empty or somewhat string

	//for(int x = 0; x < 257; x++)
	//{
	//  strOutData += GetHeading(x, file2);
	//}
	//duplicate2->resize(500000);
	strOutData.append("</body></html>");
	//temp = strcpy((char*)strOutData, (const char*)&duplicate2);
	//output->append(temp);
	//strOutData += "</body></html>";
	//cout << strOutData.c_str();

	//strOutData.shrink_to_fit();

	for(int x = 0; x < strOutData.length(); x++)
	{
	  output[x] = strOutData.at(x);
	}
	string temp2[1];
	for(int x = 0; x < strlen((const char*)output); x++)
	{
	  temp2[0] = output->at(x);
	  htmlOut[x] = temp2->at(0);
	}
	*/
	strOutData.assign(50, 'a');
	strOutData.clear();
	strOutData.resize(50);
	strOutData.append("<html><head><title>テスト出力です。</title><head>");
	strOutData.append("<body>");

	file2.assign('a', 50000000);
	file2.clear();
	file2.resize(50000000);

	for (int x = 0; x < 50000000 && temp244[x] != '/0'; x++)
	{
		file2.push_back(temp244[x]);
	}

	file2.shrink_to_fit();

	// ListPost();
	temp = listPost(); // stack overflow??
	for (int x = 0; x <= 255 && strcmp(listString[x].c_str(), "") != 0; x++)
	{
		listString[x].shrink_to_fit();
		strOutData.append(listString[x].c_str());
		strOutData.append("\r\n");
	}
	//	strOutData.append(GetHeading(126));
	//	strOutData.append(GetComments(56));
	//	strOutData.append(GetComment(126, 1));//comment returned has delimiter ":@;@" mental note all inputs will omit all these delimiters comment length limited to 2000 chars and post content to 4000 the total file size will reset when greater than 5K, also will split the posts in half when greater than 256 number of posts also will prevent timestamp hacking of deleting a post or comment
	//	strOutData.append(GetPost(126));

	strOutData.append("\r\n");

	child.assign(10, 'a');
	child.clear();
	child.resize(10);
	// child.append(Children());

	for (int x = 0; x < 64 && strcmp(children[x].c_str(), "") != 0; x++)
	{
		//		strOutData.append(children[x][0]);
	}

	//	strOutData.append("\r\n");

	for (int x = 0; x < 64 && strcmp(baseArray[x].c_str(), "") != 0; x++)
	{
		baseArray[x].shrink_to_fit();
		strOutData.append(baseArray[x]);
		strOutData.append("\r\n");
	}

	strOutData.append("</body></html>");
	strOutData.shrink_to_fit();

	// strcpy_s(htmlOut, (const char*)strOutData.c_str());

	// printf(strOutData.c_str());

	strOutData.clear();

	std::cout << "read post content or input comment, post new bulletin? (enter \"list\" to list posts) y/n:  ";
	std::cin.getline(list2, '\n');

	input.assign(500, 'a');
	input.clear();
	input.resize(500);

	count_input = 0;
	for (int x = 0; list2[x] != '\0'; x++)
	{
		count_input++; // This variable can be used if you need the count later on.
	}
	input.assign(list2, count_input);
	
	/*std::string::size_type pos = 0u;
	while ((pos = input.find(":@", pos)) != std::string::npos)
	{
		name3.replace(pos, 2, " ");
		pos += 1;
	}
	*/

	//input.resize(count_input);

	name3.assign(50, 'a');
	name3.clear();
	name3.resize(50);
	title3.assign(50, 'a');
	title3.clear();
	title3.resize(50);
	post3.assign(2000, 'a');
	post3.clear();
	post3.resize(2000);
	postNum2.assign(50, 'a');
	postNum2.clear();
	postNum2.resize(50);
	commentNumber2.assign(5000, 'a');
	commentNumber2.clear();
	commentNumber2.resize(5000);
	name3.assign(50, 'a');
	name3.clear();
	name3.resize(50);
	title3.assign(500, 'a');
	title3.clear();
	title3.resize(500);
	post3.assign(20000, 'a');
	post3.clear();
	post3.resize(20000);
	commentNumber.assign(5000, 'a');
	commentNumber.clear();
	commentNumber.resize(5000);
	postNum.assign(40, 'a');
	postNum.clear();
	postNum.resize(40);

	while (true)
	{
		for (int x = 0; x < 5000, x++;)
		{
			input2[x] = '/0';
		}
		count_input = 0;

		if (strcmp(input.c_str(), ("y")) == 0)
		{
			std::cout << "\r\n";
			std::cin.clear();
			std::cout << ("enter name (posting): ");
			std::cin.clear();
			std::cin.getline(name, 50, '\n');
			std::cin.clear();
			std::cout << "\r\n";
			std::cout << ("enter title (posting): ");
			std::cin.clear();
			std::cin.getline(title, 500, '\n');
			std::cout << "\r\n";
			std::cin.clear();
			std::cout << ("enter post (posting): ");
			std::cin.clear();
			std::cin.getline(post_string, 20000, '\n');

			input.assign(500, 'a');
			input.clear();
			input.resize(500);

			// convert to string for calling the class
			count_input = 0;
			for (int x = 0; name[x] != '\0'; x++)
			{
				name3 += name[x];
				count_input++; // This variable can be used if you need the count later on.
			}
			name3.assign(name, count_input);

			count_input = 0;
			for (int x = 0; title[x] != '\0'; x++)
			{
				title3 += title[x];
				count_input++; // This variable can be used if you need the count later on.
			}
			title3.assign(title, count_input);

			count_input = 0;
			for (int x = 0; post_string[x] != '\0'; x++)
			{
				post3 += post_string[x];
				count_input++; // This variable can be used if you need the count later on.
			}
			post3.assign(post_string, count_input);

			// find all delimiters and replace
			myReplace(title3, ":@", " ");
			myReplace(title3, ";@", " ");
			myReplace(post3, ":@", " ");
			myReplace(post3, ";@", " ");
			myReplace(name3, ":@", " ");
			myReplace(name3, ";@", " ");

			getFile2();
			count_input = 0;

			// make sure to set numberOfPost in getFile2()
			if (numberOfPosts >= 256) // split the file in half number of posts and save to a unique file as log
			{
				for (int x = 0; x < 257; x++)
				{
					tempFileLines2[x].assign(20000, 'a');
					tempFileLines2[x].clear();
					// tempFileLines2[x].resize(20000);
				}

				// getFile2();

				for (int x = 0; x < 257; x++)
				{
					tempFileLines[x] += (tempFileLines3[x]);
				}

				std::string time_str28;
				std::string time_str27;
				time_str28.assign(30, 'a');
				time_str28.clear();
				time_str28.resize(30);
				time_str27.assign(30, 'a'); // Assign 30 'a' characters to the string
				time_str27.clear();			// Erase the content of the string
				time_str27.resize(30);

				time_t now = time(0); // Get the current time
				struct tm tstruct;
				localtime_s(&tstruct, &now); // Convert to local time structure

				char buf[80];
				strftime(buf, sizeof(buf), "%Y/%m/%d.%X", &tstruct); // Format the time
				time_str27 = (buf);									 // Append the formatted time to the string
				time_str28 = (buf);

				std::string::size_type pos = 0u;
				while ((pos = time_str27.find(":", pos)) != std::string::npos)
				{
					time_str27.replace(pos, 1, "_");
					pos += 1;
				}

				std::string::size_type pos2 = 0u;
				while ((pos2 = time_str27.find("/", pos2)) != std::string::npos)
				{
					time_str27.replace(pos2, 1, "_");
					pos2 += 1;
				}

				std::string::size_type pos3 = 0u;
				while ((pos3 = time_str27.find(".", pos3)) != std::string::npos)
				{
					time_str27.replace(pos3, 1, "_");
					pos += 1;
				}

				// remember the old post file name
				std::ofstream outfile14(encryptedFileName);
				outfile14 << time_str27 + current_filename; // always should be "BulletinLog.txt"  Somehow disable editing of log files?
				outfile14 << "\r\n";
				outfile14.close();

				std::ofstream outfile(time_str27 + current_filename);
				//outfile.imbue(std::locale("C.UTF-8"));

				for (int x = 0; x < 257; x++) // To get you all the lines.
				{
					for (auto& line : tempFileLines)
					{
						std::vector<char> data(line.begin(), line.end());
						xorEncryptDecrypt(data, 'K');
						line = std::string(data.begin(), data.end());
					}
					outfile << tempFileLines[x];
				}
				outfile.close();

				// update the data file and close
				wofstream outfile33;
				//outfile33.imbue(std::locale("C.UTF-8"));
				outfile33.open("BulletinData.txt", ios::out);
				outfile33 << "129";
				outfile33.close();

				string postNum4;
				postNum4.assign(1, 'a');
				postNum4.clear();
				postNum4.resize(1);
				postNum4.append("1");

				std::string s = "1"; // split the whole post and begin from post number 1.  256-129 should be showing.
				char const* pchar = s.c_str();

				// shift the array and enter first post after splitting
				tempFileLines2[0] = pchar;
				tempFileLines2[0] += (":@" + title3 + ":@" + name3 + ":@" + post_string + ":@");
				tempFileLines2[0] += time_str28.c_str();
				tempFileLines2[0] += ":@;@";
				tempFileLines2[0] += "\n";

				for (int x = 1; x < 129; x++)
				{
					tempFileLines2[x] += (tempFileLines3[x - 1]);
					tempFileLines2[x] += "\n";
				}

				// fill in 256 lines
				for (int x = 129; x < 257; x++)
				{
					tempFileLines2[x] += "\n";
				}

				ofstream outFile55;
				//outFile55.imbue(std::locale("C.UTF-8"));
				outFile55.open(current_filename, wios::out);
				for (int x = 0; x < 257; x++) // To get you all the lines.
				{
					tempFileLines2[x].erase(std::remove(tempFileLines2[x].begin(), tempFileLines2[x].end(), '\0'), tempFileLines2[x].end());
					outFile55 << tempFileLines2[x];
					outFile55 << "\n";
				}
				outFile55.close();

				// reread from file for other purposes
				file.assign(50000000, 'a');
				file.clear();
				// file.resize(50000000);
				file += getFile2();

				for (int x = 0; x < file.length(); x++)
				{
					temp244[x] = file.at(x);
				}

				// finally set the number of post to 128
				numberOfPosts = 128;
				numPosts = 128;
			}
			else
			{
				string time_str;

				std::string time_str26;
				time_str26.assign(30, 'a'); // Assign 30 'a' characters to the string
				time_str26.clear();			// Erase the content of the string
				time_str26.resize(30);

				time_t now = time(0); // Get the current time
				struct tm tstruct;
				localtime_s(&tstruct, &now); // Convert to local time structure

				char buf[80];
				strftime(buf, sizeof(buf), "%Y/%m/%d.%X", &tstruct); // Format the time
				time_str26 = (buf);									 // Append the formatted time to the string

				getFile2();

				numPosts = 0;
				for (int x = 0; x < 257; x++)
				{
					std::size_t pos2 = tempFileLines3[x].find(":@"); // Find the position of '\n'

					if (pos2 != std::string::npos)
					{
						numPosts++;
					}
					else
					{
						break;
					}
				}

				numberOfPosts = numPosts;
				numberOfPosts++; // update for new post

				// update for new post
				// numberOfPosts++;
				// numPosts = numberOfPosts; //both global variables
				std::string s = std::to_string(numberOfPosts);
				char const* pchar = s.c_str();

				for (int x = 0; x < 257; x++)
				{
					tempFileLines[x].assign(40000, 'a');
					tempFileLines[x].clear();
					// tempFileLines[x].resize(40000);
				}

				for (int x = 0; x <= 256; x++)
				{
					std::size_t pos = tempFileLines3[x].find(";@"); // Find the position of '\n'

					if (pos == std::string::npos)
					{
						// tempFileLines3[x].clear(0, 1);
						tempFileLines[x] += "\r\n";
					}

					if (pos != std::string::npos)
					{
						if (pos != std::string::npos)
						{
							tempFileLines[x] += tempFileLines3[x].substr(0, pos + 2);
							tempFileLines[x] += "\n";
						}
						// tempFileLines[x] += (tempFileLines3[x]);
					}
				}

				string swap1;
				swap1.assign(500000, 'a');
				swap1.clear();
				string swap2;
				swap2.assign(500000, 'a');
				swap2.clear();

				for (int x = 256; x >= 0; x--)
				{
					swap1 += (tempFileLines[x + 1]);
					swap2 += tempFileLines[x];
					tempFileLines[x + 1].erase(0, tempFileLines[x + 1].size());
					tempFileLines[x + 1] += (swap2);
					// tempFileLines[x + 1] += ";@";
					tempFileLines[x].erase(0, tempFileLines[x].size());
					swap1.clear();
					swap2.clear();
				}

				tempFileLines[0].clear(); // Start with a clean string
				tempFileLines[0] = pchar;
				tempFileLines[0] += (":@" + title3 + ":@" + name3 + ":@" + post3 + ":@");
				tempFileLines[0] += time_str26.c_str();
				tempFileLines[0] += ":@;@";
				tempFileLines[0] += "\n";

				std::ofstream outFile50;
				outFile50.open(current_filename, std::ios::out);

				for (int x = 0; x < 257; x++)
				{
					// Remove NULL characters before writing
					tempFileLines[x].erase(std::remove(tempFileLines[x].begin(), tempFileLines[x].end(), '\0'), tempFileLines[x].end());
					outFile50 << tempFileLines[x];
					// outFile50 << "\n"; // Add a newline explicitly
				}

				outFile50.close();

				// update the data file and close
				wofstream outFile2;
				//outFile2.imbue(std::locale("C.UTF-8"));
				outFile2.open("BulletinData.txt");
				std::string s2 = std::to_string(numberOfPosts);
				char const* pchar2 = s2.c_str();

				if (numberOfPosts < 10)
				{
					outFile2 << pchar << "  ";
				}
				else if (numberOfPosts < 700)
				{
					outFile2 << pchar << " ";
				}

				outFile2.close();

				// reread from file for other purposes
				file.clear();
				// file.resize(50000000);
				file += getFile2();

				for (int x = 0; x < file.length(); x++)
				{
					temp244[x] = file.at(x);
				}
			}

			for (int x = 0; x < 5000, x++;)
			{
				input2[x] = '/0';
			}

			// strOutData.assign(500000, 'a');
			// strOutData.clear();
			std::cout << ("enter y to post, n to comment(0 to exit loop):");
			std::cin.clear();
			std::cin.getline(input2, 500, '\n');

			input.assign('a', 500);
			input.clear();
			input.resize(500);

			count_input = 0;

			for (int x = 0; input2[x] != 0; x++) // there seems to be an array allocation problem here
			{
				input.at(x) = input2[x];
				count_input++;
			}
			input.resize(count_input);
		}
		else if (strcmp(input.c_str(), "n") == 0)
		{
			int array_index = 0;
			numPosts = 0;
			
			for (int x = 0; x < 257; x++)
			{
				if (strcmp(tempFileLines3[x].c_str(), "") != 0)
				{
					numPosts++;
				}
				else
				{
					x = 258;
				}
			}
			numPosts++;
			numberOfPosts = numPosts;

			// initialize checking for posting of new comment, not a comment on a comment, used in _GetComments function
			commentNumber3 = 1;
			std::cout << "currently reading post: " << _heading << "\r\n";
			std::cout << "enter 0 for first comment";
			std::cout << "\n";
			std::cin.clear();
			std::cout << "\r\n";
			std::cout << ("enter post number (commenting): ");
			std::cin.getline(postNumChar, 50, '\n');
			std::cin.clear();

			postNum2.clear();
			postNum2.resize(50);

			for (int x = 0; postNumChar[x] != '\0'; x++)
			{
				count_input++;
			}
			postNum2.assign(postNumChar, count_input);

			count_input = 0;

			if (!isNumber(postNum2))
			{
				std::cout << "please enter an number 1-256...." << "\r\n";
				// strOutData.assign(500000, 'a');
				// strOutData.clear();
				std::cout << ("enter y to post, n to comment(0 to exit loop):");
				std::cin.clear();
				std::cin.getline(input2, 500, '\n');

				input.assign('a', 500);
				input.clear();
				input.resize(500);

				count_input = 0;

				for (int x = 0; input2[x] != 0; x++) // there seems to be an array allocation problem here
				{
					input.at(x) = input2[x];
					count_input++;
				}
				input.resize(count_input);
			}
			else
			{

				_heading = stoi(postNum2.c_str());
				temp = _GetPost(_heading);
				if (!isNumber(postNum2) && (_heading < 0 || _heading >= 256 || strcmp(temp.c_str(), "POST_NOT_FOUND") == 0))
				{
					std::cout << "post number out of range, please restart program";
					std::cout << "\n";
					system("PAUSE");
					exit(0);
				}

				std::cout << "\r\n";
				std::cout << ("enter comment number (commenting): ");
				std::cin.getline(commentNumberChar, 50, '\n');
				std::cout << "\r\n";
				std::cin.clear();
				for (int x = 0; commentNumberChar[x] != '\0'; x++)
				{
					count_input++;
				}
				commentNumber2.assign(commentNumberChar, count_input);

				std::string cleanedInput(commentNumberChar);
				if (!std::regex_match(cleanedInput, std::regex("^\\d+$")))
				{
					std::cout << "Error: Only numeric input is allowed.\n";
					system("PAUSE");
					exit(0); // Abort if validation fails
				}
				int commentNumber = std::stoi(cleanedInput);
				std::cout << "Comment number is: " << commentNumber << "\n";

				count_input = 0;
				
				//set global comment number for new comment on a post not a comment on a comment.  _GetComments relies on it.
				globalCommentNum = std::stoi(commentNumber2);
				temp = _GetComments(_heading);
				if ((strcmp(commentNumber2.c_str(), "0") != 0 && !isNumber(commentNumber2)) || (strcmp(temp.c_str(), "COMMENT_NOT_FOUND") == 0 && std::stoi(commentNumber2) != 0))
				{
					std::cout << ("invalid comment number, please enter an another comment number: ");

					std::cin.clear();
					std::cin.getline(commentNumberChar, 500, '\n');

					input.assign(500, 'a');
					input.clear();
					input.resize(500);
					count_input = 0;
					for (int x = 0; commentNumberChar[x] != '\0'; x++) // there seems to be an array alocation probelem here
					{
						count_input++;
					}
					input.assign(commentNumberChar, count_input);
					commentNumber2 = input;
					count_input = 0;
					temp = _GetComments(_heading);
				}

				std::cout << std::boolalpha;													  // Print bools as true/false
				std::cout << "Is the string a number: " << isNumber(commentNumber2) << std::endl; // Should output true

				if ((strcmp(commentNumber2.c_str(), "0") != 0 && !isNumber(commentNumber2)) || (strcmp(temp.c_str(), "COMMENT_NOT_FOUND") == 0 && std::stoi(commentNumber2) != 0))
				{
					std::cout << "invalid comment number again, exiting program"; // this should not be hit
					std::cout << "\n";
					break;
				}

				positionNum = stoi(commentNumber2);

				std::cout << ("enter name (commenting): ");
				std::cin.getline(name, 50, '\n');
				std::cin.clear();
				std::cout << "\r\n";
				for (int x = 0; name[x] != 0; x++)
				{
					count_input++;
				}
				name3.assign(name, count_input);

				std::cout << ("enter title (commenting): ");
				std::cin.clear();
				std::cin.getline(title, 50, '\n');
				std::cout << "\r\n";
				count_input = 0;
				for (int x = 0; title[x] != 0; x++)
				{
					count_input++;
				}
				title3.assign(title, count_input);

				std::cout << ("enter comment (commenting): ");
				std::cin.clear();
				std::cin.getline(post_string, 2000, '\n');
				std::cin.clear();
				count_input = 0;
				for (int x = 0; post_string[x] != 0; x++)
				{
					count_input++;
				}
				post3.assign(post_string, count_input);

				count_input = 0;

				// find all delimiters and replace
				myReplace(title3, ":@", " ");
				myReplace(title3, ";@", " ");
				myReplace(post3, ":@", " ");
				myReplace(post3, ";@", " ");
				myReplace(name3, ":@", " ");
				myReplace(name3, ";@", " ");

				// find the array position by looking at each array's post number
				for (int x = 0; x < 257; x++)
				{
					try
					{
						string indexSubstr;
						indexSubstr.assign('a', 3);
						indexSubstr.clear();
						indexSubstr.resize(3);
						indexSubstr += (tempFileLines3[x].substr(0, 2));
						int currentNumber = std::stoi(indexSubstr);

						if (std::stoi(postNum2) == currentNumber)
						{
							array_index = x;
							break;
						}
					}
					catch (const std::exception& e)
					{
						// std::cout << "Error counting array: " << e.what() << std::endl;
					}
				}

				if (stoi(commentNumber2.c_str()) < 0 || stoi(commentNumber2.c_str()) > 64)
				{
					std::cout << "comment number out of range, please enter an another comment number (restart program):";
					std::cout << "\n";
					break;  //exit main loop
				}
				else // inputs all normal
				{
/*					std::string::size_type pos = 0;
					while ((pos = post3.find(":@", pos)) != std::string::npos)
					{
						post3.erase(pos, 2);
						post3.insert(pos, " ");
					}
*/
					// reread from file to fill in tempFileLinesy3 array
					getFile2();

					// temp = _GetComments(_heading);

					int index_5 = 0;

					// check for new post on comment not a comment on a comment, used in _GetComments function
					if (positionNum == 0)
					{
						commentNumber3 = 0;
					}

					// temp = _GetComments(_heading);

					int array_index = 0;

					temp = _GetPost(stoi(postNum2.c_str()));
					// getFile2();//reread for other purposes.

					_comment = _GetComments(stoi(postNum2.c_str()));

					// If there are too many comments, clone the post and begin a new post.  Max number of comments are limited to 64.
					if (numberOfComments == MAX_COMMENT_NUM)
					{
						int temp11;

						for (int x = 0; x < 257; x++)
						{
							tempFileLines2[x].assign(5000, 'a');
							tempFileLines2[x].clear();
							//tempFileLines2[x].resize(5000);
						}

						// reread from file for other purposes
						file.clear();
						//file.resize(500000);
						file += (getFile2());
						//file.shrink_to_fit();
						for (int x = 0; x < file.length(); x++)
						{
							temp244[x] = file.at(x);
						}

						postNum.assign(3, 'a');
						postNum.clear();
						postNum.resize(3);
						postNum += (tempFileLines3[0].substr(0, 3).c_str());
						int postNum4 = stoi(postNum.c_str());
						postNum4++;
						std::string s5 = "1"; //cloned comment will only have one comment
						char const* pchar5 = s5.c_str();

						ofstream outFile6;
						outFile6.open(current_filename);

						temp = _GetPost(stoi(s5.c_str()));

						// build the post from getFile2 and commentArray.  Cloned post will be at the zero position of array meaning top of the file.
						string swap11;
						swap11.assign(50000, 'a');
						swap11.clear();

						string swap21;
						swap21.assign(50000, 'a');
						swap21.clear();

						for (int x = 256; x >= 0; x--)
						{
							swap11 += (tempFileLines[x + 1]);
							swap21 += tempFileLines[x];
							tempFileLines3[x + 1].erase(0, tempFileLines3[x + 1].size());
							tempFileLines3[x + 1] += (swap21);
							//tempFileLines3[x + 1] += ";@";
							tempFileLines3[x].erase(0, tempFileLines3[x].size());
							swap11.clear();
							swap21.clear();
						}

						NumberOfComments = 0; // update for new comment
						numberOfComments = 0;

						for (int x = 0; x < 257; x++)
						{
							fileLines[x].assign(50000, 'a');
							fileLines[x].clear();
							//fileLines[x].resize(50000);
						}

						std::string time_str22;
						time_str22.assign(30, 'a'); // Assign 30 'a' characters to the string
						time_str22.clear();			// Erase the content of the string
						time_str22.resize(30);

						time_t now = time(0); // Get the current time
						struct tm tstruct;
						localtime_s(&tstruct, &now); // Convert to local time structure

						char buf[80];
						strftime(buf, sizeof(buf), "%Y/%m/%d.%X", &tstruct); // Format the time
						time_str22 = (buf);								 // Append the formatted time to the string

						int array_index = 0;
						string indexstring;
						indexstring.assign('a', 4);
						indexstring.clear();
						indexstring.resize(4);

						tempindex = 0;

						array_index = 0;

						int index_1;

						// check if the post was read correctly
						if (_comment.length() > 0)
						{
							// comment is empty since the comment is on the post is cloned meaning this comment will be a new post with new single comment
							tempFileLines3[0].insert(0, _comment);
							index_1 = _comment.length();
							tempFileLines3[0].insert(index_1, ":@"); // insert the first comment at the end position
							index_1 += 2;
							tempFileLines3[0].insert(index_1, "[CLONED]");
							index_1 += 8;
							tempFileLines3[0].insert(index_1, "1");
							index_1 += 1;
							tempFileLines3[0].insert(index_1, ":@");
							index_1 += 2;
							tempFileLines3[0].insert(index_1 + 3, title3 + ":@" + name3 + ":@" + post3 + ":@" + time_str22 + ":@;@");
						}
						else
						{
							cout << "cloning error occurred. Please check admin file and clone manualy. Console closing in few seconds";
							cout << "\r\n";
							system("PAUSE");
							break;//exiting main loop for program kill

						}

						// write the whole post array to file
						ofstream outFile22;
						outFile22.open(current_filename);

						int countClone = 0;

						// insert all the posts to the appropriate position
						for (int x = 0; x < 257; x++)
						{
							// Remove NULL characters before writing
							tempFileLines[x].erase(std::remove(tempFileLines[x].begin(), tempFileLines[x].end(), '\0'), tempFileLines[x].end());
							outFile22 << tempFileLines3[x];
												
							if (strcmp(tempFileLines3[x].c_str(), "") != 0)
							{
								countClone++;
							}						

							outFile22 << "\n";
						}

						outFile22.close();
						ofstream outfile5;
						outfile5.open("BulletinData.txt", ios::out);

						string ss = std::to_string(countClone);

						outfile5 << ss;
						outfile5.close();

						//getFile2();

						//strOutData.assign(500000, 'a');
						//strOutData.clear();
						/*
						for (int x = 0; x < 5000, x++;)
						{
							input2[x] = '/0';
						}
						*/
					}
					else // this section is usually used by commenting.  Usually comments does not go over 64 comments.
					{
						int commentPositionToInsert = 0;
						string indexstring;
						indexstring.assign('a', 3);
						indexstring.clear();
						indexstring.resize(3);

						globalcounter = 0;

						for (int x = 0; x < 257; x++)
						{
							tempFileLines[x].assign(5000, 'a');
							tempFileLines[x].clear();
							// tempFileLines2[x].resize(5000);
						}
						for (int x = 0; x < 257; x++)
						{
							tempFileLines2[x].assign(5000, 'a');
							tempFileLines2[x].clear();
							// tempFileLines2[x].resize(5000);
						}

						// find the array position by looking at each array's post number
						for (int x = 0; x < 257; x++)
						{
							try
							{
								string indexSubstr;
								indexSubstr.assign('a', 3);
								indexSubstr.clear();
								indexSubstr += (tempFileLines3[x].substr(0, 2));
								int currentNumber = std::stoi(indexSubstr);
								globalcounter++;
								if (std::stoi(postNum2) == currentNumber)
								{
									array_index = x;
									break;
								}
							}
							catch (const std::exception& e)
							{
								// std::cout << "Error counting array: " << e.what() << std::endl;
							}
						}

						int index_2 = 0;

						// new node
						if (std::stoi(commentNumber2.c_str()) == 0)
						{
							_GetComments(_heading);
							numberOfComments =_getNumComments(_heading, std::stoi(postNum2));  // this function rlies on _GetComments function
							// insert the commented post to the appropriate position
							std::size_t temp13 = tempFileLines3[array_index].find(":@", 0); // insert the first comment at the end position
							index_2 = temp13;
							std::size_t temp63 = tempFileLines3[array_index].find(":@", index_2 + 2);
							index_2 = temp63;
							std::size_t temp64 = tempFileLines3[array_index].find(":@", index_2 + 2);
							index_2 = temp64;
							std::size_t temp65 = tempFileLines3[array_index].find(":@", index_2 + 2);
							index_2 = temp65;
							std::size_t temp66 = tempFileLines3[array_index].find(":@", index_2 + 2);
							index_2 = temp66;

							std::string time_str24;
							time_str24.assign(30, 'a'); // Assign 30 'a' characters to the string
							time_str24.clear();			// Erase the content of the string
							time_str24.resize(30);

							time_t now = time(0); // Get the current time
							struct tm tstruct;
							localtime_s(&tstruct, &now); // Convert to local time structure

							char buf[80];
							strftime(buf, sizeof(buf), "%Y/%m/%d.%X", &tstruct); // Format the time
							time_str24 = (buf);									 // Append the formatted time to the string

							int temp_index2 = numberOfComments; //accounting that the data file is filled comments.  Can adjust to 47 in the function (both _GetComments and _getNumComments).
							std::string s10 = std::to_string(temp_index2);

							// skip dlilimiter
							index_2 += 2;
							tempFileLines3[array_index].insert(index_2, s10);
							index_2 += s10.length();
							tempFileLines3[array_index].insert(index_2, ":@");
							index_2 += 2;
							tempFileLines3[array_index].insert(index_2, title3 + ":@" + name3 + ":@" + post3 + ":@" + time_str24 + ":@");
							// write the whole post array to file
							ofstream outFile;
							outFile.open(current_filename);

							// int index4 = index;

							// insert all the posts to the appropriate position
							for (int x = 0; x < 257; x++)
							{
								// Remove NULL characters before writing
								tempFileLines3[x].erase(std::remove(tempFileLines3[x].begin(), tempFileLines3[x].end(), '\0'), tempFileLines3[x].end());
								outFile << tempFileLines3[x];
								outFile << "\n"; // Add a newline explicitly
							}
							outFile.close();
						}
						else if (stoi(commentNumber2.c_str()) >= 0 && stoi(commentNumber2.c_str()) <= 64) // checked the number before so this if statement is not needed
						{
							int commentPositionToInsert = 0;

							_GetComments(_heading);
							_getNumComments(_heading, stoi(postNum2.c_str()));  //this function relies on _GetComments function

							if (isNumber(commentNumber2))
							{
								commentPositionToInsert = stoi(commentNumber2.c_str());
							}
							else
							{
								std::cout << "error in program, exiting.... sorry";
								break;
							}

							int finalCommentNum = 1;
							numPosts = 0;
							
							for (int x = 0; strcmp(commentArray[x].c_str(), "") != 0; x++)
							{
								finalCommentNum++;
							}

							std::string time_str23;
							time_str23.assign(30, 'a'); // Assign 30 'a' characters to the string
							time_str23.clear();			// Erase the content of the string
							time_str23.resize(30);

							time_t now = time(0); // Get the current time
							struct tm tstruct;
							localtime_s(&tstruct, &now); // Convert to local time structure

							char buf[80];
							strftime(buf, sizeof(buf), "%Y/%m/%d.%X", &tstruct); // Format the time
							time_str23 = (buf);									 // Append the formatted time to the string

							finalCommentNum++;

							int index_3 = 0;
							int index = 0;

							NumberOfComments++; // this should be set in getfile2() function.

							std::string s9 = std::to_string(finalCommentNum);

							// find the comment array position where the comment posted want's to post
							int number2 = 0;
							number2 = stoi(commentNumber2.c_str());
							int tempInt = 0;

							for (int x = 0; x < 64; x++)
							{
								temp.assign(200, 'a');
								temp.clear();
								temp += commentArray[x].at(0);
								temp += commentArray[x].at(1);

								tempInt = stoi(temp.c_str());

								if (number2 == tempInt)
								{
									number2 = x;
									break;
								}
							}

							std::size_t temp21 = tempFileLines3[array_index].find(commentArray[number2]); // find comment in post and find insertion point
							index = temp21;
							std::size_t temp17 = tempFileLines3[array_index].find(":@", index + 2);
							index = temp17;
							std::size_t temp18 = tempFileLines3[array_index].find(":@", index + 2);
							index = temp18;
							std::size_t temp19 = tempFileLines3[array_index].find(":@", index + 2);
							index = temp19;
							std::size_t temp20 = tempFileLines3[array_index].find(":@", index + 2);
							index = temp20;

							tempFileLines3[array_index].insert(index + 2, s9); // index should be comment insertion point
							tempFileLines3[array_index].insert(index + 2 + s9.length(), ":@");
							tempFileLines3[array_index].insert(index + 2 + s9.length() + 2, title3 + ":@" + name3 + ":@" + post3 + ":@" + time_str23 + ":@");

							// write the whole post array to file
							ofstream outFile;
							outFile.open(current_filename);

							// int index4 = index;

							// insert all the posts to the appropriate position
							for (int x = 0; x < 257; x++)
							{
								tempFileLines[x] += (tempFileLines3[x]);

								// Remove NULL characters before writing
								tempFileLines[x].erase(std::remove(tempFileLines[x].begin(), tempFileLines[x].end(), '\0'), tempFileLines[x].end());
								outFile << tempFileLines[x];
								outFile << "\n"; // Add a newline explicitly
							}
							outFile.close();
						}

						getFile2(); // reread from file for other purposes
					}

					// strOutData.assign(500000, 'a');
					strOutData.clear();

					for (int x = 0; x < 5000, x++;)
					{
						input2[x] = '/0';
					}

					std::cout << ("enter y to post, n to comment(0 to exit loop):");
					std::cin.clear();
					std::cin.getline(input2, 50);

					input.assign(500, 'a');
					input.clear();
					input.resize(500);

					count_input = 0;
					for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
					{
						count_input++;
					}
					input.assign(input2, count_input);
				}
			}
		}
		else if (strcmp(input.c_str(), "list") == 0)
		{
			std::cin.clear();
			for (int x = 0; x <= 256; x++)
			{
				listString[x].assign(2000, 'a');
				listString[x].clear();
				listString[x].resize(2000);
			}

			// reread from file for other purposes
			file.clear();
			// file.resize(50000000);
			file += getFile2();

			for (int x = 0; x < file.length(); x++)
			{
				temp244[x] = file.at(x);
			}

			// ListPost();
			temp = listPost(); // stack overflow??

			FormatDelim* obj = new FormatDelim(":@");

			for (int x = 0; x < 257 && strcmp(listString[x].c_str(), "") != 0 && numberOfPosts <= x; x++)
			{
				listString[x] = listString[x].substr(0, listString[x].length()); // Use substr to ensure modification.
				std::cout << (obj->set(listString[x].c_str()));
				std::cout << ("\r\n");
			}

			delete obj;

			// std::cout << strOutData.c_str();
			// input.clear();
			input.assign(200, 'a');
			input.clear();
			input.resize(200);

			// strOutData.assign(500000, 'a');
			// strOutData.clear();
			std::cin.clear();
			std::cout << ("enter y to post, n to comment(0 to exit loop):");
			for (int x = 0; x < 5000, x++;)
			{
				input2[x] = '/0';
			}
			std::cin.getline(input2, 50);
			count_input = 0;

			input.assign(500, 'a');
			input.clear();
			input.resize(500);

			for (int x = 0; input2[x] != 0; x++) // there seems to be an array allocation problem here
			{
				input.at(x) = input2[x];
				count_input++;
			}
			input.assign(input2, count_input);
		}
		else if (strcmp(input.c_str(), "get") == 0)
		{
			getFile2();

			std::cout << "enter post number to get for simple reading";
			std::cout << "\n";
			std::cin.clear();
			std::cout << "\r\n";
			std::cout << ("enter post number: ");
			std::cin.getline(postNumChar, 50, '\n');
			std::cin.clear();
			for (int x = 0; postNumChar[x] != '\0'; x++)
			{
				count_input++;
			}
			postNum2.assign(postNumChar, count_input);

			if (!isNumber(postNum2))
			{
				std::cout << "please enter number between 1-256...." << "\r\n";
				std::cout << ("enter y to post, n to comment(0 to exit loop): ");
				for (int x = 0; x < 5000, x++;)
				{
					input2[x] = '/0';
				}
				std::cin.getline(input2, 50);
				count_input = 0;

				input.assign(500, 'a');
				input.clear();
				input.resize(500);

				for (int x = 0; input2[x] != 0; x++) // there seems to be an array allocation problem here
				{
					input.at(x) = input2[x];
					count_input++;
				}
				input.assign(input2, count_input);
			}
			else
			{
				_heading = stoi(postNum2);

				if (_heading == 0)
				{
					_heading++;
				}

				temp = tempFileLines3[numPosts - _heading];

				if (!isNumber(postNum2) && (_heading < 0 || _heading >= 256 || temp == "POST_NOT_FOUND"))
				{
					std::cout << "post number out of range, please restart program";
					std::cout << "\r\n";
					break;
				}

				temp = stoi(postNum2.c_str());

				if (strcmp(temp.c_str(), "FIRST_COMMENT") == 0)
				{
					std::cout << "there are no comments to get";
					std::cout << "\r\n";
					break;
				}

				temp = _GetPost(_heading);
				std::cout << temp << "\r\n";

				std::cout << ("enter y to post, n to comment(0 to exit loop):");
				for (int x = 0; x < 5000, x++;)
				{
					input2[x] = '/0';
				}
				std::cin.getline(input2, 50);
				count_input = 0;

				input.assign(500, 'a');
				input.clear();
				input.resize(500);

				for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
				{
					input.at(x) = input2[x];
					count_input++;
				}
				input.assign(input2, count_input);
			}
		}
		else if (strcmp(input.c_str(), "?") == 0)
		{
			std::cout << "y      :post a new post" << "\r\n";
			std::cout << "n      :comment on a post" << "\r\n";
			std::cout << "list   :lists all posts with only the post content" << "\r\n";
			std::cout << "get    :read all content of a post as is" << "\r\n";
			std::cout << "exit   :closes the program" << "\r\n";
			std::cout << "0(zero):closes the program" << "\r\n";
			std::cout << "read   :enters reading mode" << "\r\n";
			std::cout << "old    :displays archived files for reading" << "\r\n";
			std::cout << ("enter y to post, n to comment(0 to exit loop):");
			for (int x = 0; x < 5000, x++;)
			{
				input2[x] = '/0';
			}
			std::cin.getline(input2, 50);
			count_input = 0;

			input.assign(500, 'a');
			input.clear();
			input.resize(500);

			for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
			{
				input.at(x) = input2[x];
				count_input++;
			}
			input.assign(input2, count_input);
		}
		else if (strcmp(input.c_str(), "0") == 0)
		{
			break;
		}
		else if (strcmp(input.c_str(), "read") == 0)
		{
			getFile2();
			listPost();

			numPosts = 0;
			for (int x = 0; x < 257; x++)
			{
				if(strcmp(tempFileLines3[x].c_str(), "") != 0)
				{
					numPosts++;
				}
				else
				{
					x = 258;
				}
			}

			// set comment global variable for read only
			commentNumber3 = 1;

			if (!master_post)
			{
				std::cout << "enter post number to start reading";
				std::cout << "\n";
				std::cin.clear();
				std::cout << "\r\n";
				std::cout << ("enter post number: ");
				std::cin.getline(postNumChar, 50, '\n');

				for (int x = 0; postNumChar[x] != '\0'; x++)
				{
					count_input++;
				}
				postNum2.assign(50, 'a');
				postNum2.clear();
				postNum2.resize(50);
				postNum2.assign(postNumChar, count_input);

				input.assign(500, 'a');
				input.clear();
				input.resize(500);
				input.assign(postNum2);

				master_postNum = stoi(input);

				temp = _GetPost(master_postNum);
				_GetComments(master_postNum);

				if (master_postNum < 0 || master_postNum >= 256 || temp.empty())
				{
					std::cout << "post number out of range check using 'list' command";
					std::cout << "\r\n";

					input.assign(500, 'a');
					input.clear();
					// input.resize(500);
					input = ("read");
				}
				else
				{
					getFile2();
					listPost();
					int y = 0;
					int arrayPos = 0;
					for (int x = 0; x < 64; x++)
					{
						std::size_t pos2 = listString[x].find(":@");
						if (pos2 == std::string::npos)
						{
							break;
						}
						else
						{
							arrayPos = stoi(listString[x].substr(0, 2).c_str());
							if (master_postNum == arrayPos)
							{
								arrayPos = x;
								y++;
								break;
							}
							else
							{
								y++;
							}
						}
					}
					numPosts = y;

					FormatDelim* obj = new FormatDelim(":@");

					std::cout << temp;
					std::cout << "\r\n";

					std::cout << "-----------------------------------------------" << "\r\n";

					std::cout << obj->set(listString[arrayPos]);
					std::cout << "\r\n";
					std::cout << "-----------------------------------------------" << "\r\n";

					baseIndex = 0; // set global variable

					_GetComments(master_postNum);
					Comments();

					for (int x = 0; x < numberOfComments && strcmp(baseArray[x].c_str(), "") != 0; x++)
					{
						std::cout << obj->set(baseArray[x]);
						std::cout << "\r\n";
					}
					delete obj;

					master_post = true;
					_heading = master_postNum;

					input.assign(500, 'a');
					input.clear();
					// input.resize(500);
					input = ("read");
				}
			}
			else
			{
				std::cout << "enter post number ('finish' to end reading): "; // waitForKeyPress();
				std::cin.getline(postNumChar, 50);
				// master_post = true;

				for (int x = 0; postNumChar[x] != '\0'; x++)
				{
					count_input++;
				}
				postNum2.assign(postNumChar, count_input);

				// input.clear();

				input.assign(500, 'a');
				input.clear();
				// input.resize(500);
				input += (postNum2);

				if (!isNumber(input) && strcmp(input.c_str(), "finish") != 0)
				{
					try
					{
						counter = stoi(postNum2);
					}
					catch (const std::invalid_argument& e)
					{
						std::cerr << "Invalid argument: " << e.what() << std::endl;
					}
					catch (const std::out_of_range& e)
					{
						std::cerr << "Out of range: " << e.what() << std::endl;
					}

					std::cout << "please enter a number between 1-64.... (enter 'finish' to exit)" << "\r\n";
					// input.clear();
					input.assign(500, 'a');
					input.clear();
					// input.resize(500);
					input += ("read");
					// master_post = true;
				}
				else if (strcmp(input.c_str(), "finish") != 0)
				{
					temp = _GetComments(master_postNum);

					if (strcmp(temp.c_str(), "COMMENT_NOT_FOUND") == 0)
					{
						std::cout << "comment number not found, please enter number on the screen" << "\r\n";
						input.assign(500, 'a');
						input.clear();
						// input.resize(500);
						input += ("read");
					}
					else
					{
						try
						{
							master_commentNum = stoi(postNum2);
						}
						catch (const std::invalid_argument& e)
						{
							std::cerr << "Invalid argument: " << e.what() << std::endl;

							input.assign(500, 'a');
							input.clear();
							// input.resize(500);
							input += ("read");
						}
						catch (const std::out_of_range& e)
						{
							std::cerr << "Out of range: " << e.what() << std::endl;

							input.assign(500, 'a');
							input.clear();
							// input.resize(500);
							input += ("read");
						}

						if (master_postNum == 0)
						{
							master_postNum++;
						}

						getFile2();
						_GetComments(master_postNum);

						temp = _GetPost(master_postNum);

						int y = 0;
						int arrayPos = 0;
						for (int x = 0; x < 64; x++)
						{
							std::size_t pos2 = listString[x].find(":@");
							if (master_postNum == arrayPos)
							{
								arrayPos = x;
								y++;
								break;
							}
							else
							{
								y++;
							}
						}
						numPosts = y;

						std::cout << temp << "\r\n";

						FormatDelim* obj = new FormatDelim(":@");

						std::cout << "-----------------------------------------------" << "\r\n";
						listPost();
						std::cout << obj->set(listString[arrayPos]);

						std::cout << "-----------------------------------------------" << "\r\n";

						baseIndex = 0; // set global variable
						Comments();

						for (int x = 0; x < numberOfComments && strcmp(baseArray[x].c_str(), "") != 0; x++)
						{
							std::cout << obj->set(baseArray[x]);
							std::cout << "\r\n";
						}
						delete obj;

						std::cout << "enter comment number ('finish' to end reading): "; // waitForKeyPress();
						for (int x = 0; x < 5000, x++;)
						{
							input2[x] = '/0';
						}
						std::cin.getline(input2, 50);
						count_input = 0;
						input.assign(500, 'a');
						input.clear();
						input.resize(500);

						for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
						{
							count_input++;
						}

						input.assign(input2, count_input);

						baseIndex = 0;

						// need to implement the 'n' command here just set to input = "n" and break?
						if (strcmp(input.c_str(), "0") == 0)
						{
							input.assign(500, 'a');
							input.clear();
							// input.resize(500);
							input += ("0");
						}
						else if (strcmp(input.c_str(), "finish") != 0 && strcmp(input.c_str(), "n") != 0)
						{
							input.assign(500, 'a');
							input.clear();
							// input.resize(500);
							input += ("read");
						}
						else if (strcmp(input.c_str(), "n") == 0)
						{
							input.assign(500, 'a');
							input.clear();
							// input.resize(500);
							input += ("n");
							master_post = false;
							commentNumber3 = 0; // set the global variable for posting (default)
						}
						else if (isNumber(input))
						{
							if (stoi(input) > numberOfComments)
							{
								std::cout << "comment number out of range: please retry" << "\r\n";
								input.assign(500, 'a');
								input.clear();
								input.resize(500);
								input.assign("read");
							}
							else
							{

								// enter index here for comment displaying using Comments() function
								temp = _GetPost(master_postNum); // temporary output, Comments() function should set baseArray[]
								int y = 0;
								int arrayPos = 0;
								for (int x = 0; x < 64; x++)
								{
									std::size_t pos2 = listString[x].find(":@");
									if (master_postNum == arrayPos)
									{
										arrayPos = x;
										y++;
										break;
									}
									else
									{
										y++;
									}
								}
								numPosts = y;

								FormatDelim* obj = new FormatDelim(":@");

								std::cout << temp << "\r\n";
								std::cout << "-----------------------------------------------" << "\r\n";

								listPost();
								std::cout << obj->set(listString[arrayPos]);

								std::cout << "-----------------------------------------------" << "\r\n";

								baseIndex = 0;
								Comments();

								for (int x = 0; x < numberOfComments; x++)
								{
									std::cout << obj->set(baseArray[x]);
									std::cout << "\r\n";
								}
								delete obj;
								master_commentNum = stoi(input);
								baseIndex = stoi(input.c_str());
								input.assign(500, 'a');
								input.clear();
								input.resize(500);
								input.assign("read");
							}
						}
						else if (strcmp(input.c_str(), "finish") == 0)
						{
							master_postNum = 0;
							master_post = false;
						}
						else
						{
							std::cout << "wrong command entered, returning" << "\r\n";
							input.assign(500, 'a');
							input.clear();
							// input.resize(500);
							input += ("read");
							master_postNum = 0;
							master_post == false;
						}
					}
				}
				else if (strcmp(input.c_str(), "finish") == 0)
				{
					// master_post = false;
					std::cout << ("enter y to post, n to comment(0 to exit loop):");
					for (int x = 0; x < 5000, x++;)
					{
						input2[x] = '/0';
					}
					std::cin.getline(input2, 50);
					count_input = 0;
					input.assign(500, 'a');
					input.clear();
					input.resize(500);
					for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
					{
						count_input++;
					}
					input.assign(input2, count_input);
				}
				else
				{
					cout << "command entered is wrong.  Restarting.";
					input.assign(500, 'a');
					input.clear();
					// input.resize(500);
					input += ("read");
				}
			}
		}
		else if (strcmp(input.c_str(), "finish") == 0)
		{
			master_post == false;
			std::cout << ("enter y to post, n to comment(0 to exit loop):");
			for (int x = 0; x < 5000, x++;)
			{
				input2[x] = '/0';
			}
			std::cin.getline(input2, 50);
			count_input = 0;

			input.assign(500, 'a');
			input.clear();
			input.resize(500);

			for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
			{
				count_input++;
			}
			input.assign(input2, count_input);
		}
		else if (strcmp(input.c_str(), "old") == 0)
		{
			string oldFileNum;
			oldFileNum.assign('a', 4);
			oldFileNum.clear();
			oldFileNum.resize(4);
			int y = 0;

			for (int x = 0; strcmp(fileOldNames[x].c_str(), "") != 0; x++)
			{
				oldFileNum = std::to_string(y); // Convert x to string;
				if (strcmp(fileOldNames[x].c_str(), "") != 0)  //just to check for manual eracing of old file names from file
				{
					std::cout << oldFileNum + " " + fileOldNames[x] + "\r\n";
					y = x + 1;
				}
			}

			if (fileOldNames[y].length() <= 0)
			{
				std::cout << "nothing archived" << "\r\n";
			}
			else
			{

				std::cout << "enter file number: ";
				std::cout << "\n";
				std::cin.getline(postNumChar, 50, '\n');

				for (int x = 0; postNumChar[x] != '\0'; x++)
				{
					count_input++;
				}
				postNum2.assign(postNumChar, count_input);
			}

			if (!isNumber(postNum2))
			{
				try
				{
					fileOldNames[stoi(postNum2)].find(":");
				}
				catch (exception e)
				{
					std::cout << "please enter a number within the given range.";
					input.assign(500, 'a');
					input.clear();
					input.resize(500);
					input.assign("finish");
					master_post == true;
				}
			}
			else
			{
				try
				{
					current_filename.assign(50, 'a');
					current_filename.clear();
					current_filename.resize(50);
					current_filename.assign(fileOldNames[stoi(postNum2)]);
				}
				catch (exception e)
				{
					std::cout << "Error reading old post exiting (error in program)";

					input.assign(500, 'a');
					input.clear();
					input.resize(500);
					input.assign("exit");
				}
			}

			wifstream infile44;
			//infile44.imbue(std::locale("C.UTF-8"));

			try
			{
				infile44.open(current_filename, std::ios::in);
				if (!infile44.is_open())
				{
					throw std::ios_base::failure("File not found, exiting program.");
					break;
				}
			}
			catch (const std::ios_base::failure& e)
			{
				// do nothing
			}

			std::cout << ("enter y to post, n to comment(0 to exit loop):");
			for (int x = 0; x < 5000, x++;)
			{
				input2[x] = '/0';
			}
			std::cin.getline(input2, 50);
			count_input = 0;

			input.assign(500, 'a');
			input.clear();
			input.resize(500);
			for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
			{
				count_input++;
			}
			input.assign(input2, count_input);
		}
		else if (strcmp(input.c_str(), "exit") == 0)
		{
			break;
		}
		else if (strcmp(input.c_str(), "0") == 0)
		{
			break;
		}
		else // all other inputs are caught here, can add more else if statements for more commands.
		{

			std::cout << ("command not recognized, try '?'. enter y to post, n to comment(0 to exit loop):");
			for (int x = 0; x < 5000, x++;)
			{
				input2[x] = '/0';
			}
			std::cin.getline(input2, 50);
			count_input = 0;

			input.assign(500, 'a');
			input.clear();
			input.resize(500);

			for (int x = 0; input2[x] != '\0'; x++) // there seems to be an array allocation problem here
			{
				count_input++;
			}
			input.assign(input2, count_input);
		}
	}
}
// system("PAUSE");
// cout <<  output;
// cout << ("nothing is being read from the file");

// outputFinalHtml(juggerknot);
