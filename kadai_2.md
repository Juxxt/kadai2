# 課題2の説明
```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int index[16];
	int array[16];
	int i,n;
	
	srand((unsigned)time(NULL));
	
	for(i=0;i<16;i++){
		index[i] = 0;
	}
	
	for(i=0;i<16;i++){
		while(1){
			n = rand()%16;
			if(index[n] == 0){
				array[i] = n + 1;
				index[n] = 1;
				break;
			}
		}
	}
	
	for(i=0;i<16;i++){
		printf("%d\n",array[i]);
	}
	
	return 0;
}
```

乱数の種を作るための乱数としては時間を用いた。

- time.h　
time関数と言われるもので、C言語で時刻を取得するための標準ライブラリ関数。1970年1月1日からの経過秒数が取得できる。

- 重複を防ぐ。　
indexの箱を全て０初期化する。ある乱数を16で割った値が初めて出てきた場合、その値をarrayに入れ、それに対応するindexの箱を1に変える。arrayの箱に入るのは、indexが0の時だから、これ以降同じ値は入らず重複を防げる。