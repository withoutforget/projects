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
str aw1;
str aw2;
str aw3;
str aw4;
str aw5;
str aw6;
str aw7;
str ar1;
str ar2;
str ar3;
str ar4;
str ar5;
str ar6;
str ar7;
str ab1;
str ab2;
str ab3;
str ab4;
str ab5;
str ab6;
str ab7;
void getsym(int id, int s) {
	if (id == 0) {
		if (s == 1) {
			as1 = "   ###   ";
			as2 = "  #   #  ";
			as3 = " #     # ";
			as4 = " #     # ";
			as5 = " #     # ";
			as6 = "  #   #  ";
			as7 = "   ###   ";
		}
		else if (s==2) {
			aw1 = "   ###   ";
			aw2 = "  #   #  ";
			aw3 = " #     # ";
			aw4 = " #     # ";
			aw5 = " #     # ";
			aw6 = "  #   #  ";
			aw7 = "   ###   ";

		}
		else {
			ar1 = "   ###   ";
			ar2 = "  #   #  ";
			ar3 = " #     # ";
			ar4 = " #     # ";
			ar5 = " #     # ";
			ar6 = "  #   #  ";
			ar7 = "   ###   ";
		}
	}
	else if (id == 1) {
		if (s == 1) {
			as1 = "   #   ";
			as2 = "  ##   ";
			as3 = " # #   ";
			as4 = "   #   ";
			as5 = "   #   ";
			as6 = "   #   ";
			as7 = " ##### ";
		}
		else if (s == 2) {
			aw1 = "   #   ";
			aw2 = "  ##   ";
			aw3 = " # #   ";
			aw4 = "   #   ";
			aw5 = "   #   ";
			aw6 = "   #   ";
			aw7 = " ##### ";
		}
		else {
			ar1 = "   #   ";
			ar2 = "  ##   ";
			ar3 = " # #   ";
			ar4 = "   #   ";
			ar5 = "   #   ";
			ar6 = "   #   ";
			ar7 = " ##### ";
		}
	}
	else if (id == 2) {
		if (s == 1) {
			as1 = "  #####  ";
			as2 = " #     # ";
			as3 = "       # ";
			as4 = "  #####  ";
			as5 = " #       ";
			as6 = " #       ";
			as7 = " ####### ";
		}
		else if (s == 2) {
			aw1 = "  #####  ";
			aw2 = " #     # ";
			aw3 = "       # ";
			aw4 = "  #####  ";
			aw5 = " #       ";
			aw6 = " #       ";
			aw7 = " ####### ";
		}
		else {
			ar1 = "  #####  ";
			ar2 = " #     # ";
			ar3 = "       # ";
			ar4 = "  #####  ";
			ar5 = " #       ";
			ar6 = " #       ";
			ar7 = " ####### ";
		}
	}
	else if (id == 3) {
		if (s == 1) {
			as1 = "  #####  ";
			as2 = " #     # ";
			as3 = "       # ";
			as4 = "  #####  ";
			as5 = "       # ";
			as6 = " #     # ";
			as7 = "  #####  ";
		}
		else if (s == 2) {
			aw1 = "  #####  ";
			aw2 = " #     # ";
			aw3 = "       # ";
			aw4 = "  #####  ";
			aw5 = "       # ";
			aw6 = " #     # ";
			aw7 = "  #####  ";
		}
		else {
			ar1 = "  #####  ";
			ar2 = " #     # ";
			ar3 = "       # ";
			ar4 = "  #####  ";
			ar5 = "       # ";
			ar6 = " #     # ";
			ar7 = "  #####  ";
		}
	}
	else if (id == 4) {
		if (s == 1) {
			as1 = " #       ";
			as2 = " #    #  ";
			as3 = " #    #  ";
			as4 = " #    #  ";
			as5 = " ####### ";
			as6 = "      #  ";
			as7 = "      #  ";
		}
		else if (s == 2) {
			aw1 = " #       ";
			aw2 = " #    #  ";
			aw3 = " #    #  ";
			aw4 = " #    #  ";
			aw5 = " ####### ";
			aw6 = "      #  ";
			aw7 = "      #  ";
		}
		else {
			ar1 = " #       ";
			ar2 = " #    #  ";
			ar3 = " #    #  ";
			ar4 = " #    #  ";
			ar5 = " ####### ";
			ar6 = "      #  ";
			ar7 = "      #  ";
		}
	}
	else if (id == 5) {
		if (s == 1) {
			as1 = " ####### ";
			as2 = " #       ";
			as3 = " #       ";
			as4 = " ######  ";
			as5 = "       # ";
			as6 = " #     # ";
			as7 = "  #####  ";
		}
		else if (s == 2) {
			aw1 = " ####### ";
			aw2 = " #       ";
			aw3 = " #       ";
			aw4 = " ######  ";
			aw5 = "       # ";
			aw6 = " #     # ";
			aw7 = "  #####  ";
		}
		else {
			ar1 = " ####### ";
			ar2 = " #       ";
			ar3 = " #       ";
			ar4 = " ######  ";
			ar5 = "       # ";
			ar6 = " #     # ";
			ar7 = "  #####  ";
		}
	}
	else if (id == 6) {
	if (s == 1) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = " #       ";
		as4 = " ######  ";
		as5 = " #     # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else if (s == 2) {
		aw1 = "  #####  ";
		aw2 = " #     # ";
		aw3 = " #       ";
		aw4 = " ######  ";
		aw5 = " #     # ";
		aw6 = " #     # ";
		aw7 = "  #####  ";
	}
	else {
		ar1 = "  #####  ";
		ar2 = " #     # ";
		ar3 = " #       ";
		ar4 = " ######  ";
		ar5 = " #     # ";
		ar6 = " #     # ";
		ar7 = "  #####  ";
	}
	}
	else if (id == 7) {
		if (s == 1) {
			as1 = " ####### ";
			as2 = " #    #  ";
			as3 = "     #   ";
			as4 = "    #    ";
			as5 = "   #     ";
			as6 = "   #     ";
			as7 = "   #     ";
		}
		else if (s == 2) {
			aw1 = " ####### ";
			aw2 = " #    #  ";
			aw3 = "     #   ";
			aw4 = "    #    ";
			aw5 = "   #     ";
			aw6 = "   #     ";
			aw7 = "   #     ";
		}
		else {
			ar1 = " ####### ";
			ar2 = " #    #  ";
			ar3 = "     #   ";
			ar4 = "    #    ";
			ar5 = "   #     ";
			ar6 = "   #     ";
			ar7 = "   #     ";
		}
	}
	else if (id == 8) {
	if (s == 1) {
		as1 = "  #####  ";
		as2 = " #     # ";
		as3 = " #     # ";
		as4 = "  #####  ";
		as5 = " #     # ";
		as6 = " #     # ";
		as7 = "  #####  ";
	}
	else if (s == 2) {
		aw1 = "  #####  ";
		aw2 = " #     # ";
		aw3 = " #     # ";
		aw4 = "  #####  ";
		aw5 = " #     # ";
		aw6 = " #     # ";
		aw7 = "  #####  ";
	}
	else {
		ar1 = "  #####  ";
		ar2 = " #     # ";
		ar3 = " #     # ";
		ar4 = "  #####  ";
		ar5 = " #     # ";
		ar6 = " #     # ";
		ar7 = "  #####  ";
	}
	}
	else if (id == 9) {
		if (s == 1) {
			as1 = "  #####  ";
			as2 = " #     # ";
			as3 = " #     # ";
			as4 = "  #####  ";
			as5 = "       # ";
			as6 = " #     # ";
			as7 = "  #####  ";
		}
		else if (s == 2) {
			aw1 = "  #####  ";
			aw2 = " #     # ";
			aw3 = " #     # ";
			aw4 = "  #####  ";
			aw5 = "       # ";
			aw6 = " #     # ";
			aw7 = "  #####  ";
		}
		else {
			ar1 = "  #####  ";
			ar2 = " #     # ";
			ar3 = " #     # ";
			ar4 = "  #####  ";
			ar5 = "       # ";
			ar6 = " #     # ";
			ar7 = "  #####  ";
		}
	}
	else {
		if (s == 1) {
			as1 = "       ";
			as2 = "   #   ";
			as3 = "   #   ";
			as4 = " ##### ";
			as5 = "   #   ";
			as6 = "   #   ";
			as7 = "       ";
		}
		else if (s == 2) {
			aw1 = "       ";
			aw2 = "   #   ";
			aw3 = "   #   ";
			aw4 = " ##### ";
			aw5 = "   #   ";
			aw6 = "   #   ";
			aw7 = "       ";
		}
		else {
			ar1 = "       ";
			ar2 = "   #   ";
			ar3 = "   #   ";
			ar4 = " ##### ";
			ar5 = "   #   ";
			ar6 = "   #   ";
			ar7 = "       ";
		}
	}
}
void setrend() {
	ab1 = as1 + aw1 + ar1;
	ab2 = as2 + aw2 + ar2;
	ab3 = as3 + aw3 + ar3;
	ab4 = as4 + aw4 + ar4;
	ab5 = as5 + aw5 + ar5;
	ab6 = as6 + aw6 + ar6;
	ab7 = as7 + aw7 + ar7;
}
void render() {
	cout << endl << ab1 << endl << ab2 << endl << ab3 << endl << ab4 << endl << ab5 << endl << ab6 << endl << ab7 << endl;
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

	void use() {
		srand(time(0));
		int k1 = rand() % 9;
		int k2 = rand() % 9;
		if (type == 1) {
			getsym(k1,1);
			getsym(-1, 2);
			getsym(k2, 3);
			setrend();
			render();
		}
		else if (type == 2) {
			cout << k1 << "+" << k2 << endl;
		}
		answ = k1 + k2;
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

