#pragma once
#include<iostream>
#include<experimental/filesystem>

namespace fs = std::experimental::filesystem;

class DirectoryParser {
private:
	std::string* _files;
	std::string _dirname;
public:
	DirectoryParser(const char* dirname) : _dirname(dirname) {
		for (const auto& entry : fs::directory_iterator(_dirname)) {
			std::cout << entry.path() << std::endl;
		}
	}

};
