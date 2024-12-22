#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義
#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
	if (begin == NULL || end == NULL)
	{
		return false;
	}
	if (begin > end)
	{
		return false;
	}

    for (item* i = begin; i < end - 1; i++)
    {
        bool Pass = false;

        for (item* j = begin; j < end - 1 - (i - begin); j++)
        {
            if (j->key > (j + 1)->key)
            {
                item temp = *j;
                *j = *(j + 1);
                *(j + 1) = temp;
                Pass = true;
            }
        }

        if (!Pass)
        {
            break;
        }

    }
	return true;

}
