#include <iostream>
#include <vector>
#include <string>
#include <fstream>

enum{
	_1 = 1,
	_2 = 2,
	_3 = 3,

};

class PatternFind {
public: 
	PatternFind();
	static std::pair<int, int> find( const std::vector<std::string> &tab ) {
		// ABC
		// B..
		// C..

		for( unsigned int y = 0; y < tab.size(); y++ ) {
			for( unsigned int x = 0; x < tab.at( y ).size()-3; x++ ) { // from 0 to 3rd element from end
				std::string line = tab.at( y );
				try {
					if( line.at( x ) == 'A' && line.at( x + 1 ) == 'B' && line.at( x + 2 ) == 'C' ) {
						// check if y axis also A B C
						if( tab.at( y + 1 ).at( x ) == 'B' && tab.at( y + 2 ).at( x ) == 'C' ) {
							return std::pair<int, int>( x, y );
						}
					}
				}
				catch( const std::out_of_range& e ){
					std::cout << "tab out of range error/n";
				}
			}
		}
	}

	static std::vector<std::string> transform(std::string fileName) {
		std::ifstream file;
		std::vector<std::string> ret;

		file.open( fileName );
		if( !file.is_open() ) {
			throw "wrong file name";
		}

		std::string help;
		while( file >> help ) {
			ret.push_back( help );
		}

		return ret;
	}
};

int main() {

	return 0;
}