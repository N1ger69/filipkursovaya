#pragma once
#include "settings.h"

class Player {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float speedx;
public:
    Player() {
		player.texture.loadFromFile(PLAYER_FILE_NAME);
		player.sprite.setTexture(player.texture);
		player.sprite.setPosition(PLAYER_START_POS);
		player.speedx = 0.f;
	}

};
