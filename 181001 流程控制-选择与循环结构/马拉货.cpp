/**
 * 日期:2018-10-02
 * 题目要求：100匹马驮100担货，大马一匹驮3担，中马一匹驮2担，小马一匹驮0.5 担，计算大、中、小马匹数的各种组合并输出。
 * 编写：dextercai（CWZ）
 * IT IS A WINDOWS-936 FILE
**/
#include <iostream>
using namespace std;
int main()
{
	///下面三组For循环 遍历了所有的可行性
	for (double hs = 0; hs <= 200; hs++)
	{
		for (double hm = 0; hm <= (100-hs/2.0)/2; hm++)
		{
			for (double hl = 0; hl <= (100 - hs / 2.0 - hm * 2.0) / 3; hl++)
				if (hs + hm + hl == 100.0 && hs / 2.0 + hm * 2.0 + hl * 3.0 == 100.0) ///本判断语句根据 100匹马 100担货进行判断。
					cout << "大马：" << hl << "匹"
					<< "\t中马：" << hm << "匹"
					<< "\t小马：" << hs << "匹" << endl;
		}
	}
    return 0;
}
