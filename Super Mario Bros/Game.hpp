#pragma once

#include <memory>
#include <string>
#include <SFML/Graphics.hpp>
#include "StateMachine.hpp"
#include "AssetManager.hpp"

namespace Game {

	struct GameData {
		StateMachine machine;
		sf::RenderWindow window;
		AssetManager assets;
		sf::Music music;
	};

	typedef std::shared_ptr<GameData> gameDataRef;

	class Game {
	public:
		Game(int width, int height, std::string title);


	private:
		sf::Clock _clock;

		const float dt = 1.0f / 240.0f;

		gameDataRef _data = std::make_shared<GameData>();

		void run();


	};








}
