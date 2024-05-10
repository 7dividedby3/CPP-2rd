#ifndef _IOSTREAM_
#define _IOSTREAM_
#include <iostream>
using namespace std;
#endif
#ifndef _CLASS_CPU_
#define _CLASS_CPU_
enum CPU_Rank {i3 = 3, i5 = 5, i7 = 7, i9 = 9};
class CPU {
	public:
		friend class COMPUTER;
		CPU() {
			cout << "正在默认构造对象CPU" << endl;
		}
		CPU(CPU_Rank newr, int newf, float newv, int newp): rank(newr), frequency(newf), voltage(newv), price(newp) {
			cout << "正在构造对象CPU" << endl;
		}
		CPU(CPU &p) {
			rank = p.rank;
			frequency = p.frequency;
			voltage = p.voltage;
			price = p.price;
			cout << "正在复制构造对象CPU" << endl;
		}
		CPU(const CPU &p) {
			rank = p.rank;
			frequency = p.frequency;
			voltage = p.voltage;
			price = p.price;
			cout << "正在复制构造对象CPU" << endl;
		}
		~CPU() {
			cout << "正在删除对象CPU" << endl;
		}
		CPU_Rank GetRank() const {
			return rank;
		}
		int GetFrequency() const {
			return frequency;
		}
		float GetVoltage() const {
			return voltage;
		}
		int GetPrice() const {
			return price;
		}
		void SetRank(CPU_Rank r) {
			rank = r;
		}
		void SetFrequency(int f) {
			frequency = f;
		}
		void SetVoltage(float v) {
			voltage = v;
		}
		void SetPrice(int p) {
			price = p;
		}
		void Print() const {
			cout << "CPU: i" << rank << " Frequency=" << frequency << " Voltage=" << voltage << " Price=" << price << endl;
		}
		void Run() const {
			cout << "CPU开始运行!\n";
		}
		void Stop() const {
			cout << "CPU停止运行!\n";
		}
	private:
		enum CPU_Rank rank;
		int frequency;
		float voltage;
		int price; 
};
#endif
