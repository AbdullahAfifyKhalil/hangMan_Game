#include "gameclass.h"
#include<string>
#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
using namespace std;
fstream FileIn;
fstream lBoard, c2;
ofstream lBoardOut, c1;
wordAndMeaning::wordAndMeaning() {
	wordIndex = 0;
	index = 0;
	trials = 6;
	wordSize = 0;
}
player::player() {
	name = "0";
	score = 0;
}
gameclass::gameclass()
{
	count = 0;
}
void gameclass::input() {
	for (int i = 0; i < 10; i++) {
		getline(FileIn, Package.word);
		getline(FileIn, Package.meaning);
		Package.index = i + 1;
		Vec.push_back(Package);
	}
}
void gameclass::ReadFromFiles() {
	for (int i = 1; i <= 10; i++) {
		switch (i) {
		case 1:
			FileIn.open("file/Countries.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 2:
			FileIn.open("file/Movies.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 3:
			FileIn.open("file/Music.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 4:
			FileIn.open("file/Jobs.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 5:
			FileIn.open("file/Brands.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 6:
			FileIn.open("file/Food.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 7:
			FileIn.open("file/TvShows.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 8:
			FileIn.open("file/Celebrities.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 9:
			FileIn.open("file/sites.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		case 10:
			FileIn.open("file/Sports.txt", ios::in);
			input();
			GameMap.insert(make_pair(i, Vec));
			Vec.clear();
			FileIn.close();
			break;
		}
	}
}
void gameclass::Print() {
	for (it = GameMap.begin(); it != GameMap.end(); it++) {
		cout << it->first << endl;
		for (int i = 0; i < 10; i++) {
			cout << it->second[i].word << endl << it->second[i].meaning << endl;
		}
	}
}
int gameclass::getter(int key, int c) {
	it = GameMap.find(key);
	for (int i = 0; i < 10; i++) {
		if (it->second[i].index == c) {
			//numOfLetters(i);
			//Package.wordIndex = i;
			return it->second[i].index;
		}
	}
	return 0;
}
void gameclass::GetIndex(int key, int c) {
	LastIndex = getter(key, c);
}
string gameclass::WordOut(int key, int c) {
	it = GameMap.find(key);
	if (LastIndex) {
		it->second[LastIndex].index = -1;
		return it->second[LastIndex].word;
	}
}
string gameclass::MeaningOut(int key, int c) {
	it = GameMap.find(key);
	if (LastIndex) {
		it->second[LastIndex].index = -1;
		return it->second[LastIndex].meaning;
	}
}
vector<int> gameclass::check(string s, char c){
	int n = s.size();
	vector<int>v;
	for (int i = 0; i < n;i++) {
		if (s[i] == c)
		{
			v.push_back(i);
		}
		else
		{
			continue;
		}
	}
	return v;
}
void gameclass::getName() {
	cout << "enter your name : ";
	cin >> playerObject.name;
	//cin >> playerObject.score;//test
	count += 1;
}
void gameclass::putInFile() {
	c1.open("count.txt", ios::trunc);
	c1 << count;
	c1.close();
	lBoardOut.open("leaderBoard.txt", ios::app);
	lBoardOut << playerObject.name << " " << playerObject.score << endl;
	lBoardOut.close();
}
void gameclass::getData() {
	c2.open("count.txt", ios::in);
	c2 >> count;
	c2.close();
	lBoard.open("leaderBoard.txt", ios::in);
	for (int i = 0; i < count; i++) {
		lBoard >> playerObject.name >> playerObject.score;
		players.push_back(playerObject);
	}
	lBoard.close();
}
void gameclass::update() {
	getData();
	player tmp;
	for (int i = 0; i < count; i++) {
		for (int j = i; j < count; j++) {
			if (players[i].score < players[j].score) {
				tmp = players[i];
				players[i] = players[j];
				players[j] = tmp;
			}
		}
	}
	lBoardOut.open("leaderBoard.txt", ios::trunc);
	for (int i = 0; i < count; i++) {
		lBoardOut << players[i].name << " " << players[i].score << endl;
	}
	lBoardOut.close();
}
void gameclass::print() {
	for (int i = 0; i < count; i++) {
		cout << players[i].name << endl << players[i].score << endl;
	}
}