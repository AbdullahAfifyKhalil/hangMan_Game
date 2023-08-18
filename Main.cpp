#include <iostream>
#include <string>
#include <ctime>
#include"gameclass.h"
#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
using namespace std;
using namespace sf;

int main() {
	Music music;
	SoundBuffer	buffer1, buffer2, buffer3, buffer4, buffer5;
	Sound Click, Right, Wrong, TaDa, Loser;

	music.openFromFile(("music/Viva la vida INST.ogg"));
	buffer1.loadFromFile(("music/Click.ogg"));
	buffer2.loadFromFile(("music/right.ogg"));
	buffer3.loadFromFile(("music/wrong.ogg"));
	buffer4.loadFromFile(("music/Ta Da.ogg"));
	buffer5.loadFromFile(("music/Loser.ogg"));

	Click.setBuffer(buffer1);
	Right.setBuffer(buffer2);
	Wrong.setBuffer(buffer3);
	TaDa.setBuffer(buffer4);
	Loser.setBuffer(buffer5);

	srand(time(NULL));
	gameclass DictionaryGame;
	DictionaryGame.ReadFromFiles();
	String Word, Meaning;

	RenderWindow window(VideoMode(1366, 768), "Dictionary Game", Style::Fullscreen);

	// EnteringName declaration
	Texture Enternametext;
	Enternametext.loadFromFile("your name.jpg");//your name jpg
	Sprite Enternamesprit;
	Enternamesprit.setTexture(Enternametext);

	// homepage declaration
	Texture homepagetext;
	homepagetext.loadFromFile("Wallpaper/homepage.jpg");
	Sprite homepagesprit;
	homepagesprit.setTexture(homepagetext);

	// start declaration
	Texture Starttext;
	Starttext.loadFromFile("Wallpaper/start.jpg");
	Sprite startsprit;
	startsprit.setTexture(Starttext);

	// option declaration
	Texture optiontext;
	optiontext.loadFromFile("Wallpaper/option.jpg");
	Sprite optionsprit;
	optionsprit.setTexture(optiontext);

	// 2players(bluetooth - network) declaration
	Texture twoplayerstext;
	twoplayerstext.loadFromFile("Wallpaper/2players.jpg");
	Sprite twoplayerssprit;
	twoplayerssprit.setTexture(twoplayerstext);

	// winning declaration
	Texture winningtext;
	winningtext.loadFromFile("Wallpaper/Winning.jpg");
	Sprite winningsprit;
	winningsprit.setTexture(winningtext);

	// loseing declaration
	Texture Losingtext;
	Losingtext.loadFromFile("Wallpaper/Losing.jpg");
	Sprite losingsprit;
	losingsprit.setTexture(Losingtext);

	// MainGame declaration
	Texture maingametext;
	maingametext.loadFromFile("Wallpaper/maingame.jpg"); // main game file
	Sprite maingamesprit;
	maingamesprit.setTexture(maingametext);

	// Catagrories declaration
	Texture Catagroriestext;
	Catagroriestext.loadFromFile("Wallpaper/catagrories.jpg");
	Sprite Catagroriessprit;
	Catagroriessprit.setTexture(Catagroriestext);

	//process of the game
	Texture Processtext;
	Processtext.loadFromFile("Wallpaper/process.png");
	Sprite processsprit;
	processsprit.setTexture(Processtext);

	//Leaderbored
	Texture Leadertext;
	Leadertext.loadFromFile("Wallpaper/leaderbored.jpg");
	Sprite LeaderSprite;
	LeaderSprite.setTexture(Leadertext);

	//first row..........
	//A...................
	Texture Atext;
	Atext.loadFromFile("Normal/A.png");
	Sprite Asprit;
	Asprit.setPosition(35.0f, 450.0f);
	Asprit.setScale(.5f, .5f);
	float A_ButtonWidth = Asprit.getLocalBounds().width;
	float A_ButtonHeight = Asprit.getLocalBounds().height;
	Asprit.setTexture(Atext);
	Atext.setSmooth(true);

	//B...................
	Texture Btext;
	Btext.loadFromFile("Normal/B.png");
	Sprite Bsprit;
	Bsprit.setPosition(115.0f, 450.0f);
	Bsprit.setScale(.5f, .5f);
	float B_ButtonWidth = Bsprit.getLocalBounds().width;
	float B_ButtonHeight = Bsprit.getLocalBounds().height;
	Bsprit.setTexture(Btext);
	Btext.setSmooth(true);

	//C...................
	Texture Ctext;
	Ctext.loadFromFile("Normal/C.png");
	Sprite Csprit;
	Csprit.setPosition(195.0f, 450.0f);
	Csprit.setScale(.5f, .5f);
	float C_ButtonWidth = Csprit.getLocalBounds().width;
	float C_ButtonHeight = Csprit.getLocalBounds().height;
	Csprit.setTexture(Ctext);
	Ctext.setSmooth(true);

	//D...................
	Texture Dtext;
	Dtext.loadFromFile("Normal/D.png");
	Sprite Dsprit;
	Dsprit.setPosition(275.0f, 450.0f);
	Dsprit.setScale(.5f, .5f);
	float D_ButtonWidth = Dsprit.getLocalBounds().width;
	float D_ButtonHeight = Dsprit.getLocalBounds().height;
	Dsprit.setTexture(Dtext);
	Dtext.setSmooth(true);

	//E...................
	Texture Etext;
	Etext.loadFromFile("Normal/E.png");
	Sprite Esprit;
	Esprit.setPosition(355.0f, 450.0f);
	Esprit.setScale(.5f, .5f);
	float E_ButtonWidth = Esprit.getLocalBounds().width;
	float E_ButtonHeight = Esprit.getLocalBounds().height;
	Esprit.setTexture(Etext);
	Etext.setSmooth(true);

	//F...................
	Texture Ftext;
	Ftext.loadFromFile("Normal/F.png");
	Sprite Fsprit;
	Fsprit.setPosition(435.0f, 450.0f);
	Fsprit.setScale(.5f, .5f);
	float F_ButtonWidth = Fsprit.getLocalBounds().width;
	float F_ButtonHeight = Fsprit.getLocalBounds().height;
	Fsprit.setTexture(Ftext);
	Ftext.setSmooth(true);

	//G...................
	Texture Gtext;
	Gtext.loadFromFile("Normal/G.png");
	Sprite Gsprit;
	Gsprit.setPosition(515.0f, 450.0f);
	Gsprit.setScale(.5f, .5f);
	float G_ButtonWidth = Gsprit.getLocalBounds().width;
	float G_ButtonHeight = Gsprit.getLocalBounds().height;
	Gsprit.setTexture(Gtext);
	Gtext.setSmooth(true);

	//second row........
	//H...................
	Texture Htext;
	Htext.loadFromFile("Normal/H.png");
	Sprite Hsprit;
	Hsprit.setPosition(35.0f, 530.0f);
	Hsprit.setScale(.5f, .5f);
	float H_ButtonWidth = Hsprit.getLocalBounds().width;
	float H_ButtonHeight = Hsprit.getLocalBounds().height;
	Hsprit.setTexture(Htext);
	Htext.setSmooth(true);

	//I...................
	Texture Itext;
	Itext.loadFromFile("Normal/I.png");
	Sprite Isprit;
	Isprit.setPosition(115.0f, 530.0f);
	Isprit.setScale(.5f, .5f);
	float I_ButtonWidth = Isprit.getLocalBounds().width;
	float I_ButtonHeight = Isprit.getLocalBounds().height;
	Isprit.setTexture(Itext);
	Itext.setSmooth(true);

	//J...................
	Texture Jtext;
	Jtext.loadFromFile("Normal/J.png");
	Sprite Jsprit;
	Jsprit.setPosition(195.0f, 530.0f);
	Jsprit.setScale(.5f, .5f);
	float J_ButtonWidth = Jsprit.getLocalBounds().width;
	float J_ButtonHeight = Jsprit.getLocalBounds().height;
	Jsprit.setTexture(Jtext);
	Jtext.setSmooth(true);

	//K...................
	Texture Ktext;
	Ktext.loadFromFile("Normal/K.png");
	Sprite Ksprit;
	Ksprit.setPosition(275.0f, 530.0f);
	Ksprit.setScale(.5f, .5f);
	float K_ButtonWidth = Ksprit.getLocalBounds().width;
	float K_ButtonHeight = Ksprit.getLocalBounds().height;
	Ksprit.setTexture(Ktext);
	Ktext.setSmooth(true);

	//L...................
	Texture Ltext;
	Ltext.loadFromFile("Normal/L.png");
	Sprite Lsprit;
	Lsprit.setPosition(355.0f, 530.0f);
	Lsprit.setScale(.5f, .5f);
	float L_ButtonWidth = Lsprit.getLocalBounds().width;
	float L_ButtonHeight = Lsprit.getLocalBounds().height;
	Lsprit.setTexture(Ltext);
	Ltext.setSmooth(true);

	//M...................
	Texture Mtext;
	Mtext.loadFromFile("Normal/M.png");
	Sprite Msprit;
	Msprit.setPosition(435.0f, 530.0f);
	Msprit.setScale(.5f, .5f);
	float M_ButtonWidth = Msprit.getLocalBounds().width;
	float M_ButtonHeight = Msprit.getLocalBounds().height;
	Msprit.setTexture(Mtext);
	Mtext.setSmooth(true);

	//N...................
	Texture Ntext;
	Ntext.loadFromFile("Normal/N.png");
	Sprite Nsprit;
	Nsprit.setPosition(515.0f, 530.0f);
	Nsprit.setScale(.5f, .5f);
	float N_ButtonWidth = Nsprit.getLocalBounds().width;
	float N_ButtonHeight = Nsprit.getLocalBounds().height;
	Nsprit.setTexture(Ntext);
	Ntext.setSmooth(true);

	//Third row.........
	//O...................
	Texture Otext;
	Otext.loadFromFile("Normal/O.png");
	Sprite Osprit;
	Osprit.setPosition(35.0f, 610.0f);
	Osprit.setScale(.5f, .5f);
	float O_ButtonWidth = Osprit.getLocalBounds().width;
	float O_tButtonHeight = Osprit.getLocalBounds().height;
	Osprit.setTexture(Otext);
	Otext.setSmooth(true);

	//P...................
	Texture Ptext;
	Ptext.loadFromFile("Normal/P.png");
	Sprite Psprit;
	Psprit.setPosition(115.0f, 610.0f);
	Psprit.setScale(.5f, .5f);
	float P_ButtonWidth = Psprit.getLocalBounds().width;
	float P_ButtonHeight = Psprit.getLocalBounds().height;
	Psprit.setTexture(Ptext);
	Ptext.setSmooth(true);

	//Q...................
	Texture Qtext;
	Qtext.loadFromFile("Normal/Q.png");
	Sprite Qsprit;
	Qsprit.setPosition(195.0f, 610.0f);
	Qsprit.setScale(.5f, .5f);
	float Q_ButtonWidth = Qsprit.getLocalBounds().width;
	float Q_ButtonHeight = Qsprit.getLocalBounds().height;
	Qsprit.setTexture(Qtext);
	Qtext.setSmooth(true);

	//R...................
	Texture Rtext;
	Rtext.loadFromFile("Normal/R.png");
	Sprite Rsprit;
	Rsprit.setPosition(275.0f, 610.0f);
	Rsprit.setScale(.5f, .5f);
	float R_ButtonWidth = Rsprit.getLocalBounds().width;
	float R_ButtonHeight = Rsprit.getLocalBounds().height;
	Rsprit.setTexture(Rtext);
	Rtext.setSmooth(true);

	//S...................
	Texture Stext;
	Stext.loadFromFile("Normal/S.png");
	Sprite Ssprit;
	Ssprit.setPosition(355.0f, 610.0f);
	Ssprit.setScale(.5f, .5f);
	float S_ButtonWidth = Ssprit.getLocalBounds().width;
	float S_ButtonHeight = Ssprit.getLocalBounds().height;
	Ssprit.setTexture(Stext);
	Stext.setSmooth(true);

	//T...................
	Texture Ttext;
	Ttext.loadFromFile("Normal/T.png");
	Sprite Tsprit;
	Tsprit.setPosition(435.0f, 610.0f);
	Tsprit.setScale(.5f, .5f);
	float T_ButtonWidth = Tsprit.getLocalBounds().width;
	float T_ButtonHeight = Tsprit.getLocalBounds().height;
	Tsprit.setTexture(Ttext);
	Ttext.setSmooth(true);

	//U...................
	Texture Utext;
	Utext.loadFromFile("Normal/U.png");
	Sprite Usprit;
	Usprit.setPosition(515.0f, 610.0f);
	Usprit.setScale(.5f, .5f);
	float U_ButtonWidth = Usprit.getLocalBounds().width;
	float U_ButtonHeight = Usprit.getLocalBounds().height;
	Usprit.setTexture(Utext);
	Utext.setSmooth(true);


	//Fourth row........
	//V...................
	Texture Vtext;
	Vtext.loadFromFile("Normal/V.png");
	Sprite Vsprit;
	Vsprit.setPosition(115.0f, 690.0f);
	Vsprit.setScale(.5f, .5f);
	float V_ButtonWidth = Vsprit.getLocalBounds().width;
	float V_ButtonHeight = Vsprit.getLocalBounds().height;
	Vsprit.setTexture(Vtext);
	Vtext.setSmooth(true);

	//W...................
	Texture Wtext;
	Wtext.loadFromFile("Normal/W.png");
	Sprite Wsprit;
	Wsprit.setPosition(195.0f, 690.0f);
	Wsprit.setScale(.5f, .5f);
	float W_ButtonWidth = Wsprit.getLocalBounds().width;
	float W_ButtonHeight = Wsprit.getLocalBounds().height;
	Wsprit.setTexture(Wtext);
	Wtext.setSmooth(true);

	//X...................
	Texture Xtext;
	Xtext.loadFromFile("Normal/X.png");
	Sprite Xsprit;
	Xsprit.setPosition(275.0f, 690.0f);
	Xsprit.setScale(.5f, .5f);
	float X_ButtonWidth = Xsprit.getLocalBounds().width;
	float X_ButtonHeight = Xsprit.getLocalBounds().height;
	Xsprit.setTexture(Xtext);
	Xtext.setSmooth(true);

	//Y...................
	Texture Ytext;
	Ytext.loadFromFile("Normal/Y.png");
	Sprite Ysprit;
	Ysprit.setPosition(355.0f, 690.0f);
	Ysprit.setScale(.5f, .5f);
	float Y_ButtonWidth = Ysprit.getLocalBounds().width;
	float Y_ButtonHeight = Ysprit.getLocalBounds().height;
	Ysprit.setTexture(Ytext);
	Ytext.setSmooth(true);

	//Z...................
	Texture Ztext;
	Ztext.loadFromFile("Normal/Z.png");
	Sprite Zsprit;
	Zsprit.setPosition(435.0f, 690.0f);
	Zsprit.setScale(.5f, .5f);
	float Z_ButtonWidth = Zsprit.getLocalBounds().width;
	float Z_ButtonHeight = Zsprit.getLocalBounds().height;
	Zsprit.setTexture(Ztext);
	Ztext.setSmooth(true);


	//life1...................
	Texture life1text;
	life1text.loadFromFile("Shapes/life.png");
	Sprite life1sprit;
	life1sprit.setPosition(28.0f, 8.0f);
	life1sprit.setScale(.58f, .58f);
	life1sprit.setTexture(life1text);
	life1text.setSmooth(true);

	//life2...................
	Texture life2text;
	life2text.loadFromFile("Shapes/life.png");
	Sprite life2sprit;
	life2sprit.setPosition(118.0f, 8.0f);
	life2sprit.setScale(.58f, .58f);
	life2sprit.setTexture(life2text);
	life2text.setSmooth(true);

	//life3...................
	Texture life3text;
	life3text.loadFromFile("Shapes/life.png");
	Sprite life3sprit;
	life3sprit.setPosition(208.0f, 8.0f);
	life3sprit.setScale(.58f, .58f);
	life3sprit.setTexture(life3text);
	life3text.setSmooth(true);

	//life4...................
	Texture life4text;
	life4text.loadFromFile("Shapes/life.png");
	Sprite life4sprit;
	life4sprit.setPosition(298.0f, 8.0f);
	life4sprit.setScale(.58f, .58f);
	life4sprit.setTexture(life4text);
	life4text.setSmooth(true);

	//life5...................
	Texture life5text;
	life5text.loadFromFile("Shapes/life.png");
	Sprite life5sprit;
	life5sprit.setPosition(388.0f, 8.0f);
	life5sprit.setScale(.58f, .58f);
	life5sprit.setTexture(life5text);
	life5text.setSmooth(true);

	//life6...................
	Texture life6text;
	life6text.loadFromFile("Shapes/life.png");
	Sprite life6sprit;
	life6sprit.setPosition(478.0f, 8.0f);
	life6sprit.setScale(.58f, .58f);
	life6sprit.setTexture(life6text);
	life6text.setSmooth(true);

	//nolife1...................
	Texture nolife1text;
	nolife1text.loadFromFile("Shapes/fail.png");
	Sprite nolife1sprit;
	nolife1sprit.setPosition(28.0f, 8.0f);
	nolife1sprit.setScale(.58f, .58f);
	nolife1sprit.setTexture(nolife1text);
	nolife1text.setSmooth(true);

	//nolife2...................
	Texture nolife2text;
	nolife2text.loadFromFile("Shapes/fail.png");
	Sprite nolife2sprit;
	nolife2sprit.setPosition(118.0f, 8.0f);
	nolife2sprit.setScale(.58f, .58f);
	nolife2sprit.setTexture(nolife2text);
	nolife2text.setSmooth(true);

	//nolife3...................
	Texture nolife3text;
	nolife3text.loadFromFile("Shapes/fail.png");
	Sprite nolife3sprit;
	nolife3sprit.setPosition(208.0f, 8.0f);
	nolife3sprit.setScale(.58f, .58f);
	nolife3sprit.setTexture(nolife3text);
	nolife3text.setSmooth(true);

	//nolife4...................
	Texture nolife4text;
	nolife4text.loadFromFile("Shapes/fail.png");
	Sprite nolife4sprit;
	nolife4sprit.setPosition(298.0f, 8.0f);
	nolife4sprit.setScale(.58f, .58f);
	nolife4sprit.setTexture(nolife4text);
	nolife4text.setSmooth(true);

	//nolife5...................
	Texture nolife5text;
	nolife5text.loadFromFile("Shapes/fail.png");
	Sprite nolife5sprit;
	nolife5sprit.setPosition(388.0f, 8.0f);
	nolife5sprit.setScale(.58f, .58f);
	nolife5sprit.setTexture(nolife5text);
	nolife5text.setSmooth(true);

	//nolife6...................
	Texture nolife6text;
	nolife6text.loadFromFile("Shapes/fail.png");
	Sprite nolife6sprit;
	nolife6sprit.setPosition(478.0f, 8.0f);
	nolife6sprit.setScale(.58f, .58f);
	nolife6sprit.setTexture(nolife6text);
	nolife6text.setSmooth(true);

	//Hint1...................
	Texture Hint1text;
	Hint1text.loadFromFile("Shapes/hint.png");
	Sprite Hint1sprit;
	Hint1sprit.setPosition(710.0f, 19.0f);
	Hint1sprit.setScale(.48f, .48f);
	float Hint1_ButtonWidth = Hint1sprit.getLocalBounds().width;
	float Hint1_ButtonHeight = Hint1sprit.getLocalBounds().height;
	Hint1sprit.setTexture(Hint1text);
	Hint1text.setSmooth(true);

	//noHint1...................
	Texture noHint1text;
	noHint1text.loadFromFile("Shapes/nohint.png");
	Sprite noHint1sprit;
	noHint1sprit.setPosition(710.0f, 19.0f);
	noHint1sprit.setScale(.48f, .48f);
	noHint1sprit.setTexture(noHint1text);
	noHint1text.setSmooth(true);

	//Hint2...................
	Texture Hint2text;
	Hint2text.loadFromFile("Shapes/hint.png");
	Sprite Hint2sprit;
	Hint2sprit.setPosition(783.0f, 19.0f);
	Hint2sprit.setScale(.48f, .48f);
	float Hint2_ButtonWidth = Hint2sprit.getLocalBounds().width;
	float Hint2_ButtonHeight = Hint2sprit.getLocalBounds().height;
	Hint2sprit.setTexture(Hint2text);
	Hint2text.setSmooth(true);

	//noHint2...................
	Texture noHint2text;
	noHint2text.loadFromFile("Shapes/nohint.png");
	Sprite noHint2sprit;
	noHint2sprit.setPosition(783.0f, 19.0f);
	noHint2sprit.setScale(.48f, .48f);
	noHint2sprit.setTexture(noHint2text);
	noHint2text.setSmooth(true);

	//Hint3...................
	Texture Hint3text;
	Hint3text.loadFromFile("Shapes/hint.png");
	Sprite Hint3sprit;
	Hint3sprit.setPosition(856.0f, 19.0f);
	Hint3sprit.setScale(.48f, .48f);
	float Hint3_ButtonWidth = Hint3sprit.getLocalBounds().width;
	float Hint3_ButtonHeight = Hint3sprit.getLocalBounds().height;
	Hint3sprit.setTexture(Hint3text);
	Hint3text.setSmooth(true);

	//noHint3...................
	Texture noHint3text;
	noHint3text.loadFromFile("Shapes/nohint.png");
	Sprite noHint3sprit;
	noHint3sprit.setPosition(856.0f, 19.0f);
	noHint3sprit.setScale(.48f, .48f);
	noHint3sprit.setTexture(noHint3text);
	noHint3text.setSmooth(true);

	//Option_Button...................
	Texture opttext;
	opttext.loadFromFile("Shapes/opt.png");
	Sprite optsprit;
	optsprit.setPosition(1030.0f, 605.0f);
	optsprit.setScale(0.71f, 0.7f);
	float opt_ButtonWidth = optsprit.getLocalBounds().width;
	float opt_ButtonHeight = optsprit.getLocalBounds().height;
	optsprit.setTexture(opttext);
	opttext.setSmooth(true);

	//Man1...................
	Texture Man1text;
	Man1text.loadFromFile("Man/1.png");
	Sprite Man1sprit;
	Man1sprit.setPosition(916.0f, 126.0f);
	Man1sprit.setScale(.5f, .6f);
	Man1sprit.setTexture(Man1text);
	Man1text.setSmooth(true);

	//Man2...................
	Texture Man2text;
	Man2text.loadFromFile("Man/2.png");
	Sprite Man2sprit;
	Man2sprit.setPosition(916.0f, 126.0f);
	Man2sprit.setScale(.5f, .6f);
	Man2sprit.setTexture(Man2text);
	Man2text.setSmooth(true);

	//Man3...................
	Texture Man3text;
	Man3text.loadFromFile("Man/3.png");
	Sprite Man3sprit;
	Man3sprit.setPosition(916.0f, 126.0f);
	Man3sprit.setScale(.5f, .6f);
	Man3sprit.setTexture(Man3text);
	Man3text.setSmooth(true);

	//Man4...................
	Texture Man4text;
	Man4text.loadFromFile("Man/4.png");
	Sprite Man4sprit;
	Man4sprit.setPosition(916.0f, 126.0f);
	Man4sprit.setScale(.5f, .6f);
	Man4sprit.setTexture(Man4text);
	Man4text.setSmooth(true);

	//Man5...................
	Texture Man5text;
	Man5text.loadFromFile("Man/5.png");
	Sprite Man5sprit;
	Man5sprit.setPosition(916.0f, 126.0f);
	Man5sprit.setScale(.5f, .6f);
	Man5sprit.setTexture(Man5text);
	Man5text.setSmooth(true);

	//Man6...................
	Texture Man6text;
	Man6text.loadFromFile("Man/6.png");
	Sprite Man6sprit;
	Man6sprit.setPosition(916.0f, 126.0f);
	Man6sprit.setScale(.5f, .6f);
	Man6sprit.setTexture(Man6text);
	Man6text.setSmooth(true);

	//help...................
	Texture helptext;
	helptext.loadFromFile("Man/help.png");
	Sprite helpsprit;
	helpsprit.setPosition(847.0f, 112.0f);
	helpsprit.setScale(1.55f, 1.35f);
	helpsprit.setTexture(helptext);
	helptext.setSmooth(true);

	//empty cell(space between two words in the same title)...................
	Texture emptytext;
	emptytext.loadFromFile("Shapes/empty.png");
	Sprite emptysprit;
	emptysprit.setPosition(70.0f, 415.0f);//**70.0f will change by words 
	emptysprit.setScale(.9f, 0.6f);
	emptysprit.setTexture(emptytext);
	emptytext.setSmooth(true);

	//text(Description)...............
	sf::Font font;
	font.loadFromFile("Oswald-Regular.ttf");
	Text text;
	text.setFont(font);
	text.setCharacterSize(35);
	text.setFillColor(Color::Yellow);
	text.setStyle(Text::Style::Italic);
	text.setOutlineColor(Color::Black);
	text.setOutlineThickness(2);
	text.setPosition(30.0f, 115.0f);

	//the appeared chars......
	Texture AShowtext;
	AShowtext.loadFromFile("Alphapet/a.png");
	Sprite AShowSprite;

	Texture BShowtext;
	BShowtext.loadFromFile("Alphapet/b.png");
	Sprite BShowSprite;

	Texture CShowtext;
	CShowtext.loadFromFile("Alphapet/c.png");
	Sprite CShowSprite;

	Texture DShowtext;
	DShowtext.loadFromFile("Alphapet/d.png");
	Sprite DShowSprite;

	Texture EShowtext;
	EShowtext.loadFromFile("Alphapet/e.png");
	Sprite EShowSprite;

	Texture FShowtext;
	FShowtext.loadFromFile("Alphapet/f.png");
	Sprite FShowSprite;

	Texture GShowtext;
	GShowtext.loadFromFile("Alphapet/g.png");
	Sprite GShowSprite;

	Texture HShowtext;
	HShowtext.loadFromFile("Alphapet/h.png");
	Sprite HShowSprite;

	Texture IShowtext;
	IShowtext.loadFromFile("Alphapet/i.png");
	Sprite IShowSprite;

	Texture JShowtext;
	JShowtext.loadFromFile("Alphapet/j.png");
	Sprite JShowSprite;

	Texture KShowtext;
	KShowtext.loadFromFile("Alphapet/k.png");
	Sprite KShowSprite;

	Texture LShowtext;
	LShowtext.loadFromFile("Alphapet/l.png");
	Sprite LShowSprite;

	Texture MShowtext;
	MShowtext.loadFromFile("Alphapet/m.png");
	Sprite MShowSprite;

	Texture NShowtext;
	NShowtext.loadFromFile("Alphapet/n.png");
	Sprite NShowSprite;

	Texture OShowtext;
	OShowtext.loadFromFile("Alphapet/o.png");
	Sprite OShowSprite;

	Texture PShowtext;
	PShowtext.loadFromFile("Alphapet/p.png");
	Sprite PShowSprite;

	Texture QShowtext;
	QShowtext.loadFromFile("Alphapet/q.png");
	Sprite QShowSprite;

	Texture RShowtext;
	RShowtext.loadFromFile("Alphapet/r.png");
	Sprite RShowSprite;

	Texture SShowtext;
	SShowtext.loadFromFile("Alphapet/s.png");
	Sprite SShowSprite;

	Texture TShowtext;
	TShowtext.loadFromFile("Alphapet/t.png");
	Sprite TShowSprite;

	Texture UShowtext;
	UShowtext.loadFromFile("Alphapet/u.png");
	Sprite UShowSprite;

	Texture VShowtext;
	VShowtext.loadFromFile("Alphapet/v.png");
	Sprite VShowSprite;

	Texture WShowtext;
	WShowtext.loadFromFile("Alphapet/w.png");
	Sprite WShowSprite;

	Texture YShowtext;
	YShowtext.loadFromFile("Alphapet/y.png");
	Sprite YShowSprite;

	Texture XShowtext;
	XShowtext.loadFromFile("Alphapet/x.png");
	Sprite XShowSprite;

	Texture ZShowtext;
	ZShowtext.loadFromFile("Alphapet/z.png");
	Sprite ZShowSprite;

	bool InHomepage = 1, InStart = 0, InOption = 0, In2Player = 0, InLeaderBoard = 0, Inprocess = 0, Incatagrories = 0, Inwinning = 0, Inlosing = 0, InEnterName = 0;
	bool InA = 1, InB = 1, InC = 1, InD = 1, InE = 1, InF = 1, InG = 1, InH = 1, InI = 1, InJ = 1, InK = 1, InL = 1, InM = 1, InN = 1;
	bool InO = 1, InP = 1, InQ = 1, InR = 1, InS = 1, InT = 1, InU = 1, InV = 1, InW = 1, InX = 1, InY = 1, InZ = 1, opt = 1, tex = 1;
	bool Hint1 = 1, Hint2 = 1, Hint3 = 1, noHint1 = 0, noHint2 = 0, noHint3 = 0;
	bool life1 = 1, life2 = 1, life3 = 1, life4 = 1, life5 = 1, life6 = 1;
	bool nolife1 = 0, nolife2 = 0, nolife3 = 0, nolife4 = 0, nolife5 = 0, nolife6 = 0;
	bool Man1 = 0, Man2 = 0, Man3 = 0, Man4 = 0, Man5 = 0, Man6 = 0, help = 1, empty = 0;
	bool Ad = 0, Bd = 0, Cd = 0, Dd = 0, Ed = 0, Fd = 0, Gd = 0, Hd = 0, Id = 0, Jd = 0, Kd = 0,
		Ld = 0, Md = 0, Nd = 0, Od = 0, Pd = 0, Qd = 0, Sd = 0, Rd = 0, Td = 0, Ud = 0, Vd = 0, Wd = 0, Xd = 0, Yd = 0, Zd = 0;
	char letter = '1'; int lifecounter = 1; int count1 = 40;  bool fromprocesstooption = 0;

	bool yourname = 0;

	music.play();
	bool MusicOn = 1;

	while (window.isOpen()) {
		Event event;
		// homepage mechanism
		if (InHomepage) {
			window.clear();
			window.draw(homepagesprit);
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse;
						//start
						if (mouse.getPosition().x > 81 && mouse.getPosition().x < 521 && mouse.getPosition().y>231 && mouse.getPosition().y < 300) {
							cout << "Start" << endl;
							InStart = 1;
							InHomepage = 0;
						}

						//option
						if (mouse.getPosition().x > 76 && mouse.getPosition().x < 520 && mouse.getPosition().y>369 && mouse.getPosition().y < 433) {
							cout << "option" << endl;
							InOption = 1;
							InHomepage = 0;
						}

						//leader board
						if (mouse.getPosition().x > 80 && mouse.getPosition().x < 520 && mouse.getPosition().y>505 && mouse.getPosition().y < 576) {
							cout << "leader board" << endl;
							InLeaderBoard = 1;
							InHomepage = 0;
						}

						//Exit
						if (mouse.getPosition().x > 165 && mouse.getPosition().x < 400 && mouse.getPosition().y>627 && mouse.getPosition().y < 697) {
							cout << "Exit" << endl;
							window.close();
						}
					}
				}
			}
		}
		//start mechanism (1 - 2 players)
		else if (InStart) {
			window.clear();
			window.draw(startsprit);
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						//Back button
						if (x > 58 && x < 149 && y>43 && y < 133) {
							InStart = 0; InHomepage = 1;
						}

						//Exit button
						if (x > 1223 && x < 1316 && y>43 && y < 133) {
							window.close();
						}

						// 1 players button
						if (x > 370 && x < 998 && y > 198 && y < 346) {
							InStart = 0; Incatagrories = 1;
						}

						// 2 players button
						if (x > 370 && x < 998 && y > 413 && y < 563) {
							InStart = 0; In2Player = 1;
						}
					}
				}
			}
		}
		// optiion mechanisim
		else if (InOption) {
			optionsprit.setPosition(220, 100);
			window.draw(optionsprit);
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						cout << x << " " << y << endl;
						//x button
						if (x > 587 && x < 927 && y>117 && y < 184) {
							if (fromprocesstooption) {
								InOption = 0;
								Inprocess = 1;
								fromprocesstooption = 0;
							}
							else
							{
								InOption = 0;
								InHomepage = 1;
							}
						}

						//exit button
						if (x > 787 && x < 928 && y>545 && y < 619) {
							window.close();
						}

						//sound off
						if (x > 334 && x < 466 && y>379 && y < 509) {
							if (MusicOn) {
								music.pause();
								MusicOn = 0;
							}
						}

						//sound on
						if (x > 707 && x < 843 && y>184 && y < 315) {
							if (!MusicOn) {
								music.play();
								MusicOn = 1;
							}
						}
					}
				}
			}
		}
		// 2 players mechanism (blueetoth - netowrk)
		else if (In2Player) {
			window.clear();
			window.draw(twoplayerssprit);
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						//Back button
						if (x > 46 && x < 134 && y>39 && y < 130) {
							In2Player = 0; InStart = 1;
						}

						//Exit button
						if (x > 1223 && x < 1321 && y>43 && y < 133) {
							window.close();
						}

						// Blutooth button
						if (x > 568 && x < 1198 && y > 275 && y < 426) {
							InStart = 0;
						}

					}
				}
			}
		}
		// catagrories mechanism.................................................................................................
		else if (Incatagrories) {
			window.clear();
			window.draw(Catagroriessprit);
			while (window.pollEvent(event)) {
				int index = -1;
				// 1 countries 2 movies 3 music 4 jobs 5 brands 6 food 7 tvshows 8 celebrities 9 sites 10 sports
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						//Back button
						if (x > 46 && x < 133 && y>39 && y < 129) {
							InHomepage = 0;
							Incatagrories = 0;
						}

						//Exit button
						if (x > 1223 && x < 1321 && y>43 && y < 133) {
							window.close();
						}
						srand(time(0));
						int r = (rand() % 10) + 1;
						while (index == -1) {
							cout << "INLOOP" << endl;
							//5 brands
							if (x > 220 && x < 653 && y>45 && y < 145) {
								Incatagrories = 0; Inprocess = 1; index = 5;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//8 celebrites
							if (x > 220 && x < 653 && y>190 && y < 290) {
								Incatagrories = 0; Inprocess = 1; index = 8;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//4 jobs
							if (x > 220 && x < 653 && y>335 && y < 435) {
								Incatagrories = 0; Inprocess = 1; index = 4;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//7 tvshpows
							if (x > 220 && x < 653 && y>475 && y < 575) {
								Incatagrories = 0; Inprocess = 1; index = 7;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//9 sites
							if (x > 220 && x < 653 && y>625 && y < 725) {
								Incatagrories = 0; Inprocess = 1; index = 9;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//6 food
							if (x > 744 && x < 1146 && y>45 && y < 145) {
								Incatagrories = 0; Inprocess = 1; index = 6;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//2 movies
							if (x > 744 && x < 1146 && y>190 && y < 290) {
								Incatagrories = 0; Inprocess = 1; index = 2;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//1 countries
							if (x > 744 && x < 1146 && y>335 && y < 435) {
								Incatagrories = 0; Inprocess = 1; index = 1;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//10 sports
							if (x > 744 && x < 1146 && y>475 && y < 575) {
								Incatagrories = 0; Inprocess = 1; index = 10;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}

							//3 music
							if (x > 744 && x < 1146 && y>625 && y < 725) {
								Incatagrories = 0; Inprocess = 1; index = 3;
								DictionaryGame.GetIndex(index, r);
								text.setString(DictionaryGame.MeaningOut(index, r));
								Word = DictionaryGame.WordOut(index, r);
							}
						}
						string newline;
						newline += '\n';
						Meaning = DictionaryGame.MeaningOut(index, r);
						for (int i = 58; i < Meaning.getSize(); i += 58)
							Meaning.insert(i, newline);
					}
				}
			}
		}
		//////your name>>>>>>>>>>>>>................
		else if (yourname) {
		window.clear();
		window.draw(Enternamesprit);
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
			else if (event.type == Event::MouseButtonPressed) {
				Click.play();
				if (event.mouseButton.button == Mouse::Button::Left) {
					Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
					//Play button
					if (x > 1136 && x < 1346 && y>615 && y < 747) {
						
						
					}
					//back button
					if (x > 18 && x < 232 && y>615 && y < 747) {
					
					}
					//A
					if (x > 231 && x < 350 && y>310 && y < 360) {

					}
					//B
					if (x > 390 && x < 512 && y>310 && y < 360) {

					}
					//C
					if (x > 544 && x < 653 && y>310 && y < 360) {

					}
					//D
					if (x > 697 && x < 814 && y>310 && y < 360) {

					}
					//E
					if (x > 868 && x < 973 && y>310 && y < 360) {

					}
					//F
					if (x > 1032 && x < 1133 && y>310 && y < 360) {

					}
					//G
					if (x > 231 && x < 350 && y>392 && y < 439) {

					}
					//H
					if (x > 450 && x < 572 && y>392 && y < 439) {

					}
					//I
					if (x > 658 && x < 727 && y>392 && y < 439) {

					}
					//J
					if (x > 837 && x < 910 && y>392 && y < 448) {

					}
					//K
					if (x > 980 && x < 1109 && y>392 && y < 439) {

					}
					//L
					if (x > 252 && x < 352 && y>485 && y < 533) {

					}
					//M
					if (x > 432 && x < 590 && y>485 && y < 533) {

					}
					//N
					if (x > 659 && x < 772 && y>485 && y < 533) {

					}
					//O
					if (x > 837 && x < 956 && y>485 && y < 533) {

					}
					//P
					if (x > 1012 && x < 1110 && y>491 && y < 530) {

					}
					//Q
					if (x > 250 && x < 372 && y>569 && y < 627) {

					}
					//R
					if (x > 434 && x < 559 && y>574 && y < 621) {

					}
					//S
					if (x > 639 && x < 744 && y>574 && y < 621) {

					}
					//T
					if (x > 810 && x < 932 && y>574 && y < 621) {

					}
					//U
					if (x > 1000 && x < 1108 && y>574 && y < 621) {

					}
					//V
					if (x > 253 && x < 374 && y>657 && y < 704) {

					}
					//W
					if (x > 455 && x < 612 && y>657 && y < 704) {

					}
					//X
					if (x > 659 && x < 786 && y>657 && y < 704) {

					}
					//Y
					if (x > 837 && x < 955 && y>657 && y < 704) {

					}
					//Z
					if (x > 1001 && x < 1106 && y>657 && y < 704) {

					}

				}
			}
		}
		}


		else if (InLeaderBoard) {
			window.clear();
			window.draw(LeaderSprite);
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						//exit button
						if (x > 54 && x < 192 && y>651 && y < 728) {
							window.close();
							return 0;
						}
						//back button
						if (x > 1251 && x < 1335 && y>25 && y < 107) {
							InLeaderBoard = 0; InHomepage = 1;
						}
					}
				}
			}
		}
		else if (Inwinning) {
			window.draw(winningsprit);
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						cout << "X:" << x << "Y:" << y << endl;
						//exit button
						if (x > 112 && x < 253 && y>586 && y < 661) {
							window.close();
							return 0;
						}
						//play again button
						if (x > 875 && x < 1226 && y>600 && y < 667) {
							Inwinning = 0; Inlosing = 0; Incatagrories = 1;
							InA = 1; InB = 1; InC = 1; InD = 1; InE = 1; InF = 1; InG = 1; InH = 1; InI = 1; InJ = 1; InK = 1; InL = 1;
							InM = 1; InN = 1; InO = 1; InP = 1; InQ = 1; InY = 1; InR = 1; InS = 1; InT = 1; InU = 1; InV = 1; InW = 1; InX = 1; InZ = 1;
							Hint1 = 1; Hint2 = 1; Hint3 = 1; noHint1 = 0; noHint2 = 0; noHint3 = 0;
							life1 = 1; life2 = 1; life3 = 1; life4 = 1; life5 = 1; life6 = 1;
							nolife1 = 0; nolife2 = 0; nolife3 = 0; nolife4 = 0; nolife5 = 0; nolife6 = 0;
							Man1 = 0; Man2 = 0; Man3 = 0; Man4 = 0; Man5 = 0; Man6 = 0; help = 1; empty = 0;
							Ad = 0, Bd = 0, Cd = 0, Dd = 0, Ed = 0, Fd = 0, Gd = 0, Hd = 0, Id = 0, Jd = 0, Kd = 0,
								Ld = 0, Md = 0, Nd = 0, Od = 0, Pd = 0, Qd = 0, Sd = 0, Rd = 0, Td = 0, Ud = 0, Vd = 0, Wd = 0, Xd = 0, Yd = 0, Zd = 0;
							lifecounter = 1; fromprocesstooption = 0;
						}

					}
				}
			}
		}

		else if (Inlosing) {

			Text t;
			t.setFont(font);
			t.setString(Word);
			t.setCharacterSize(80);
			t.setFillColor(Color::Red);
			t.setOutlineColor(Color::Black);
			t.setOutlineThickness(1.5);
			t.setPosition(500, 575);
			window.draw(losingsprit);
			window.draw(t);

			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
						cout << "X:" << x << "Y:" << y << endl;
						//exit button
						if (x > 114 && x < 349 && y>586 && y < 652) {
							window.close();
							return 0;
						}
						//play again button
						if (x > 884 && x < 1235 && y>586 && y < 652) {
							Inlosing = 0; Incatagrories = 1;Inwinning = 0;
							InA = 1; InB = 1; InC = 1; InD = 1; InE = 1; InF = 1; InG = 1; InH = 1; InI = 1; InJ = 1; InK = 1; InL = 1;
							InM = 1; InN = 1; InO = 1; InP = 1; InQ = 1; InY = 1; InR = 1; InS = 1; InT = 1; InU = 1; InV = 1; InW = 1; InX = 1; InZ = 1;
							Hint1 = 1; Hint2 = 1; Hint3 = 1; noHint1 = 0; noHint2 = 0; noHint3 = 0;
							life1 = 1; life2 = 1; life3 = 1; life4 = 1; life5 = 1; life6 = 1;
							nolife1 = 0; nolife2 = 0; nolife3 = 0; nolife4 = 0; nolife5 = 0; nolife6 = 0;
							Man1 = 0; Man2 = 0; Man3 = 0; Man4 = 0; Man5 = 0; Man6 = 0; help = 1; empty = 0;
							Ad = 0, Bd = 0, Cd = 0, Dd = 0, Ed = 0, Fd = 0, Gd = 0, Hd = 0, Id = 0, Jd = 0, Kd = 0,
								Ld = 0, Md = 0, Nd = 0, Od = 0, Pd = 0, Qd = 0, Sd = 0, Rd = 0, Td = 0, Ud = 0, Vd = 0, Wd = 0, Xd = 0, Yd = 0, Zd = 0;
							lifecounter = 1; fromprocesstooption = 0;
						}
					}
				}
			}
			window.draw(t);
		}
		else if (Inprocess) {
			//window.clear();
			window.draw(processsprit);
			window.setFramerateLimit(5);//-----------------------------------------------------------------------------------------

			//space under letters...................//empty function
			int counterspace = 0;
			for (int i = 0; i < Word.getSize(); i++) {//////////////size of string
				Texture spacetext;
				spacetext.loadFromFile("Shapes/space.png");
				Sprite spacesprit;
				spacesprit.setPosition(70.0f + (counterspace), 415.0f);
				spacesprit.setScale(.9f, 0.6f);
				spacesprit.setTexture(spacetext);
				spacetext.setSmooth(true);
				window.draw(spacesprit);
				counterspace += 40;
			}

			if (InA)
				window.draw(Asprit);
			if (InB)
				window.draw(Bsprit);
			if (InC)
				window.draw(Csprit);
			if (InD)
				window.draw(Dsprit);
			if (InE)
				window.draw(Esprit);
			if (InF)
				window.draw(Fsprit);
			if (InG)
				window.draw(Gsprit);
			if (InH)
				window.draw(Hsprit);
			if (InI)
				window.draw(Isprit);
			if (InJ)
				window.draw(Jsprit);
			if (InK)
				window.draw(Ksprit);
			if (InL)
				window.draw(Lsprit);
			if (InM)
				window.draw(Msprit);
			if (InN)
				window.draw(Nsprit);
			if (InO)
				window.draw(Osprit);
			if (InP)
				window.draw(Psprit);
			if (InQ)
				window.draw(Qsprit);
			if (InR)
				window.draw(Rsprit);
			if (InS)
				window.draw(Ssprit);
			if (InT)
				window.draw(Tsprit);
			if (InU)
				window.draw(Usprit);
			if (InV)
				window.draw(Vsprit);
			if (InW)
				window.draw(Wsprit);
			if (InX)
				window.draw(Xsprit);
			if (InY)
				window.draw(Ysprit);
			if (InZ)
				window.draw(Zsprit);

			if (life1)
				window.draw(life1sprit);
			if (life2)
				window.draw(life2sprit);
			if (life3)
				window.draw(life3sprit);
			if (life4)
				window.draw(life4sprit);
			if (life5)
				window.draw(life5sprit);
			if (life6)
				window.draw(life6sprit);


			if (nolife1)
				window.draw(nolife1sprit);
			if (nolife2)
				window.draw(nolife2sprit);
			if (nolife3)
				window.draw(nolife3sprit);
			if (nolife4)
				window.draw(nolife4sprit);
			if (nolife5)
				window.draw(nolife5sprit);
			if (nolife6)
				window.draw(nolife6sprit);

			if (Hint1)
				window.draw(Hint1sprit);
			if (noHint1)
				window.draw(noHint1sprit);
			if (Hint2)
				window.draw(Hint2sprit);
			if (noHint2)
				window.draw(noHint2sprit);
			if (Hint3)
				window.draw(Hint3sprit);
			if (noHint3)
				window.draw(noHint3sprit);

			if (opt)
				window.draw(optsprit);

			if (Man1)
				window.draw(Man1sprit);
			if (Man2)
				window.draw(Man2sprit);
			if (Man3)
				window.draw(Man3sprit);
			if (Man4)
				window.draw(Man4sprit);
			if (Man5)
				window.draw(Man5sprit);
			if (Man6)
				window.draw(Man6sprit);
			if ((life3 == 0 && nolife3 == 1) || (life5 == 0 && nolife5 == 1) ||
				(life4 == 0 && nolife4 == 1) || (life6 == 0 && nolife6 == 1)) {
				if (help)
					window.draw(helpsprit);
			}

			if (empty)
				window.draw(emptysprit);

			if (tex) {
				text.setString(Meaning);
				window.draw(text);
			}
			while (window.pollEvent(event)) {
				if (event.type == Event::Closed)
					window.close();
				else if (event.type == Event::MouseButtonPressed) {
					Click.play();
					if (event.mouseButton.button == Mouse::Button::Left) {
						Mouse mouse; int x = mouse.getPosition().x, y = mouse.getPosition().y;
					}

				}



				///A>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Asprit.getGlobalBounds().contains(mousePosF)) {
						Asprit.setColor(sf::Color(200, 0, 0));
						Asprit.setScale(0.53f, 0.53f);
					}
					else {
						Asprit.setColor(sf::Color(255, 255, 255));
						Asprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Asprit.getGlobalBounds().contains(mousePosF)) {
						InA = 0;
						if (DictionaryGame.check(Word, 'a').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana 
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							Right.play();
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'a').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'a');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'a';
								Ad = 1;
							}
						}
					}
				}break;
				}


				///B>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Bsprit.getGlobalBounds().contains(mousePosF)) {
						Bsprit.setColor(sf::Color(200, 0, 0));
						Bsprit.setScale(0.53f, 0.53f);
					}
					else {
						Bsprit.setColor(sf::Color(255, 255, 255));
						Bsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Bsprit.getGlobalBounds().contains(mousePosF)) {
						InB = 0;
						if (DictionaryGame.check(Word, 'b').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'b').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'b');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'b';
								Bd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///C>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Csprit.getGlobalBounds().contains(mousePosF)) {
						Csprit.setColor(sf::Color(200, 0, 0));
						Csprit.setScale(0.53f, 0.53f);
					}
					else {
						Csprit.setColor(sf::Color(255, 255, 255));
						Csprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Csprit.getGlobalBounds().contains(mousePosF)) {
						InC = 0;
						if (DictionaryGame.check(Word, 'c').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'c').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'c');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'c';
								Cd = 1;
								Right.play();
							}
						}
					}
				}
				break;
				}


				///D>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Dsprit.getGlobalBounds().contains(mousePosF)) {
						Dsprit.setColor(sf::Color(200, 0, 0));
						Dsprit.setScale(0.53f, 0.53f);
					}
					else {
						Dsprit.setColor(sf::Color(255, 255, 255));
						Dsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Dsprit.getGlobalBounds().contains(mousePosF)) {
						InD = 0;
						if (DictionaryGame.check(Word, 'd').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'd').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'd');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'd';
								Dd = 1;
								Right.play();
							}
						}
					}
				}break;
				}

				///E>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Esprit.getGlobalBounds().contains(mousePosF)) {
						Esprit.setColor(sf::Color(200, 0, 0));
						Esprit.setScale(0.53f, 0.53f);
					}
					else {
						Esprit.setColor(sf::Color(255, 255, 255));
						Esprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Esprit.getGlobalBounds().contains(mousePosF)) {
						InE = 0;
						if (DictionaryGame.check(Word, 'e').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'e').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'e');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'e';
								Ed = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///F>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Fsprit.getGlobalBounds().contains(mousePosF)) {
						Fsprit.setColor(sf::Color(200, 0, 0));
						Fsprit.setScale(0.53f, 0.53f);
					}
					else {
						Fsprit.setColor(sf::Color(255, 255, 255));
						Fsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Fsprit.getGlobalBounds().contains(mousePosF)) {
						InF = 0;
						if (DictionaryGame.check(Word, 'f').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'f').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'f');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'f';
								Fd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///G>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Gsprit.getGlobalBounds().contains(mousePosF)) {
						Gsprit.setColor(sf::Color(200, 0, 0));
						Gsprit.setScale(0.53f, 0.53f);
					}
					else {
						Gsprit.setColor(sf::Color(255, 255, 255));
						Gsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Gsprit.getGlobalBounds().contains(mousePosF)) {
						InG = 0;
						if (DictionaryGame.check(Word, 'g').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'g').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'g');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'g';
								Gd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///H>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hsprit.getGlobalBounds().contains(mousePosF)) {
						Hsprit.setColor(sf::Color(200, 0, 0));
						Hsprit.setScale(0.53f, 0.53f);
					}
					else {
						Hsprit.setColor(sf::Color(255, 255, 255));
						Hsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hsprit.getGlobalBounds().contains(mousePosF)) {
						InH = 0;
						if (DictionaryGame.check(Word, 'h').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'h').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'h');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'h';
								Hd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///I>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Isprit.getGlobalBounds().contains(mousePosF)) {
						Isprit.setColor(sf::Color(200, 0, 0));
						Isprit.setScale(0.53f, 0.53f);
					}
					else {
						Isprit.setColor(sf::Color(255, 255, 255));
						Isprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Isprit.getGlobalBounds().contains(mousePosF)) {
						InI = 0;
						if (DictionaryGame.check(Word, 'i').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'i').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'i');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'i';
								Id = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///J>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Jsprit.getGlobalBounds().contains(mousePosF)) {
						Jsprit.setColor(sf::Color(200, 0, 0));
						Jsprit.setScale(0.53f, 0.53f);
					}
					else {
						Jsprit.setColor(sf::Color(255, 255, 255));
						Jsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Jsprit.getGlobalBounds().contains(mousePosF)) {
						InJ = 0;
						if (DictionaryGame.check(Word, 'j').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'j').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'j');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'j';
								Jd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///K>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Ksprit.getGlobalBounds().contains(mousePosF)) {
						Ksprit.setColor(sf::Color(200, 0, 0));
						Ksprit.setScale(0.53f, 0.53f);
					}
					else {
						Ksprit.setColor(sf::Color(255, 255, 255));
						Ksprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Ksprit.getGlobalBounds().contains(mousePosF)) {
						InK = 0;
						if (DictionaryGame.check(Word, 'k').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'k').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'k');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'k';
								Kd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///>L>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Lsprit.getGlobalBounds().contains(mousePosF)) {
						Lsprit.setColor(sf::Color(200, 0, 0));
						Lsprit.setScale(0.53f, 0.53f);
					}
					else {
						Lsprit.setColor(sf::Color(255, 255, 255));
						Lsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Lsprit.getGlobalBounds().contains(mousePosF)) {
						InL = 0;
						if (DictionaryGame.check(Word, 'l').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'l').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'l');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'l';
								Ld = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///M>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Msprit.getGlobalBounds().contains(mousePosF)) {
						Msprit.setColor(sf::Color(200, 0, 0));
						Msprit.setScale(0.53f, 0.53f);
					}
					else {
						Msprit.setColor(sf::Color(255, 255, 255));
						Msprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Msprit.getGlobalBounds().contains(mousePosF)) {
						InM = 0;
						if (DictionaryGame.check(Word, 'm').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'm').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'm');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'm';
								Md = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///N>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Nsprit.getGlobalBounds().contains(mousePosF)) {
						Nsprit.setColor(sf::Color(200, 0, 0));
						Nsprit.setScale(0.53f, 0.53f);
					}
					else {
						Nsprit.setColor(sf::Color(255, 255, 255));
						Nsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Nsprit.getGlobalBounds().contains(mousePosF)) {
						InN = 0;
						if (DictionaryGame.check(Word, 'n').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'n').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'n');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'n';
								Nd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///O>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Osprit.getGlobalBounds().contains(mousePosF)) {
						Osprit.setColor(sf::Color(200, 0, 0));
						Osprit.setScale(0.53f, 0.53f);
					}
					else {
						Osprit.setColor(sf::Color(255, 255, 255));
						Osprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Osprit.getGlobalBounds().contains(mousePosF)) {
						InO = 0;
						if (DictionaryGame.check(Word, 'o').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'o').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'o');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'o';
								Od = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///P>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Psprit.getGlobalBounds().contains(mousePosF)) {
						Psprit.setColor(sf::Color(200, 0, 0));
						Psprit.setScale(0.53f, 0.53f);
					}
					else {
						Psprit.setColor(sf::Color(255, 255, 255));
						Psprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Psprit.getGlobalBounds().contains(mousePosF)) {
						InP = 0;
						if (DictionaryGame.check(Word, 'p').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'p').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'p');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'p';
								Pd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///Q>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Qsprit.getGlobalBounds().contains(mousePosF)) {
						Qsprit.setColor(sf::Color(200, 0, 0));
						Qsprit.setScale(0.53f, 0.53f);
					}
					else {
						Qsprit.setColor(sf::Color(255, 255, 255));
						Qsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Qsprit.getGlobalBounds().contains(mousePosF)) {
						InQ = 0;
						if (DictionaryGame.check(Word, 'q').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'q').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'q');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'q';
								Qd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///R>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Rsprit.getGlobalBounds().contains(mousePosF)) {
						Rsprit.setColor(sf::Color(200, 0, 0));
						Rsprit.setScale(0.53f, 0.53f);
					}
					else {
						Rsprit.setColor(sf::Color(255, 255, 255));
						Rsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Rsprit.getGlobalBounds().contains(mousePosF)) {
						InR = 0;
						if (DictionaryGame.check(Word, 'r').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'r').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'r');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'r';
								Rd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///S>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Ssprit.getGlobalBounds().contains(mousePosF)) {
						Ssprit.setColor(sf::Color(200, 0, 0));
						Ssprit.setScale(0.53f, 0.53f);
					}
					else {
						Ssprit.setColor(sf::Color(255, 255, 255));
						Ssprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Ssprit.getGlobalBounds().contains(mousePosF)) {
						InS = 0;
						if (DictionaryGame.check(Word, 's').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 's').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 's');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 's';
								Sd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///T>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Tsprit.getGlobalBounds().contains(mousePosF)) {
						Tsprit.setColor(sf::Color(200, 0, 0));
						Tsprit.setScale(0.53f, 0.53f);
					}
					else {
						Tsprit.setColor(sf::Color(255, 255, 255));
						Tsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Tsprit.getGlobalBounds().contains(mousePosF)) {
						InT = 0;
						if (DictionaryGame.check(Word, 't').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 't').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 't');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 't';
								Td = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///U>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Usprit.getGlobalBounds().contains(mousePosF)) {
						Usprit.setColor(sf::Color(200, 0, 0));
						Usprit.setScale(0.53f, 0.53f);
					}
					else {
						Usprit.setColor(sf::Color(255, 255, 255));
						Usprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Usprit.getGlobalBounds().contains(mousePosF)) {
						InU = 0;
						if (DictionaryGame.check(Word, 'u').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'u').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'u');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'u';
								Ud = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///V>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Vsprit.getGlobalBounds().contains(mousePosF)) {
						Vsprit.setColor(sf::Color(200, 0, 0));
						Vsprit.setScale(0.53f, 0.53f);
					}
					else {
						Vsprit.setColor(sf::Color(255, 255, 255));
						Vsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Vsprit.getGlobalBounds().contains(mousePosF)) {
						InV = 0;
						if (DictionaryGame.check(Word, 'v').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'v').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'v');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'v';
								Vd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///W>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Wsprit.getGlobalBounds().contains(mousePosF)) {
						Wsprit.setColor(sf::Color(200, 0, 0));
						Wsprit.setScale(0.53f, 0.53f);
					}
					else {
						Wsprit.setColor(sf::Color(255, 255, 255));
						Wsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Wsprit.getGlobalBounds().contains(mousePosF)) {
						InW = 0;
						if (DictionaryGame.check(Word, 'w').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'w').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'w');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'w';
								Wd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///X>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Xsprit.getGlobalBounds().contains(mousePosF)) {
						Xsprit.setColor(sf::Color(200, 0, 0));
						Xsprit.setScale(0.53f, 0.53f);
					}
					else {
						Xsprit.setColor(sf::Color(255, 255, 255));
						Xsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Xsprit.getGlobalBounds().contains(mousePosF)) {
						InX = 0;
						if (DictionaryGame.check(Word, 'x').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'x').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'x');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'x';
								Xd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///Y>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Ysprit.getGlobalBounds().contains(mousePosF)) {
						Ysprit.setColor(sf::Color(200, 0, 0));
						Ysprit.setScale(0.53f, 0.53f);
					}
					else {
						Ysprit.setColor(sf::Color(255, 255, 255));
						Ysprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Ysprit.getGlobalBounds().contains(mousePosF)) {
						InY = 0;
						if (DictionaryGame.check(Word, 'y').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'y').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'y');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								//lettertext.loadFromFile("Alphapet/a.png");
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'y';
								Yd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///Z>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Zsprit.getGlobalBounds().contains(mousePosF)) {
						Zsprit.setColor(sf::Color(200, 0, 0));
						Zsprit.setScale(0.53f, 0.53f);
					}
					else {
						Zsprit.setColor(sf::Color(255, 255, 255));
						Zsprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Zsprit.getGlobalBounds().contains(mousePosF)) {
						InZ = 0;
						if (DictionaryGame.check(Word, 'z').size() == 0) {
							cout << "WE DONT HAVE IT" << endl;
							//al7rf m4 m3ana
							//hnn2s life
							switch (lifecounter)
							{
							case 1:
								Wrong.play();
								life1 = 0; nolife1 = 1;
								Man1 = 1;
								lifecounter++;
								break;
							case 2:
								Wrong.play();
								life2 = 0; nolife2 = 1;
								Man1 = 0; Man2 = 1;
								lifecounter++;
								break;
							case 3:
								Wrong.play();
								life3 = 0; nolife3 = 1;
								Man2 = 0; Man3 = 1;
								lifecounter++;
								break;
							case 4:
								Wrong.play();
								life4 = 0; nolife4 = 1;
								Man3 = 0; Man4 = 1;
								lifecounter++;
								break;
							case 5:
								Wrong.play();
								life5 = 0; nolife5 = 1;
								Man4 = 0; Man5 = 5;
								lifecounter++;
								break;
							case 6:
								Wrong.play();
								life6 = 0; nolife6 = 1;
								Man5 = 0; Man6 = 1;
								lifecounter++;
								break;
							default:
								break;
							}
						}
						else {
							int count1 = 40;
							for (int k = 0; k < DictionaryGame.check(Word, 'z').size(); k++) {
								cout << "HELLO" << endl;
								vector<int> vec = DictionaryGame.check(Word, 'z');
								int quant = vec[k];
								Texture lettertext;
								Sprite lettersprit;
								lettersprit.setPosition((73.0f + (count1 * quant)), 350.0f);
								lettersprit.setScale(.27f, .5f);
								lettersprit.setTexture(lettertext);
								lettertext.setSmooth(true);
								letter = 'z';
								Zd = 1;
								Right.play();
							}
						}
					}
				}break;
				}


				///Hint1>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hint1sprit.getGlobalBounds().contains(mousePosF)) {
						Hint1sprit.setColor(sf::Color(70, 70, 70));
						Hint1sprit.setScale(0.53f, 0.53f);
					}
					else {
						Hint1sprit.setColor(sf::Color(255, 255, 255));
						Hint1sprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hint1sprit.getGlobalBounds().contains(mousePosF)) {
						if ((life3 == 0 && nolife3 == 1) || (life5 == 0 && nolife5 == 1) || (life4 == 0 && nolife4 == 1) || (life6 == 0 && nolife6 == 1)) {
							Hint1 = 0;
							noHint1 = 1;
							for (int y = 0; y < Word.getSize(); y++) {
								switch (Word[y])
								{
								case 'a':
								{
									if (Ad) {
										continue;
									}
									else
										Ad = 1;
								}
								break;
								case 'b': {
									if (Bd) {
										continue;
									}
									else
										Bd = 1;
								}
										break;
								case 'c': {
									if (Cd) {
										continue;
									}
									else
										Cd = 1;
								}
										break;

								case 'd': {
									if (Dd) {
										continue;
									}
									else
										Dd = 1;
								}
										break;

								case 'e': {
									if (Ed) {
										continue;
									}
									else
										Ed = 1;
								}
										break;
								case 'f': {
									if (Fd) {
										continue;
									}
									else
										Fd = 1;
								}
										break;
								case 'g': {
									if (Gd) {
										continue;
									}
									else
										Gd = 1;
								}
										break;
								case 'h': {
									if (Hd) {
										continue;
									}
									else
										Hd = 1;
								}
										break;
								case 'i': {
									if (Id) {
										continue;
									}
									else
										Id = 1;
								}
										break;
								case 'j': {
									if (Jd) {
										continue;
									}
									else
										Jd = 1;
								}
										break;
								case 'k': {
									if (Kd) {
										continue;
									}
									else
										Kd = 1;
								}
										break;
								case 'l': {
									if (Ld) {
										continue;
									}
									else
										Ld = 1;
								}
										break;
								case 'm': {
									if (Md) {
										continue;
									}
									else
										Md = 1;
								}
										break;
								case 'n': {
									if (Nd) {
										continue;
									}
									else
										Nd = 1;
								}
										break;
								case 'o': {
									if (Od) {
										continue;
									}
									else
										Od = 1;
								}
										break;
								case 'p': {
									if (Pd) {
										continue;
									}
									else
										Pd = 1;
								}
										break;
								case 'q': {
									if (Qd) {
										continue;
									}
									else
										Qd = 1;
								}
										break;
								case 'r': {
									if (Rd) {
										continue;
									}
									else
										Rd = 1;
								}
										break;
								case 's': {
									if (Sd) {
										continue;
									}
									else
										Sd = 1;
								}
										break;
								case 't': {
									if (Td) {
										continue;
									}
									else
										Td = 1;
								}
										break;
								case 'u': {
									if (Ud) {
										continue;
									}
									else
										Ud = 1;
								}
										break;
								case 'v': {
									if (Vd) {
										continue;
									}
									else
										Vd = 1;
								}
										break;
								case 'w': {
									if (Wd) {
										continue;
									}
									else
										Wd = 1;
								}
										break;
								case 'x': {
									if (Xd) {
										continue;
									}
									else
										Xd = 1;
								}
										break;
								case 'y': {
									if (Yd) {
										continue;
									}
									else
										Yd = 1;
								}
										break;
								case 'z': {
									if (Zd) {
										continue;
									}
									else
										Zd = 1;
								}
										break;
								}
								break;
							}
						}
					}


					break;
				}
				}


				///Hint2>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hint2sprit.getGlobalBounds().contains(mousePosF)) {
						Hint2sprit.setColor(sf::Color(70, 70, 70));
						Hint2sprit.setScale(0.53f, 0.53f);
					}
					else {
						Hint2sprit.setColor(sf::Color(255, 255, 255));
						Hint2sprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hint2sprit.getGlobalBounds().contains(mousePosF)) {
						if ((life3 == 0 && nolife3 == 1) || (life5 == 0 && nolife5 == 1) || (life4 == 0 && nolife4 == 1) || (life6 == 0 && nolife6 == 1)) {
							Hint2 = 0;
							noHint2 = 1;
							for (int y = 0; y < Word.getSize(); y++) {
								switch (Word[y])
								{
								case 'a':
								{
									if (Ad) {
										continue;
									}
									else
										Ad = 1;
								}
								break;
								case 'b': {
									if (Bd) {
										continue;
									}
									else
										Bd = 1;
								}
										break;
								case 'c': {
									if (Cd) {
										continue;
									}
									else
										Cd = 1;
								}
										break;

								case 'd': {
									if (Dd) {
										continue;
									}
									else
										Dd = 1;
								}
										break;

								case 'e': {
									if (Ed) {
										continue;
									}
									else
										Ed = 1;
								}
										break;
								case 'f': {
									if (Fd) {
										continue;
									}
									else
										Fd = 1;
								}
										break;
								case 'g': {
									if (Gd) {
										continue;
									}
									else
										Gd = 1;
								}
										break;
								case 'h': {
									if (Hd) {
										continue;
									}
									else
										Hd = 1;
								}
										break;
								case 'i': {
									if (Id) {
										continue;
									}
									else
										Id = 1;
								}
										break;
								case 'j': {
									if (Jd) {
										continue;
									}
									else
										Jd = 1;
								}
										break;
								case 'k': {
									if (Kd) {
										continue;
									}
									else
										Kd = 1;
								}
										break;
								case 'l': {
									if (Ld) {
										continue;
									}
									else
										Ld = 1;
								}
										break;
								case 'm': {
									if (Md) {
										continue;
									}
									else
										Md = 1;
								}
										break;
								case 'n': {
									if (Nd) {
										continue;
									}
									else
										Nd = 1;
								}
										break;
								case 'o': {
									if (Od) {
										continue;
									}
									else
										Od = 1;
								}
										break;
								case 'p': {
									if (Pd) {
										continue;
									}
									else
										Pd = 1;
								}
										break;
								case 'q': {
									if (Qd) {
										continue;
									}
									else
										Qd = 1;
								}
										break;
								case 'r': {
									if (Rd) {
										continue;
									}
									else
										Rd = 1;
								}
										break;
								case 's': {
									if (Sd) {
										continue;
									}
									else
										Sd = 1;
								}
										break;
								case 't': {
									if (Td) {
										continue;
									}
									else
										Td = 1;
								}
										break;
								case 'u': {
									if (Ud) {
										continue;
									}
									else
										Ud = 1;
								}
										break;
								case 'v': {
									if (Vd) {
										continue;
									}
									else
										Vd = 1;
								}
										break;
								case 'w': {
									if (Wd) {
										continue;
									}
									else
										Wd = 1;
								}
										break;
								case 'x': {
									if (Xd) {
										continue;
									}
									else
										Xd = 1;
								}
										break;
								case 'y': {
									if (Yd) {
										continue;
									}
									else
										Yd = 1;
								}
										break;
								case 'z': {
									if (Zd) {
										continue;
									}
									else
										Zd = 1;
								}
										break;
								}
								break;
							}
						}
					}
				}break;
				}

				///Hint3>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hint3sprit.getGlobalBounds().contains(mousePosF)) {
						Hint3sprit.setColor(sf::Color(70, 70, 70));
						Hint3sprit.setScale(0.53f, 0.53f);
					}
					else {
						Hint3sprit.setColor(sf::Color(255, 255, 255));
						Hint3sprit.setScale(0.5f, 0.5f);
					}
				}break;
				case sf::Event::MouseButtonPressed:
				{
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (Hint3sprit.getGlobalBounds().contains(mousePosF)) {
						if ((life3 == 0 && nolife3 == 1) || (life5 == 0 && nolife5 == 1) || (life4 == 0 && nolife4 == 1) || (life6 == 0 && nolife6 == 1)) {
							Hint3 = 0;
							noHint3 = 1;
							for (int y = 0; y < Word.getSize(); y++) {
								switch (Word[y])
								{
								case 'a':
								{
									if (Ad) {
										continue;
									}
									else
										Ad = 1;
								}
								break;
								case 'b': {
									if (Bd) {
										continue;
									}
									else
										Bd = 1;
								}
										break;
								case 'c': {
									if (Cd) {
										continue;
									}
									else
										Cd = 1;
								}
										break;

								case 'd': {
									if (Dd) {
										continue;
									}
									else
										Dd = 1;
								}
										break;

								case 'e': {
									if (Ed) {
										continue;
									}
									else
										Ed = 1;
								}
										break;
								case 'f': {
									if (Fd) {
										continue;
									}
									else
										Fd = 1;
								}
										break;
								case 'g': {
									if (Gd) {
										continue;
									}
									else
										Gd = 1;
								}
										break;
								case 'h': {
									if (Hd) {
										continue;
									}
									else
										Hd = 1;
								}
										break;
								case 'i': {
									if (Id) {
										continue;
									}
									else
										Id = 1;
								}
										break;
								case 'j': {
									if (Jd) {
										continue;
									}
									else
										Jd = 1;
								}
										break;
								case 'k': {
									if (Kd) {
										continue;
									}
									else
										Kd = 1;
								}
										break;
								case 'l': {
									if (Ld) {
										continue;
									}
									else
										Ld = 1;
								}
										break;
								case 'm': {
									if (Md) {
										continue;
									}
									else
										Md = 1;
								}
										break;
								case 'n': {
									if (Nd) {
										continue;
									}
									else
										Nd = 1;
								}
										break;
								case 'o': {
									if (Od) {
										continue;
									}
									else
										Od = 1;
								}
										break;
								case 'p': {
									if (Pd) {
										continue;
									}
									else
										Pd = 1;
								}
										break;
								case 'q': {
									if (Qd) {
										continue;
									}
									else
										Qd = 1;
								}
										break;
								case 'r': {
									if (Rd) {
										continue;
									}
									else
										Rd = 1;
								}
										break;
								case 's': {
									if (Sd) {
										continue;
									}
									else
										Sd = 1;
								}
										break;
								case 't': {
									if (Td) {
										continue;
									}
									else
										Td = 1;
								}
										break;
								case 'u': {
									if (Ud) {
										continue;
									}
									else
										Ud = 1;
								}
										break;
								case 'v': {
									if (Vd) {
										continue;
									}
									else
										Vd = 1;
								}
										break;
								case 'w': {
									if (Wd) {
										continue;
									}
									else
										Wd = 1;
								}
										break;
								case 'x': {
									if (Xd) {
										continue;
									}
									else
										Xd = 1;
								}
										break;
								case 'y': {
									if (Yd) {
										continue;
									}
									else
										Yd = 1;
								}
										break;
								case 'z': {
									if (Zd) {
										continue;
									}
									else
										Zd = 1;
								}
										break;
								}
								break;
							}
						}
					}
				}break;
				}

				///optionButton>>>>.......
				switch (event.type) {
				case sf::Event::MouseMoved: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (optsprit.getGlobalBounds().contains(mousePosF)) {
						optsprit.setColor(sf::Color(150, 0, 100));
						optsprit.setScale(.72f, .72f);
					}
					else
					{
						optsprit.setColor(sf::Color(255, 255, 255));
						optsprit.setScale(0.7f, 0.7f);
					}

				}break;
				case sf::Event::MouseButtonPressed: {
					sf::Vector2i mousePos = sf::Mouse::getPosition(window);
					sf::Vector2f mousePosF(static_cast<float>(mousePos.x), static_cast<float>(mousePos.y));
					if (optsprit.getGlobalBounds().contains(mousePosF)) {
						InOption = 1; fromprocesstooption = 1;
					}
				}
												  break;
				}

				//A>>>>>>Z(The letters shown of the word)................................................................................
				int index = 0;
				for (int counter = 0; counter < DictionaryGame.check(Word, letter).size(); counter++) {
					vector<int> vec = DictionaryGame.check(Word, letter);
					int quant = vec[counter];
					cout << quant << "vector size" << DictionaryGame.check(Word, letter).size() << endl;

					switch (letter)
					{
					case 'a':
						AShowSprite.setPosition((73.0f + count1 * quant), 350.0f);///////////////////
						AShowSprite.setScale(.27f, .5f);
						AShowSprite.setTexture(AShowtext);
						AShowtext.setSmooth(true);
						break;
					case 'u':
						UShowSprite.setPosition((73.0f + count1 * quant), 350.0f);
						UShowSprite.setScale(.27f, .5f);
						UShowSprite.setTexture(UShowtext);
						UShowtext.setSmooth(true);
						break;
					case 'n':
						NShowSprite.setPosition((73.0f + count1 * quant), 350.0f);
						NShowSprite.setScale(.27f, .5f);
						NShowSprite.setTexture(NShowtext);
						NShowtext.setSmooth(true);
						break;
					default:
						break;
					}
				}

			}
			int wordSize = 0;//>>>>>>>..................................................................................................
			if (Ad) {
				for (int w = 0; w < DictionaryGame.check(Word, 'a').size(); w++) {
					vector<int> Avec = DictionaryGame.check(Word, 'a');
					int quanta = Avec[w];
					AShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					AShowSprite.setScale(.27f, .5f);
					AShowSprite.setTexture(AShowtext);
					AShowtext.setSmooth(true);
					wordSize++;
					window.draw(AShowSprite);
				}
			}
			if (Bd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'b').size(); w++) {
					vector<int> Bvec = DictionaryGame.check(Word, 'b');
					int quanta = Bvec[w];
					BShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					BShowSprite.setScale(.27f, .5f);
					BShowSprite.setTexture(BShowtext);
					BShowtext.setSmooth(true);
					wordSize++;
					window.draw(BShowSprite);
				}
			}
			if (Nd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'n').size(); w++) {
					vector<int> Nvec = DictionaryGame.check(Word, 'n');
					int quanta = Nvec[w];
					NShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					NShowSprite.setScale(.27f, .5f);
					NShowSprite.setTexture(NShowtext);
					NShowtext.setSmooth(true);
					wordSize++;
					window.draw(NShowSprite);
				}
			}
			if (Cd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'c').size(); w++) {
					vector<int> Cvec = DictionaryGame.check(Word, 'c');
					int quanta = Cvec[w];
					CShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					CShowSprite.setScale(.27f, .5f);
					CShowSprite.setTexture(CShowtext);
					CShowtext.setSmooth(true);
					wordSize++;
					window.draw(CShowSprite);
				}
			}
			if (Dd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'd').size(); w++) {
					vector<int> Dvec = DictionaryGame.check(Word, 'd');
					int quanta = Dvec[w];
					DShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					DShowSprite.setScale(.27f, .5f);
					DShowSprite.setTexture(DShowtext);
					DShowtext.setSmooth(true);
					wordSize++;
					window.draw(DShowSprite);
				}
			}
			if (Ed) {
				for (int w = 0; w < DictionaryGame.check(Word, 'e').size(); w++) {
					vector<int> Evec = DictionaryGame.check(Word, 'e');
					int quanta = Evec[w];
					EShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					EShowSprite.setScale(.27f, .5f);
					EShowSprite.setTexture(EShowtext);
					EShowtext.setSmooth(true);
					wordSize++;
					window.draw(EShowSprite);
				}
			}
			if (Fd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'f').size(); w++) {
					vector<int> Fvec = DictionaryGame.check(Word, 'f');
					int quanta = Fvec[w];
					FShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					FShowSprite.setScale(.27f, .5f);
					FShowSprite.setTexture(FShowtext);
					FShowtext.setSmooth(true);
					wordSize++;
					window.draw(FShowSprite);
				}
			}
			if (Gd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'g').size(); w++) {
					vector<int> Gvec = DictionaryGame.check(Word, 'g');
					int quanta = Gvec[w];
					GShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					GShowSprite.setScale(.27f, .5f);
					GShowSprite.setTexture(GShowtext);
					GShowtext.setSmooth(true);
					wordSize++;
					window.draw(GShowSprite);
				}
			}
			if (Hd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'h').size(); w++) {
					vector<int> Hvec = DictionaryGame.check(Word, 'h');
					int quanta = Hvec[w];
					HShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					HShowSprite.setScale(.27f, .5f);
					HShowSprite.setTexture(HShowtext);
					HShowtext.setSmooth(true);
					wordSize++;
					window.draw(HShowSprite);
				}
			}
			if (Id) {
				for (int w = 0; w < DictionaryGame.check(Word, 'i').size(); w++) {
					vector<int> Ivec = DictionaryGame.check(Word, 'i');
					int quanta = Ivec[w];
					IShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					IShowSprite.setScale(.27f, .5f);
					IShowSprite.setTexture(IShowtext);
					IShowtext.setSmooth(true);
					wordSize++;
					window.draw(IShowSprite);
				}
			}
			if (Jd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'j').size(); w++) {
					vector<int> Jvec = DictionaryGame.check(Word, 'j');
					int quanta = Jvec[w];
					JShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					JShowSprite.setScale(.27f, .5f);
					JShowSprite.setTexture(JShowtext);
					JShowtext.setSmooth(true);
					wordSize++;
					window.draw(JShowSprite);
				}
			}
			if (Kd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'k').size(); w++) {
					vector<int> Kvec = DictionaryGame.check(Word, 'k');
					int quanta = Kvec[w];
					KShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					KShowSprite.setScale(.27f, .5f);
					KShowSprite.setTexture(KShowtext);
					KShowtext.setSmooth(true);
					wordSize++;
					window.draw(KShowSprite);
				}
			}
			if (Ld) {
				for (int w = 0; w < DictionaryGame.check(Word, 'l').size(); w++) {
					vector<int> Lvec = DictionaryGame.check(Word, 'l');
					int quanta = Lvec[w];
					LShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					LShowSprite.setScale(.27f, .5f);
					LShowSprite.setTexture(LShowtext);
					LShowtext.setSmooth(true);
					wordSize++;
					window.draw(LShowSprite);
				}
			}
			if (Md) {
				for (int w = 0; w < DictionaryGame.check(Word, 'm').size(); w++) {
					vector<int> Mvec = DictionaryGame.check(Word, 'm');
					int quanta = Mvec[w];
					MShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					MShowSprite.setScale(.27f, .5f);
					MShowSprite.setTexture(MShowtext);
					MShowtext.setSmooth(true);
					wordSize++;
					window.draw(MShowSprite);
				}
			}
			if (Od) {
				for (int w = 0; w < DictionaryGame.check(Word, 'o').size(); w++) {
					vector<int> Ovec = DictionaryGame.check(Word, 'o');
					int quanta = Ovec[w];
					OShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					OShowSprite.setScale(.27f, .5f);
					OShowSprite.setTexture(OShowtext);
					OShowtext.setSmooth(true);
					wordSize++;
					window.draw(OShowSprite);
				}
			}
			if (Pd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'p').size(); w++) {
					vector<int> Pvec = DictionaryGame.check(Word, 'p');
					int quanta = Pvec[w];
					PShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					PShowSprite.setScale(.27f, .5f);
					PShowSprite.setTexture(PShowtext);
					PShowtext.setSmooth(true);
					wordSize++;
					window.draw(PShowSprite);
				}
			}
			if (Qd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'q').size(); w++) {
					vector<int> Qvec = DictionaryGame.check(Word, 'q');
					int quanta = Qvec[w];
					QShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					QShowSprite.setScale(.27f, .5f);
					QShowSprite.setTexture(QShowtext);
					QShowtext.setSmooth(true);
					wordSize++;
					window.draw(QShowSprite);
				}
			}
			if (Rd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'r').size(); w++) {
					vector<int> Rvec = DictionaryGame.check(Word, 'r');
					int quanta = Rvec[w];
					RShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					RShowSprite.setScale(.27f, .5f);
					RShowSprite.setTexture(RShowtext);
					RShowtext.setSmooth(true);
					wordSize++;
					window.draw(RShowSprite);
				}
			}
			if (Sd) {
				for (int w = 0; w < DictionaryGame.check(Word, 's').size(); w++) {
					vector<int> Svec = DictionaryGame.check(Word, 's');
					int quanta = Svec[w];
					SShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					SShowSprite.setScale(.27f, .5f);
					SShowSprite.setTexture(SShowtext);
					SShowtext.setSmooth(true);
					wordSize++;
					window.draw(SShowSprite);
				}
			}
			if (Td) {
				for (int w = 0; w < DictionaryGame.check(Word, 't').size(); w++) {
					vector<int> Tvec = DictionaryGame.check(Word, 't');
					int quanta = Tvec[w];
					TShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					TShowSprite.setScale(.27f, .5f);
					TShowSprite.setTexture(TShowtext);
					TShowtext.setSmooth(true);
					wordSize++;
					window.draw(TShowSprite);
				}
			}
			if (Ud) {
				for (int w = 0; w < DictionaryGame.check(Word, 'u').size(); w++) {
					vector<int> Uvec = DictionaryGame.check(Word, 'u');
					int quanta = Uvec[w];
					UShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					UShowSprite.setScale(.27f, .5f);
					UShowSprite.setTexture(UShowtext);
					UShowtext.setSmooth(true);
					wordSize++;
					window.draw(UShowSprite);
				}
			}
			if (Vd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'v').size(); w++) {
					vector<int> Vvec = DictionaryGame.check(Word, 'v');
					int quanta = Vvec[w];
					VShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					VShowSprite.setScale(.27f, .5f);
					VShowSprite.setTexture(VShowtext);
					VShowtext.setSmooth(true);
					wordSize++;
					window.draw(VShowSprite);
				}
			}
			if (Wd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'w').size(); w++) {
					vector<int> Wvec = DictionaryGame.check(Word, 'w');
					int quanta = Wvec[w];
					WShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					WShowSprite.setScale(.27f, .5f);
					WShowSprite.setTexture(WShowtext);
					WShowtext.setSmooth(true);
					wordSize++;
					window.draw(WShowSprite);
				}
			}
			if (Xd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'x').size(); w++) {
					vector<int> Xvec = DictionaryGame.check(Word, 'x');
					int quanta = Xvec[w];
					XShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					XShowSprite.setScale(.27f, .5f);
					XShowSprite.setTexture(XShowtext);
					XShowtext.setSmooth(true);
					wordSize++;
					window.draw(XShowSprite);
				}
			}
			if (Yd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'y').size(); w++) {
					vector<int> Yvec = DictionaryGame.check(Word, 'y');
					int quanta = Yvec[w];
					YShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					YShowSprite.setScale(.27f, .5f);
					YShowSprite.setTexture(YShowtext);
					YShowtext.setSmooth(true);
					wordSize++;
					window.draw(YShowSprite);
				}
			}
			if (Zd) {
				for (int w = 0; w < DictionaryGame.check(Word, 'z').size(); w++) {
					vector<int> Zvec = DictionaryGame.check(Word, 'z');
					int quanta = Zvec[w];
					ZShowSprite.setPosition((73.0f + count1 * quanta), 350.0f);
					ZShowSprite.setScale(.27f, .5f);
					ZShowSprite.setTexture(ZShowtext);
					ZShowtext.setSmooth(true);
					wordSize++;
					window.draw(ZShowSprite);
				}
			}
			cout << "checking int" << wordSize << "Word Size" << Word.getSize() << endl;
			if (wordSize == Word.getSize() - 1) {
				for (int i = 0; i < Word.getSize(); i++) {
					if (Word[i] == ' ') {
						TaDa.play();
						// winning fe klma mn mkt3en
						window.draw(winningsprit);
						break;
					}
				}
			}
			if (wordSize == Word.getSize()) {
				// winning fe klma mn mkt3 wa7ed
				TaDa.play();
				winningsprit.setPosition(41, 84);
				Inwinning = 1; Inprocess = 0;
			}
			else if (nolife6 == 1 && life6 == 0) {
				//5sr bgdara
				Loser.play();
				losingsprit.setPosition(41, 84);
				Inlosing = 1; Inprocess = 0;
			}
		}

		window.display();
	}
	return 0;
}