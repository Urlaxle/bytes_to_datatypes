#include "b2d/b2d_player.h"

using namespace b2d;

void b2d::play_binary(string binary_file) {
		    // Open the file in binary mode.
    std::ifstream file(binary_file, std::ios::binary);

    if (!file) {
        std::cerr << "Cannot open file." << std::endl;
        return;
    }

    // Read the file byte by byte.
    uint8_t byte;
    while (file.read(reinterpret_cast<char*>(&byte), sizeof(byte))) {
        // Process the byte. For example, print its value.
        std::cout << "Read byte: " << static_cast<int>(byte) << std::endl;
    }

}


int main() {
	string s = "/home/urlaxle/dev/rov_chair/bytes_to_datatypes/data.bin";
	play_binary(s);
	return 1;
}
