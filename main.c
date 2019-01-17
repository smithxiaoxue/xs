#include <stdio.h>
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    char name[1000];
};
int main()
{
    struct student arr[1000];
    int index = 0;
    printf("jinruxueshengguanlixitong\n");
    while (1)
    {
        printf("1---qingshuruxueshengchengji:\n");
        printf("2---shanchuxueshengchengji\n");
        printf("3---xianshixuesuoyoushengchengji\n");
        printf("4---yewu1：suoyouzongfenbujigedexuesheng（xiaoyu180\n");
        printf("5---yewu2：meiyijebudoubujigedexuesheng\n");
        printf("6---yewu3:xianshizongfenzuigaodexuesheng\n");
        printf("7---yewu4:xianshipingjunfenzuigao\n");
        printf("8--tuichuchengxu\n");

        printf("qingshuruxiangyingdegongnengbiaohao\n");
        int code;
        scanf("%d", &code);
        if (code == 1)
        {
            printf("qingshuruxueshengxingming:\n");
            scanf("%s", arr[index].name);
            printf("qingshuruyuwenchengji:\n");
            int yuwen;
            scanf("%d", &yuwen);
            arr[index].yuwen = yuwen;
            int shuxue;
            scanf("%d", &shuxue);
            arr[index].shuxue = shuxue;
            int yingyu;
            scanf("%d", &yingyu);
            arr[index].yingyu = yingyu;
            index++;
            printf("tianiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("shanchuxueshengchengji:\n");
            if (index > 0)
            {
                index--;
                printf("shanchuchenggong,dianjihuijijixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("shanchushiabi,dianjihuichejixu\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }

        if (code == 3)
        {
            printf("xianshisuoyouchengji\n");
            for (int i = 0; i < index; i++)
            {
                printf("%s %d %d %d\n", arr[i].name, arr[i].yuwen, arr[i].shuxue, arr[i].yingyu);
            }
            printf("xianshichenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            for (int i = 0; i < index; i++)
            {
                int sum;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (sum < 180)
                {
                    printf("%d %s\n", i + 1, arr[i].name);
                }
            }
            printf("tianjiachenggong,dianjihuichejixu:\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 5)
        {
            for (int i = 0; i < index; i++)
            {
                if (arr[i].yuwen < 60 && arr[i].shuxue < 60 && arr[i].yingyu < 60)
                {
                    printf(" %s\n",arr[i].name);
                }
            }
            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 6)
        {
            int min = 0;
            int id;
            for (int i = 0; i < index; i++)
            {
                int sum;
                sum = arr[i].yuwen + arr[i].shuxue + arr[i].yingyu;
                if (sum > min)
                {
                    min = sum;
                    id = i;
                }
            }
            printf("%s %d", arr[id].name, min);
        }

        if (code == 7)
        {     double max = 0.0;
	            int stuID = 0;
	            for(int  i = 0; i < index; i++)
	            {
	                if(arr[i].yuwen >= 60 && arr[i].shuxue >= 60 && arr[i].yingyu >= 60){
	                    double avg = (arr[i].yuwen + arr[i].shuxue + arr[i].yingyu)/3.0;
	                    if(max < avg){
	                        max = avg;
	                        stuID = i;
	                    }
	
	                }
	            }
	
	            printf("平均分最高且没有不及格科目的学生姓名为%s，语文：%d，数学%d，英语%d\n",arr[stuID].name,arr[stuID].yuwen,arr[stuID].shuxue,arr[stuID].yingyu);
	
	            printf("\n点击回车继续\n");
	            char x;
	            scanf("%c", &x);
	            scanf("%c", &x);
	
        }

        if (code == 8)
        {
            printf("chengxutuichu\n");
            break;
        }
    }
    return 0;
}