/*************************************************************************
	> File Name: 4.cpp
	> Author: wk
	> Mail: 18402927708@163.com
	> Created Time: Tue 10 Oct 2017 05:50:48 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

//国王和金矿问题
//有5座金矿   参与挖金矿有10人 每座金矿要么全挖 要么不挖  不能派出一半的工人挖取一半的金矿 也就是每个金矿需要的人数要固定不能少人 需要几个就必须派几个人
//第1座金矿  500金  需要5人
//第2座金矿  400金  需要5人
//第3座金矿  350金  需要3人
//第4座金矿  300金  需要4人
//第5座金矿  200金  需要3人
//应该选择挖那几座金矿保证挖的金币数量最多?

//1.暴力求解 
//2.动态规划 (最优子结构   边界  状态转移方程式)

void answer(int *glod,int *usewoker,int glodnum,int worker)
{
   
   if(glodnum <=1 && worker < usewoker[glodnum])
       return 0;
   if()



}

int main()
{

    int Glod[5] = {500, 400, 350, 300, 200};
    int UseWorker[5] = {5, 5, 3, 4, 3};

    answer(&Glod[0], &UseWorker[0], 5, 10);

    return 0;
}

