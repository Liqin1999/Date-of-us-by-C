#ifndef FTIME_H_INCLUDED
#define FTIME_H_INCLUDED



#endif // FTIME_H_INCLUDED
void weekday(int temp)
{
    switch(temp){
        case 0:printf("\t����/Sunday");break;
        case 1:printf("\t��һ/Monday");break;
        case 2:printf("\t�ܶ�/Tuesday");break;
        case 3:printf("\t����/Wednesday");break;
        case 4:printf("\t����/Thursday");break;
        case 5:printf("\t����/Friday");break;
        case 6:printf("\t����/Saturday");break;
    }
}

/*!
    ����������㣺��һ�ع���365��5Сʱ48��45.5��
    1���������꣺�ܱ�4������Ϊ���ꡣ(��2004���������,2001�겻������)
    2�������꣺�ܱ�400�����������ꡣ(��2000�������꣬1900�겻������)
    3��������ֵ�ܴ����ݣ���������ܱ�3200�����������ܱ�172800�����������ꡣ
    ��172800�������꣬86400�겻������(��Ϊ��Ȼ�ܱ�3200�����������ܱ�172800����)
    (�˰�һ�ع���365��5h48'45.5''����)��
*/
int yeartype(int a)//�ж��Ƿ����꣬����ֵΪһ���е�����
{
    int n;
    if(  (a%400==0) || (a%4==0&&a%100!=0) ){
        n=366;
    }
    else{
        n=365;
    }
    return n;
}
void delay()
{
    Sleep(30);
}
void loop()
{
    int i;
    for(i=0;i<5;i++){
        delay();
    }
}
void  cutdown()
{
    spacebig();
    dot_3();
    spacebig();
    dot_2();
    spacebig();
    dot_1();
}

//int timestamp(struct a)
//{
    //int time_start=(a.min+(a.hour+(a.day+(a.year-2000)yeartype(a.year)/*days*/)*24/*h*/)*60/*min*/)*60/*s*/
//}
