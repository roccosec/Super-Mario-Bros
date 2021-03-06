#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <array>
#include <vector>
#include "DEFINITIONS.hpp"
#include "Game.hpp"
#include "Tile.hpp"
#include "Item.hpp"
#include "Coin.hpp"
#include "Mushroom.hpp"

namespace Game {

	class BoxTile : public Tile
	{
	public:
		BoxTile() = default;
		BoxTile(const int& x, const int& y, Items item, Setting setting, int& coins, std::vector<Score>& scores, gameDataRef data);

		void draw();
		void update(std::vector<Item*>& items, Mario& mario);
		void animate(const float& dt);
		sf::Sprite& getTile();

	private:
		gameDataRef _data;

		sf::Sprite _tile;

		unsigned short int _boxAnimationIterator = 0;

		std::array<sf::IntRect, 5> _boxAnimationFrames = { BOX_TILE1, BOX_TILE1, BOX_TILE1, BOX_TILE2, BOX_TILE3 };

		sf::Clock _clock;

		Items _item;

		bool _opened = false;

		bool _animationDone = false;

		float _animationHeight = -25.0f;

		float _animationSpeedY = -300;

		float _tileY = 0;

		int& _coins;

		std::vector<Score>& _scores;

	};


}

