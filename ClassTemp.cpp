#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <map>
#include <vector>


using namespace std;

class CExample
{
public:
	CExample()
	{ 
		pBuffer = NULL;
		nSize = 0;
	}

	~CExample()
	{ 
		if (pBuffer != NULL)
		{
			delete[]pBuffer;
			pBuffer = NULL;
		}
	}

	CExample(const CExample&);//�������캯��
	CExample &operator=(const CExample&);//��ֵ������
	void Init(int n){ pBuffer = new char[n]; nSize = n; }
private:
	char *pBuffer;//��Ķ����а���ָ��,ָ��̬������ڴ���Դ
	int nSize;
};

//��ֵ����������
CExample & CExample::operator=(const CExample &RightSides)
{
	if (this == &RightSides)//����Լ����Լ���ֵ��ֱ�ӷ���
	{
		return*this;
	}
	nSize = RightSides.nSize;//���Ƴ����Ա
	char *temp = new char[nSize];//����ָ��ָ�������
	memcpy(temp, RightSides.pBuffer, nSize * sizeof(char));
	delete []pBuffer;//ɾ��ԭָ��ָ������(��ɾ���������ں��棬����X=X��������£����ݵĶ�ʧ)
	pBuffer = temp;//������ָ��
	temp = NULL;
	return *this;
}

int v2_main()
{
	vector<int> vector1;
	vector<int> vector2;

	for (int i = 0; i < 10; i++)
		vector2.push_back(i);

	
	return 0;
}
