#include<iostream>

using namespace std;

int main()
{
	//��ü�� ĸ��ȭ
	class Circle {
	private:
		int radius;
	public:
		Circle(int r) { radius = r; }
		double getArea() { return 3.14*radius*radius; }
	};


	//��Ӽ�

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