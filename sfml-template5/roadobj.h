#pragma once
#include "settings.h"
#include "SFML/Graphics.hpp"

class RoadObj {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float offset;
public:
    RoadObj() {
		obj.texture.loadFromFile(fileName);
		obj.texture.setRepeated(true);
		obj.sprite.setTexture(obj.texture);
		obj.sprite.setPosition(pos);
		obj.offset = offset;
	}

	void roadObjUpdate(RoadObj& obj) {
		obj.sprite.move(0, ROAD_OBJ_SPEED);
		if (obj.sprite.getPosition().y >= WINDOW_HEIGHT) {
			obj.sprite.setPosition(obj.offset, -WINDOW_HEIGHT);
		}
	}

	void roadObjDraw(sf::RenderWindow& window, const RoadObj& obj) {
		window.draw(obj.sprite);
	}
};
