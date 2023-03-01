#include <SFML/Graphics.hpp>

using namespace sf;

int main() {

	// four possible states - game will always be in one of these states...
	enum class State { PAUSED, LEVEL_UP, GAME_OVER, PLAYING };
	// game starts with GAME_OVER 
	State state = State::GAME_OVER;


	// start game loop
	while (window.isOpen()) {
	
		// check state, update game where appropriate &c.
		if (state == State::PLAYING) {

			// update frame &c.	

		}

		if (state == State::LEVEL_UP) {

		}


		if (state == State::PAUSED) {

		}

		if (state == State::GAME_OVER) {

		}

	} // end game loop

	return 0;

} // end main
