#include <stdio.h>
int arr[1024];
int index = 0;
int isMingan(char x)
{
    int count;
}
int main()
{

    while (1)
    {

        printf("1--添加敏感字符\n");
        printf("2--删除字符\n");
        printf("3--显示所有字符\n");
        printf("4--替换敏感字符\n");
        printf("5--退出\n");

        int code;
        printf("请输入功能编号\n");
        scanf("%d", &code);

        if (code == 1)
        {
            printf("请输入添加的字符:\n");
            char m;
            scanf("%c", &m);
            scanf("%c", &m);
            arr[index] = m;
            index++;

            printf("添加成功,回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {

            if (index >= 1)
            {
                index--;
                printf("删除成功，回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
            else
            {
                printf("删除失败，回车继续\n");
                char x;
                scanf("%c", &x);
                scanf("%c", &x);
            }
        }
        if (code == 3)
        {
            for (int i = 0; i < index; i++)
            {
                printf("第%d个敏感字符,%c\n", i + 1, arr[i]);
            }
            printf("显示成功，回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("回车退出\n");
            break;
        }
    }
    return 0;
}