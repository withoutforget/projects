#pragma once
#include <iostream>
using namespace std;
#define str string
str as1;
str as2;
str as3;
str as4;
str as5;
str as6;
str as7;
void getsym(int id) {
	if (id == 0) {
		as1 = "   ###   ";
		as2 = "  #   #  ";
		as3 = " #     # ";
		as4 = " #     # ";
		as5 = " #     # ";
		as6 = "  #   #  ";
		as7 = "   ###   ";
	}
	else if (id == 1) {
		as1 = "   #   ";
		as2 = "  ##   ";
		as3 = " # #   ";
		as4 = "   #   ";
		as5 = "   #   ";
		as6 = "   #   ";
		as7 = " ##### ";
	}
	else if (id == 2) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = "       # ";
		as4 = "  #####  ";
		as5 = " #       ";
		as6 = " #       ";
		as7 = " ####### ";
	}
	else if (id == 3) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = "       # ";
		as4 = "  #####  ";
		as5 = "       # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else if (id == 4) {
		as1 = " #       ";
		as2 = " #    #  ";
		as3 = " #    #  ";
		as4 = " #    #  ";
		as5 = " ####### ";
		as6 = "      #  ";
		as7 = "      #  ";
	}
	else if (id == 5) {
		as1 = " ####### ";
		as2 = " #       ";
		as3 = " #       ";
		as4 = " ######  ";
		as5 = "       # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else if (id == 6) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = " #       ";
		as4 = " ######  ";
		as5 = " #     # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else if (id == 7) {
		as1 = " ####### ";
		as2 = " #    #  ";
		as3 = "     #   ";
		as4 = "    #    ";
		as5 = "   #     ";
		as6 = "   #     ";
		as7 = "   #     ";
	}
	else if (id == 8) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = " #     # ";
		as4 = "  #####  ";
		as5 = " #     # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else if (id == 9) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = " #     # ";
		as4 = "  #####  ";
		as5 = "       # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else {
		as1 = "       ";
		as2 = "   #   ";
		as3 = "   #   ";
		as4 = " ##### ";
		as5 = "   #   ";
		as6 = "   #   ";
		as7 = "       ";
	}
}
void render() {
	cout << endl << as1 << endl << as2 << endl << as3 << endl << as4 << endl << as5 << endl << as6 << endl << as7 << endl;
}
struct cap {
private:
	int type = 1;
	int answ;
public:
	int changetype(int type1 = -1) {
		if (type1 == -1) {
			return type;
		}
		else if (type1 == 1) {
			type = 1;
			return 1;
		}
		else if (type1 == 2) {
			type = 2;
			return 2;
		}
	}

	bool use() {
		srand(time(0));
		int k1 = rand() % 9;
		int k2 = rand() % 9;
		if (type == 1) {
			getsym(k1);
			render();
			getsym(-1);
			render();
			getsym(k2);
			render();
		}
		else if (type == 2) {
			cout << k1 << "+" << k2 << endl;
		}


		answ = k1 + k2;
		return true;
	}


	
	bool check(int an) {
		if (an == answ)
			return true;
		else
			return false;
	}

};
/*  	int id;
bool create(int key) {
		if (key <= 0) {
			cerr << "Key isn`t positive number";
			return false;
		}
		id = 1;
		return true;
	}*/

