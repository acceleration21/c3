#include <stdio.h>
int index = 0;
int arr[1024];
int isMingan(char x)
{
    int count;
    
    for(int i = 0; i < index; i++)
    {
        
        if (x == arr[i]) {
            count++;
        }
        
    }
    
    if (count == 0) {
        return 0;
    }
    else{
        return 1;
    }
    
    
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
            printf("输入字符串:\n");
            char neriong[1024];
            scanf("%s",&neriong);
             for (int i = 0; 1; i++)
            {

                if (neriong[i] == '\0')
                {
                    break;
                }

                if (isMingan(neriong[i]) == 1)
                {
                    neriong[i] == '*';
                }
                printf("%c", neriong[i]);
            }
            printf("回车继续\n");

            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 5)
        {
            printf("回车退出\n");
            break;
        }
    }
    return 0;
}