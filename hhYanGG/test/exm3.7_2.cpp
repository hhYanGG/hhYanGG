#include <iostream>
int main() {
	using namespace std;
	int h_in, h_f, weight_p;	//转换前的单位
	double height_m, weight_kg;//转换后的单位
	const int f_to_in = 12;		//英尺转英寸系数
	const double in_to_m = 0.0254, p_to_kg = 2.2;//英寸转米系数，磅转公斤系数
	double BMI;
	cout << "请输入你的身高____英尺___英寸 " << endl;
	cin >> h_f;
	cin >> h_in;
	cout << "请输入你的体重____磅" << endl;
	cin >> weight_p;
	height_m = ((h_f*f_to_in) + h_in)*in_to_m;
	weight_kg = weight_p / p_to_kg;
	BMI = weight_kg / height_m;
	cout << "你的身高为" << height_m << "  (米） " << endl;
	cout << "你的体重为" << weight_kg << "  (公斤）" << endl;
	cout << " 你的BMI为 " << BMI;
}