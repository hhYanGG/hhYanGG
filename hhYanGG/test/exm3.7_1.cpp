//3.7编程练习-1
#include <iostream>
int main() {
	using namespace std;
	int bd_height,ft,in;//转换前身高，转换后英尺，英寸部分
	const int ex_coefficient = 12;//转换因子
	cout << "请输入您的身高（英寸）" << endl;
	cin >> bd_height;				//输入
	ft = bd_height / ex_coefficient ;//转换
	in = bd_height%ex_coefficient; //转换	
	cout << "您的身高为 " << ft << " （英尺） " <<in << " (英寸）" << endl;//输出
	return 0;
}