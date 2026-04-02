#pragma once
#include <string>

namespace qs {
	void print1(std::string in1);
	void print2(std::string in1, std::string in2);
	void print3(std::string in1, std::string in2, std::string in3);
	void print4(std::string in1, std::string in2, std::string in3, std::string in4);
	void print5(std::string in1, std::string in2, std::string in3, std::string in4, std::string in5);
	int randInt(int min, int max);
	float randFloat(float min, float max);
	bool randBool();
	void getInt(int in);
	void getStr(std::string in);
	void getChar(char in);
	void getFloat(float in);
	template <typename var>
	int toInt(var in);
	template <typename var>
	std::string toStr(var in);
	template <typename var>
	char toChar(var in);
	template <typename var>
	float toFloat(var& in);
}