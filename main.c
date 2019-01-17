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
        printf("2--删除字符");
        printf("3--显示所有字符\n");
        printf("4--替换敏感字符\n");
        printf("5--退出\n");

        int code;
        printf("请输入功能编号");
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
        }
        if (code == 3)
        {
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