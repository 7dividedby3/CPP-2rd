#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <iostream>
using namespace std;
#endif
#ifdef _CLASS_CPU_
#ifdef _CLASS_RAM_
#ifndef _CLASS_COMPUTER_
#define _CLASS_COMPUTER_
class COMPUTER {
	public:
		COMPUTER() {
			cout << "默认构造了一个COMPUTER!" << endl;
			countC++;
		}
		COMPUTER(CPU newc, RAM newr, int newp): cpu(newc), ram(newr), price(newp) {
			cout << "初始化构造了一个COMPUTER!" << endl;
			countC++;
		}
		COMPUTER(const COMPUTER &p) {
			cpu = p.cpu;
			ram = p.ram;
			price = p.price;
			cout << "调用COMPUTER的复制构造函数" << endl;
			countC++;
		}
		~COMPUTER() {
			cout << "正在删除COMPUTER对象!" << endl;
		}
		void SetComputer(CPU_Rank newcr, int newcf, float newcv, int newcp, RAM_Rank newrr, int newrm, float newrf, int newrp, int newp) {
			cpu.SetRank(newcr);
			cpu.SetFrequency(newcf);
			cpu.SetVoltage(newcv);
			cpu.SetPrice(newcp);
			ram.SetRank(newrr);
			ram.SetMemory(newrm);
			ram.SetFrequency(newrf);
			ram.SetPrice(newrp);
			price = newp;
		}
		void SetPrice(int newcp, int newrp)
		{
			cpu.price = newcp;
			ram.price = newrp;
			price = newcp + newrp;
		}
		void Print() const {
			cpu.Print();
			ram.Print();
			cout << "COMPUTER Price=" << price << endl;
		}
		void Run() const {
			cpu.Run();
			ram.Run();
			cout << "COMPUTER开始运行!" << endl;
		}
		void Stop() const {
			cpu.Stop();
			ram.Stop();
			cout << "COMPUTER停止运行!" << endl;
		}
		static void ShowCount() {
			cout << "COMPUTER count = " << countC << endl;
		}
	private:
		CPU cpu;
		RAM ram;
		int price;
		static int countC;
};
#endif
#endif
#endif
