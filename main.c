#include<stdio.h>
#include<string.h>
#include<time.h>
#include <Windows.h>

#include"text.h"
#include"textuality.h"
#include"ftime.h"
#include"dotpoints.h"
/*Microsoft*/

int main()
{
    int i;
    char text[50];


//!չʾ��ͷ��Ϣ

    text_start();//��ͷ���ı�

    putchar('\t');
    system("pause");//start


//!���ú�����Ч����ַ�ͼ��

    cutdown();
    spacebig();
    dot_dear();/*Print "Dear"*/
    spacesmall();
    dot_li();/*Print "Li"*/
    spacesmall();
    dot_qin();/*Print "Qin"*/
    spacebig();

    /*Print "I LOVE YOU"*/


    /*Print "See here"*/
    dot_see_here();
    spacesmall();

    /*Print "�� �� ��"*/
    for(i=0;i<2;i++){
        dot_down();
        spacesmall();
    }
    spacebig();

    line();

/**/
//!��ʼչʾ��Ϣ
/**/

/*Identify struct of our love*/
    struct lovetime{
        int year;
        int mon;
        int week;
        int day;
        int hour;
        int min;
        int sec;
    }love;


//! Identify the moment we fall in love with each other

    love.year=2018;love.mon=1;love.day=1;
    love.hour=0;love.min=38;love.sec=0;


/*show the time our fall in love*/
    spacesmall();
    strcpy(text,"The time we have been boyfriend/girlfriend is:\n\n");
    fp(text);
    printf("\t%d��\t",love.year);delay();
    printf("%d��",love.mon);delay();
    printf("%d��",love.day);delay();
    putchar('\n');delay();
    printf("\t%d��",love.hour);delay();
    printf(" %d��",love.min);delay();
    printf(" %d��",love.sec);delay();
    spacesmall();

/*
** �˺�����õ�tm�ṹ���ʱ�䣬���Ѿ����й�ʱ��ת��Ϊ����ʱ��
** p = gmtime(&timep);
** �����ں�ʱ��ת��Ϊ��������(GMT)ʱ��ĺ���
*/
	strcpy(text,"\nNow the time of this moment is:\n\n");
	fp(text);delay();

    time_t timep;
    struct tm *p;
    time(&timep);
    p =localtime(&timep);

    printf("\t%d��\t", 1900+p->tm_year);delay();
    printf("%d��", 1+p->tm_mon);delay();
    printf("%d��", p->tm_mday);delay();

    int w=p->tm_wday;//����ȷ������ܼ���Ӣ�ĵ���
    weekday(w);delay();

    putchar('\n');delay();
    printf("\t����ĵ� %d��\t", p->tm_yday+1);delay();//!��һ��ĵڼ��죬�㷨���ޣ����ϲ��һ��
    putchar('\n');delay();
    printf("\t%d��", p->tm_hour);delay();
    printf(" %d��", p->tm_min);delay();
    printf(" %d��", p->tm_sec);delay();
    printf("\tIsdst: %d\t", p->tm_isdst);//����ʱ

//!Calculating dates
    struct lovetime last;
    last.year=p->tm_year-love.year+1900;

    //��������
    last.mon=p->tm_mon-love.mon+1;
    for(i=last.year;i>0;i--){//'i' is years of our love continue
        last.mon+=last.year*12;
    }

    //��������
    int days,hundreds;
    //days=yeartype(1900+p->tm_year);
    //days�������㣬�ж��Ƿ�����
    last.day=p->tm_yday;//!�㷨���ޣ��󾫰����㿪ʼ
    for(i=1900+p->tm_year/*now*/;i-love.year>0;i--){//'i' is years of now, and self--
        last.day+=yeartype(i-1);//�������days=365 or days=366���ֱ����ƽ�����������
    }
    hundreds=last.day/100;//����ڼ���һ����

    //��������
    last.week=last.day/7;

    //����Сʱ
    if(p->tm_hour-love.hour<0){
        last.hour=(p->tm_hour+24-love.hour)+(last.day-1)*24;
    }
    else{
        last.hour=(p->tm_hour-love.hour)+last.day*24;
    }

    //�������
    if(p->tm_min-love.min<0){
        last.min=(p->tm_min+60-love.min)+(last.hour-1)*60;
    }
    else{
        last.min=(p->tm_min-love.min)+last.hour*60;
    }

    //��������
    if(p->tm_sec-love.sec<0){
        last.sec=(p->tm_sec+60-love.sec)+(last.min-1)*60;
    }
    else{
        last.sec=(p->tm_sec-love.sec)+last.min*60;
    }


/**/
//!Start nue dog
/**/
    spacesmall();
    //printf("The time we fall in love lasts:\n\n");
    strcpy(text,"The period we fall in love lasts:\n");
    fp(text);
    spacesmall();
    delay();
    //printf("\tcaculating");
    strcpy(text,"\tCaculating\0");
    fp(text);
    for(i=0;i<3;i++){
        putchar('.');
        delay();
    }

    loop();

    spacesmall();
    if(last.year<0){
        printf("\tError!Break now!\n");
        system("pause");
        exit(0);
    }
    if(last.year==0){
        strcpy(text,"\tLess than 1 year\n");
        fp(text);
    }
    else{
        printf("\t%d\tyears\n",last.year);
    }
    delay();
    printf("\t%d\tmonths\n",last.mon);delay();
    printf("\t%d\tweeks\n",last.week);delay();
    printf("\t%d\tdays\n",last.day+1);delay();//���ճ��˵�˼ά��������1��ʼ
    putchar('\n');
    printf("\t%d\thours\n",last.hour);delay();
    printf("\t%d\tminutes\n",last.min);delay();
    printf("\t%d\tseconds\n",last.sec);delay();
    spacesmall();

//!Show more informations
    strcpy(text,"What's more...\n");
    fp(text);
    spacesmall();
    printf("\t�������ǵĵ�%d��һ����\n",hundreds);delay();
    printf("\t������һ��һ���컹��%d��\n",(hundreds+1)*100-last.day);//������һ��һ���컹�ж�����

    //�������������һ��һ���죬�������ʾ��Ϣ
    if(last.day+25>=(hundreds+1)*100){
        printf("\n\t//���Ͼ��ǵ�%d��һ������ (*�R��Q))(������* )�g\n",hundreds+1);delay();
    }

    spacesmall();

    line();
    spacesmall();

    text_mid();//�м���ı�

    spacesmall();

    putchar('\t');
    system("pause");//continue

    spacesmall();
    line();

/*Print "Will"*/
/*Print "You"*/
/*Print "Marry"*/
/*Print "Me"*/
/*Print '?'*/

/*Print "POSTED"*/
/*Print "BY"*/
/*Print "YOUR"*/
/*Print "DEAR"*/
/*Print "ER QUE"*/

    spacesmall();


//!��ӡ����
    heart();

    spacebig();

    text_end();//��β�ı�

    spacesmall();

    putchar('\t');
    printf("����ѡ��:");
    char end=getchar();
    putchar('\n');
    if(end=='#'){
        //dot_doge();
        exit(0);
        return 0;
    }
    else{
        line();
        spacesmall();
        return main();
    }
}
