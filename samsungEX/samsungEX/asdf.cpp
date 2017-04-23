#include<iostream>

using namespace std;

int main()
{
	//按眉客 母蕉拳
	class Circle {
	private:
		int radius;
	public:
		Circle(int r) { radius = r; }
		double getArea() { return 3.14*radius*radius; }
	};


	//惑加己

	class Phone {
	public:
		void call();
		void receive();
	};

	class MobilePhone : public Phone {
	public:
		void connectWireless();
		void recharge();
	};

	class MusicPhone : public MobilePhone{
		void downloadMusic();
		void play();
	};



	return 0;
}