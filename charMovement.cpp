#include <iostream>
#include <windows.h>

using namespace std;

void moveChar();
void moveCharUp();
void moveCharDown();
void moveCharRight();
void moveCharLeft();

char Map[10] [10] = {"########",
					 "#^^^^^^#",
					 "#^^^^^^#",
					 "#^^^^^^#",
					 "#^^^^^^#",
					 "#^^^^^^#",
					 "#^^^^^^#",
					 "#^^^^^^#",
					 "#@^^^^^#",
					 "########"};

int Gamespeed = 100;
int Level = 0;
bool stopgame = false;

int main() {
	moveChar();
	/*while (stopgame == false) {
		system("CLS");
		for (int y = 0; y < 10; y++) {
			cout << Map[y] << endl;
		}
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) {
				switch(Map[y][x]) {
					case '@': {
						moveCharUp();
						moveCharDown();
						moveCharRight();
						moveCharLeft();
					} break;
				}
			}
		}
		Sleep(Gamespeed);
	}*/
	//moveCharUp();
	//moveCharDown();
	//moveCharRight();
	//moveCharLeft();
	return (0);
}

/*void moveCharUp() {	
	if (GetAsyncKeyState(VK_UP) != 0) {
		int y2 = (y - 1);
		switch(Map[y2] [x]) {
			case '^': {
				Map[y] [x] = '^';
				y -= 1;
				Map[y2] [x] = '@';
			} break;
		}
	}
};

void moveCharDown() {
	if (GetAsyncKeyState(VK_DOWN) != 0) {
		int y2 = (y + 1);
		switch(Map[y2] [x]) {
			case '^': {
				Map[y] [x] = '^';
				y += 1;
				Map[y2] [x] = '@';
			} break;
		}
	}
};

void moveCharRight() {
	if (GetAsyncKeyState(VK_RIGHT) != 0) {
		int x2 = (x + 1);
		switch(Map[y][x2]) {
			case '^': {
				Map[y] [x] = '^';
				x += 1;
				Map[y] [x2] = '@';	
			} break;
		}
	}
};

void moveCharLeft() {
	if (GetAsyncKeyState(VK_LEFT) != 0) {
		int x2 = (x - 1);
		switch(Map[y][x2]) {
			case '^': {
				Map[y] [x] = '^';
				x -= 1;
				Map[y] [x2] = '@';	
			} break;
		}
	}
};*/

void moveChar() {
	while (stopgame == false) {
		system("CLS");
		for (int y = 0; y < 10; y++) {
			cout << Map[y] << endl;
		}
		for (int y = 0; y < 10; y++) {
			for (int x = 0; x < 10; x++) {
				switch(Map[y][x]) {
					case '@': {
						if (GetAsyncKeyState(VK_UP) != 0) {
							int y2 = (y - 1);
							switch(Map[y2] [x]) {
								case '^': {
									Map[y] [x] = '^';
									y -= 1;
									Map[y2] [x] = '@';
								} break;
							}
						}
						if (GetAsyncKeyState(VK_DOWN) != 0) {
							int y2 = (y + 1);
							switch(Map[y2] [x]) {
								case '^': {
									Map[y] [x] = '^';
									y += 1;
									Map[y2] [x] = '@';
								} break;
							}
						}
						if (GetAsyncKeyState(VK_RIGHT) != 0) {
							int x2 = (x + 1);
							switch(Map[y][x2]) {
								case '^': {
									Map[y] [x] = '^';
									x += 1;
									Map[y] [x2] = '@';	
								} break;
							}
						}
						if (GetAsyncKeyState(VK_LEFT) != 0) {
							int x2 = (x - 1);
							switch(Map[y][x2]) {
								case '^': {
									Map[y] [x] = '^';
									x -= 1;
									Map[y] [x2] = '@';	
								} break;
							}
						}
					} break;
				}
			}
		}
		Sleep(Gamespeed);
	}
};