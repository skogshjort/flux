#ifndef _CHARACTERSELECT_H_
#define _CHARACTERSELECT_H_

#include "EventPass.hpp"

class Game;
class Player;
class PlayerDummy;

class Button;


class CharacterSelect : public EventPass {

public:

	sf::View view;

	sf::Sprite characterSprite;
	sf::Text text;
	sf::Color backgroundColor;

	float timer;

	std::vector<PlayerDummy *> *playerDummys;

	// #### this should be fixed
	sf::RenderWindow *win;

	Button *startButton;


	CharacterSelect();
	virtual ~CharacterSelect();


	virtual EventPass *eventHandle(sf::Event event);

	virtual EventPass *update(float elapsedTime);

	virtual void draw(sf::RenderWindow *window);

private:

	void addDummy(sf::Color color, int input_handle);
	void loadPlayerList(const char* path);
	void savePlayerList(const char* path);

	EventPass *createGame();

};

#endif
