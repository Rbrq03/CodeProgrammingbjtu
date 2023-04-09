#include"Lab4_conf.h"
#include<stdlib.h>
#include<stdio.h>

CONF LoadDeafultConfig()
{
    CONF resultConfig;
    FILE *fp = fopen("Lab4_config.ini", "r");
    fscanf(fp, "mode:%d", &resultConfig.mode);
    return resultConfig;
}


void ModifyConfig(CONF &config)
{
    printf("请输入想要修改的配置:\n");
    printf("  1.修改实验4工作模式\n");
    printf("  2.修改实验3储存路径\n");
    printf("  3.修改实验3储存文件名\n");
    printf("  4.修改实验3生成元素数上限\n");
    printf("  5.修改实验3生成元素下限\n");
    printf("  6.修改实验3前两元素上限\n");
    printf("  7.修改实验3前两元素下限\n");
    printf("  8.修改实验3第三元素上限\n");
    printf("  9.修改实验3第三元素下限\n");

    int configChoice;
    scanf("%d", &configChoice);

    char *savePath = (char *)malloc(sizeof(char) * 1000);
    char *saveName = (char *)malloc(sizeof(char) * 1000);
    int max1, min1, max2, min2, max3, min3;
    FILE *fp;

    if(configChoice != 1)
    {

        fp = fopen("../lab3/conf.ini", "r");
        fscanf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        &max1, &min1, &max2, &min2, &max3, &min3);

        fclose(fp);
    }

    switch (configChoice)
    {
        case 1:
            fp = fopen("Lab4_config.ini", "w");
            printf("请输入目的工作模式\n");
            scanf("%d", &config.mode);
            fprintf(fp, "mode:%d", config.mode);
            fclose(fp);
            break;

        case 2:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的路径\n");
            scanf("%s", savePath);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
        
        case 3:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的文件名\n");
            scanf("%s", saveName);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;   

        case 4:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的生成数上限\n");
            scanf("%d", &max1);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
        
        case 5:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的生成数下限\n");
            scanf("%d", &min1);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
        
        case 6:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的前两数上限\n");
            scanf("%d", &max2);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
        
        case 7:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的前两数下限\n");
            scanf("%d", &max3);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
        
        case 8:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的第三数上限\n");
            scanf("%d", &max3);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
        
        case 9:
            fp = fopen("../lab3/conf.ini", "w");
            printf("请输入目的第三数下限\n");
            scanf("%d", &min3);
            fprintf(fp, "%s\n%s\n%d\n%d\n%d\n%d\n%d\n%d\n", savePath, saveName,
        max1, min1, max2, min2, max3, min3);
            fclose(fp);
            break;
            
        default:
            printf("输入错误,期望输入位于[1,9],而您的输入是%d\n", configChoice);
            break;
    }

    free(savePath);
    free(saveName);

    return;
}