#include<stdio.h>			//乞丐模拟器（游戏） 
#include<stdlib.h>
#include<time.h>
#define random(x) (rand()%x)
#define times 1000

int main()
{
	printf("欢迎来到乞丐模拟器\n");
	printf("作者：呆小米\n");
	printf("你是一个乞丐\n");
	
	printf("公告：\n乞丐模拟器2.0版本重磅来袭\n");
	printf("本次修复了无限金币问题\n");
	int wallet=20;
	int shu;
	int b;
	int hp=10;
	int d=0;
	for(int c=1;c<=times;c++){
		if(hp==0){
			break;
		}
		int xrandom[times]; 
		printf("第%d天\n",c);
		printf("您的钱包：%d\n",wallet);
		printf("乞讨（1）去商店（2）\n"); 
		scanf("%d",&shu);
		if(shu==1){
		
    		srand((int)time(0));
    		for(int x=0;x<1;x++){
    			hp--;
    			xrandom[c]=random(10);
    			printf("这一天中，好心人一共给了你%d+%d元\n",xrandom[c],d);
    			wallet=wallet+xrandom[c];
    			printf("你的饱食度为%d\n",hp);
			}
		}
		else{
			printf("这里一共有三样商品\n");
			printf("(1)面包3元 (2)矿泉水1元 (3)呆小米9元\n");
			printf("(4)离开超市\n");
			scanf("%d",&b);
			if(b==1&&wallet>=3){
				printf("钱包减3元\n");
				wallet=wallet-3;
				hp=10;
				printf("你的饱食度为%d\n",hp);
 
			}
			else if(b==2&&wallet>=1){
				printf("钱包减1元\n");
				wallet=wallet-1;
				hp++;
				printf("你的饱食度为%d\n",hp);
			}
			else if(b==3&&wallet>=9){
				printf("钱包减9元\n");
				printf("恭喜你获得buff,呆小米陪你乞讨,目前每次乞讨都将+1元\n");
				wallet=wallet-9;
				d=1;
			}
			else if(b==4){
				printf("你已离开超市\n");
				hp--;
				printf("饱食度为%d\n",hp);
			}
			
		}
		
	}
	printf("你饿死了\n");
	printf("点击任意建退出游戏\n");
    return 0; 
}

