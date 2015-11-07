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

	sf::Event::EventType catchEvent;
	int catchIndex;


	CharacterSelect();
	virtual ~CharacterSelect();


	virtual EventPass *eventHandle(sf::Event event);

	virtual EventPass *update(float elapsedTime);

	virtual void draw(sf::RenderWindow *window);

private:

	void loadPlayerList(const char* path);
	void savePlayerList(const char* path);

	EventPass *createGame();

};

#endif
