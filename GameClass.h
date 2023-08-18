#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class wordAndMeaning {
public:
	std::string word;
	std::string extrameaning;
	std::string meaning;
	int index, wordIndex, trials;
	int wordSize;
	wordAndMeaning();
};
class player {
public:
	std::string name;
	int score;
	player();

};

class gameclass {
	vector<player> players;
	player playerObject;
	int count;
	std::unordered_map<int, std::vector<wordAndMeaning >> GameMap;
	std::unordered_map<int, std::vector<wordAndMeaning >>::iterator it;
	std::vector<wordAndMeaning> Vec;
	int LastIndex; // last used word and meaning
	//std::vector<player> players;
	wordAndMeaning Package;
	//player playerObject;
public:
	gameclass();
	//game system----------------------------------------------------------;
	void input();
	void ReadFromFiles();
	int getter(int key, int c);
	void GetIndex(int key, int c);
	std::string WordOut(int key, int c);
	std::string MeaningOut(int key, int c);
	vector<int> check(string s, char c);
	void Print();
	//player info and leaderboard forming----------------------------------;
	void getName();
	void putInFile();
	void getData();
	void print();//test code
	void update();
};