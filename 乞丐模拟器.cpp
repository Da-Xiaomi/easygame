#include<stdio.h>			//��ؤģ��������Ϸ�� 
#include<stdlib.h>
#include<time.h>
#define random(x) (rand()%x)
#define times 1000

int main()
{
	printf("��ӭ������ؤģ����\n");
	printf("���ߣ���С��\n");
	printf("����һ����ؤ\n");
	
	printf("���棺\n��ؤģ����2.0�汾�ذ���Ϯ\n");
	printf("�����޸������޽������\n");
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
		printf("��%d��\n",c);
		printf("����Ǯ����%d\n",wallet);
		printf("���֣�1��ȥ�̵꣨2��\n"); 
		scanf("%d",&shu);
		if(shu==1){
		
    		srand((int)time(0));
    		for(int x=0;x<1;x++){
    			hp--;
    			xrandom[c]=random(10);
    			printf("��һ���У�������һ��������%d+%dԪ\n",xrandom[c],d);
    			wallet=wallet+xrandom[c];
    			printf("��ı�ʳ��Ϊ%d\n",hp);
			}
		}
		else{
			printf("����һ����������Ʒ\n");
			printf("(1)���3Ԫ (2)��Ȫˮ1Ԫ (3)��С��9Ԫ\n");
			printf("(4)�뿪����\n");
			scanf("%d",&b);
			if(b==1&&wallet>=3){
				printf("Ǯ����3Ԫ\n");
				wallet=wallet-3;
				hp=10;
				printf("��ı�ʳ��Ϊ%d\n",hp);
 
			}
			else if(b==2&&wallet>=1){
				printf("Ǯ����1Ԫ\n");
				wallet=wallet-1;
				hp++;
				printf("��ı�ʳ��Ϊ%d\n",hp);
			}
			else if(b==3&&wallet>=9){
				printf("Ǯ����9Ԫ\n");
				printf("��ϲ����buff,��С����������,Ŀǰÿ�����ֶ���+1Ԫ\n");
				wallet=wallet-9;
				d=1;
			}
			else if(b==4){
				printf("�����뿪����\n");
				hp--;
				printf("��ʳ��Ϊ%d\n",hp);
			}
			
		}
		
	}
	printf("�������\n");
	printf("������⽨�˳���Ϸ\n");
    return 0; 
}

