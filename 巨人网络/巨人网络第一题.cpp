/*	��ACMģʽ
����һ��ʮ���ƣ�ת�ɶ����ƺ�ȡ����������ת��ʮ�������

���룺5
�����2
���ͣ�5 �Ķ����Ʊ�ʾΪ "101"��������Ʒ���Ϊ "010"��Ҳ����ʮ�����е� 2 ��


*/

//����һ��������㷨
class Solution {
public:
	int bitwiseComplement(int N) {

		if (N == 0)
			return 1;

		int temp1 = 1;
		int temp2 = N;

		while (temp2>0) {//��ͣ��temp1��ԭ��������������㣬ÿ�����������temp1�����ƶ�1λ

			N ^= temp1;
			temp1 = temp1 << 1;
			temp2 = temp2 >> 1;
		}


		return N;
	}
};

//����������λ��ֵ��
class Solution {
public:
	int bitwiseComplement(int N) {
		int temp = 2;
		while (temp <= N) {

			temp = temp << 1;
		}
		return temp - N - 1;
	}
};