#include <iostream> 
#include <fstream> 
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <unordered_map>
#include <chrono>

using namespace std;

int main() {

	map<int, int> mapTen;
	map<int, int> mapHun;
	unordered_map <int, int> unmapTen;
	unordered_map <int, int> unmapHun;


	//Insert section
	auto start1 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000; i++) {
		mapTen.insert({ i, rand() });
	}
	auto stop1 = std::chrono::high_resolution_clock::now();
	auto duration1 = std::chrono::duration_cast<std::chrono::microseconds>(stop1 - start1);
	cout <<"Time for insert of 10,000 random integers into map: " << duration1.count() << endl;

	auto start2 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000; i++) {
		unmapTen.insert({ i, rand() });
	}
	auto stop2 = std::chrono::high_resolution_clock::now();
	auto duration2 = std::chrono::duration_cast<std::chrono::microseconds>(stop2 - start2);
	cout << "Time for insert of 10,000 random integers into unordered map: " << duration2.count() << endl;

	auto start3 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100000; i++) {
		mapHun.insert({ i, rand() });
	}
	auto stop3 = std::chrono::high_resolution_clock::now();
	auto duration3 = std::chrono::duration_cast<std::chrono::microseconds>(stop3 - start3);
	cout << "Time for insert of 100,000 random integers into map: " << duration3.count() << endl;

	auto start4= std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100000; i++) {
		unmapHun.insert({ i, rand() });
	}
	auto stop4 = std::chrono::high_resolution_clock::now();
	auto duration4 = std::chrono::duration_cast<std::chrono::microseconds>(stop4 - start4);
	cout << "Time for insert of 100,000 random integers into unordered map: " << duration4.count() << endl;

	
	//Find Section
	auto start5 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000; i++) {
		auto it = mapTen.find(i);
	}
	auto stop5 = std::chrono::high_resolution_clock::now();
	auto duration5 = std::chrono::duration_cast<std::chrono::microseconds>(stop5 - start5);
	cout << "Time for find of 10,000 random integers into map: " << duration5.count() << endl;

	auto start6 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000; i++) {
		unmapTen.find(i);
	}
	auto stop6 = std::chrono::high_resolution_clock::now();
	auto duration6 = std::chrono::duration_cast<std::chrono::microseconds>(stop6 - start6);
	cout << "Time for find of 10,000 random integers into unordered map: " << duration6.count() << endl;

	auto start7 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100000; i++) {
		auto it = mapHun.find(i);
	}
	auto stop7 = std::chrono::high_resolution_clock::now();
	auto duration7 = std::chrono::duration_cast<std::chrono::microseconds>(stop7 - start7);
	cout << "Time for find of 100,000 random integers into map: " << duration7.count() << endl;

	auto start8 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100000; i++) {
		unmapHun.find(i);
	}
	auto stop8 = std::chrono::high_resolution_clock::now();
	auto duration8 = std::chrono::duration_cast<std::chrono::microseconds>(stop8 - start8);
	cout << "Time for find of 100,000 random integers into unordered map: " << duration8.count() << endl;


	//Erase Section
	auto start9 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000; i++) {
		mapTen.erase(i);
	}
	auto stop9 = std::chrono::high_resolution_clock::now();
	auto duration9 = std::chrono::duration_cast<std::chrono::microseconds>(stop9 - start9);
	cout << "Time for erase of 10,000 random integers into map: " << duration9.count() << endl;

	auto start10 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 10000; i++) {
		unmapTen.find(i);
	}
	auto stop10 = std::chrono::high_resolution_clock::now();
	auto duration10 = std::chrono::duration_cast<std::chrono::microseconds>(stop10 - start10);
	cout << "Time for erase of 10,000 random integers into unordered map: " << duration10.count() << endl;

	auto start11 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100000; i++) {
		mapHun.erase(i);
	}
	auto stop11 = std::chrono::high_resolution_clock::now();
	auto duration11 = std::chrono::duration_cast<std::chrono::microseconds>(stop11 - start11);
	cout << "Time for erase of 100,000 random integers into map: " << duration11.count() << endl;

	auto start12 = std::chrono::high_resolution_clock::now();
	for (int i = 0; i < 100000; i++) {
		unmapHun.erase(i);
	}
	auto stop12 = std::chrono::high_resolution_clock::now();
	auto duration12 = std::chrono::duration_cast<std::chrono::microseconds>(stop12 - start12);
	cout << "Time for erase of 100,000 random integers into unordered map: " << duration12.count() << endl;
	return 0;
}