#include <iostream>
int main() {
	using namespace std;
	int h_in, h_f, weight_p;	//ת��ǰ�ĵ�λ
	double height_m, weight_kg;//ת����ĵ�λ
	const int f_to_in = 12;		//Ӣ��תӢ��ϵ��
	const double in_to_m = 0.0254, p_to_kg = 2.2;//Ӣ��ת��ϵ������ת����ϵ��
	double BMI;
	cout << "������������____Ӣ��___Ӣ�� " << endl;
	cin >> h_f;
	cin >> h_in;
	cout << "�������������____��" << endl;
	cin >> weight_p;
	height_m = ((h_f*f_to_in) + h_in)*in_to_m;
	weight_kg = weight_p / p_to_kg;
	BMI = weight_kg / height_m;
	cout << "������Ϊ" << height_m << "  (�ף� " << endl;
	cout << "�������Ϊ" << weight_kg << "  (���" << endl;
	cout << " ���BMIΪ " << BMI;
}