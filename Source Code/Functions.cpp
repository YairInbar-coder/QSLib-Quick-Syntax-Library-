#include "pch.h"
#include "framework.h"
#include <iostream>
#include <random>
#include <string>

void print1(std::string in1) {
	std::cout << in1 << std::endl;
}
void print2(std::string in1, std::string in2) {
	std::cout << in1 << in2 << std::endl;
}
void print3(std::string in1, std::string in2, std::string in3) {
	std::cout << in1 << in2 << in3 << std::endl;
}
void print4(std::string in1, std::string in2, std::string in3, std::string in4) {
	std::cout << in1 << in2 << in3 << in4 << std::endl;
}
void print5(std::string in1, std::string in2, std::string in3, std::string in4, std::string in5) {
	std::cout << in1 << in2 << in3 << in4 << in5 << std::endl;
}
int randInt(int min, int max) {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(min, max);
	return dist(gen);
}
float randFloat(float min, float max) {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_real_distribution<float> dist(min, max);
	return dist(gen);
}
bool randBool() {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::bernoulli_distribution dist(0.5);
	return dist(gen);
}
void getInt() {
	int in;
	std::cin >> in;
}
void getStr(std::string in) {
	getline(std::cin, in);
}
void getChar(char& in) {
	std::cin >> in;
}
void getFloat(float& in) {
	std::cin >> in;
}
template <typename var>
int toInt(var& in) {
	return ToInt(in);
}
template <typename var>
std::string toStr(var& in) {
	return std::to_string(in);
}
template <typename var>
char toChar(var& in) {
	return ToChar(in);
}
template <typename var>
float toFloat(var& in) {
	return ToFloat(in);
}
