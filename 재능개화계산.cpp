#include "pch.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int Goddess_jewelry = 0;
	int memorypiece = 0;
	int startstarlevel;
	int wantstarlevel;
	int have_memorypice;
	int max_memorypiece;

	while (true)
	{
		cout << "캐릭터 현재 별을입력" << endl; cin >> startstarlevel;
		if (cin.fail())
		{
			cout << "숫자만 입력해주세요." << endl;
			cin.clear();
			cin.ignore(20, '\n');
			continue;
		}

		cout << "달성할 최종 별을 입력" << endl; cin >> wantstarlevel;
		if (cin.fail())
		{
			cout << "숫자만 입력해주세요." << endl;
			cin.clear();
			cin.ignore(20, '\n');
			continue;
		}

		cout << "가지고있는 해당 캐릭터의 메모리피스의 개수를 입력" << endl; cin >> have_memorypice;
		if (cin.fail())
		{
			cout << "숫자외의 값을 입력했으므로 0개로 계산합니다." << endl;
			cin.clear();
			cin.ignore(20, '\n');
		}

		if (startstarlevel > 5 || wantstarlevel > 5)
		{
			cout << "최대 별은 5입니다." << endl << "다시입력해주세요." << endl;
			continue;
		}
		else if (startstarlevel <= 0 || wantstarlevel <= 0)
		{
			cout << "1보다 작은 수는 입력하실수 없습니다" << endl << "다시입력해주세요" << endl;
		}
		else if (startstarlevel > wantstarlevel)
		{
			cout << "달성할별이 현재별보다 작습니다" << endl << "다시입력해주세요." << endl;
		}
		else if (startstarlevel >= 1 && wantstarlevel >= 1 && startstarlevel == wantstarlevel)
		{
			cout << "달성할별과 현재별이 같습니다" << endl << "다시입력해주세요." << endl;
		}
		if (startstarlevel >= 1 && startstarlevel < wantstarlevel)
		{
			break;
		}
	}

	switch (startstarlevel)
	{
	case 1:
		max_memorypiece = 30;
		break;
	case 2: // 2-3
		max_memorypiece = 100;
		break;
	case 3: // 3-4
		max_memorypiece = 120;
		break;
	case 4: //4-5
		max_memorypiece = 150;
		break;
	}

	if (startstarlevel == 1 && wantstarlevel == 3)
	{
		max_memorypiece += 100;
	}
	else if (startstarlevel == 1 && wantstarlevel == 4)
	{
		max_memorypiece += 220;
	}
	else if (startstarlevel == 1 && wantstarlevel == 5)
	{
		max_memorypiece += 370;
	}

	if (startstarlevel == 2 && wantstarlevel == 4)
	{
		max_memorypiece += 120;
	}
	else if (startstarlevel == 2 && wantstarlevel == 5)
	{
		max_memorypiece += 270;
	}

	if (startstarlevel == 3 && wantstarlevel == 5)
	{
		max_memorypiece += 150;
	}

	max_memorypiece -= have_memorypice;

	while (memorypiece < max_memorypiece)
	{
		memorypiece++;
		Goddess_jewelry++;
		if (memorypiece > 20)
		{
			Goddess_jewelry++;
			if (memorypiece > 40)
			{
				Goddess_jewelry++;
				if (memorypiece > 60)
				{
					Goddess_jewelry++;
					if (memorypiece > 80)
					{
						Goddess_jewelry++;
					}
				}
			}
		}
	}

	cout << endl << "필요한 여신의보석 갯수 : " << Goddess_jewelry << endl << "필요한 메모리피스 : " << memorypiece << endl;
	system("PAUSE");
}