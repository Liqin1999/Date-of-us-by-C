#ifndef TEXT_H_INCLUDED
#define TEXT_H_INCLUDED



#endif // TEXT_H_INCLUDED

//!��ʼ�ı�
void text_start()
{
    char text[50];
    strcpy(text,"\nHello! Dear Qin\n\n\tGet ready to see it?\n");
    fp(text);
    delay();

    strcpy(text,"\tPlease Maximize the window\n");
    fp(text);
    strcpy(text,"\tand press any key to star our stories ;)\n");
    fp(text);
    //strcpy(text,"\n\t( Press 'Windows + up' or click that bottom to Maximize the window)\n");
    //fp(text);
    spacesmall();
    delay();
    strcpy(text,"\tQin:I see and I've been ready ;)\n\n");
    fp(text);
}

//!�м��ı�
void text_mid()
{
    char text[50];
    strcpy(text,"\tI am DEEPLY love you, my dear �ٶ�.\n\n");
    fp(text);
    strcpy(text,"\tAnd I will be very sad\n\tif we are not together. :(\n\n");
    fp(text);
    strcpy(text,"\tSo I will do my best to marry you!\n");
    fp(text);
}

//!��β�ı�
void text_end()
{
    char text[50];
    strcpy(text,"\tSurely someday,\n\tI'll tread the rainbow auspicious clouds to marry you.\n\n");
    fp(text);
    strcpy(text,"\t����һ��\n\t�һ�̤���߲�����\n\tȥȢ�� :)\n");
    fp(text);

    spacesmall();

    strcpy(text,"\tRemember\n\tbe right here waiting for me!\n\n");
    fp(text);
    strcpy(text,"\tһ����Ҫ���ˣ�\n\t��������� :)\n");
    fp(text);
    spacesmall();

    strcpy(text,"\tThis program is shot\n");
    fp(text);
    strcpy(text,"\tBut the love between us is never faded!\n\n");
    fp(text);

    strcpy(text,"\n\t>Press Enter to see again.\n");
    fp(text);
    strcpy(text,"\t>Press '#' and Enter to close me ;-)\n");
    fp(text);
}

