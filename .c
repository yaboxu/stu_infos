#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
struct student
{
     char num[3];//ѧ��
     char name[20];//����
     char sex;//�Ա�
     char home[20];//����
	 int  age;//����
}s[N],temp;
struct student s[N]={{"01","sun",'m',"henan",22},{"02","jin",'m',"hubei",21},{"03","xu",'m',"jiangsu",21}};/*�ṹ�����ͱ����ĳ�ʼ����
��һ���и����⣺ÿ�����к���Ϣ�����ʱ�����ֵĶ����������˵���Ϣ��������ȡ��Ϣ����ʾ�����ϴ����к󱣴����Ϣ�����߲�һ��*/

//��������
void menu();//���˵�
void input();//��Ϣ¼��
void output();//��Ϣ���
void inquire();//��Ϣ��ѯ
void inquiremenu();//��Ϣ��ѯ�˵�
void homeinquire();//�������ѯ
void ageinquire();//�������ѯ
void sort();//��Ϣ����
void sortmenu();//��Ϣ����˵�
void agesort();//���������򣨽���
void namesort();//��������������
void sta();//��Ϣͳ��
void del();//��Ϣɾ��
void save();//������Ϣ
void display();//��ȡ��Ϣ
void main()
{
	int a;
	do
	{
        system("cls");
	    menu();
        printf("����������ѡ��(0~8):");
        scanf("%d",&a);
	    system ("cls");
	    if(a==0) 
		{
		  printf("\tллʹ��!\n");
		  break;
		}
        switch(a)
		{
			case 1:input();break;
			case 2:output();break;
			case 3:inquire();break;
			case 4:sort();break;
			case 5:sta();break;
			case 6:del();break;
			case 7:save();break;
			case 8:display();break;
			default:printf("������������0-8֮��ѡ��\n");system("pause");
		}
	}while(1);
}

//���˵�����
void menu()
{
	printf("\n");
    printf("      |*****************        ѧ��������Ϣ��¼��         *****************|\n");
	printf("      |***                                                               ***|\n");
	printf("      |***                         1����Ϣ¼��                           ***|\n");
	printf("      |***                         2����Ϣ���                           ***|\n");
	printf("      |***                         3����Ϣ��ѯ                           ***|\n");
    printf("      |***                         4����Ϣ����                           ***|\n");
	printf("      |***                         5����Ϣͳ��                           ***|\n");
    printf("      |***                         6����Ϣɾ��                           ***|\n");
    printf("      |***                         7��������Ϣ                           ***|\n");
    printf("      |***                         8����ȡ��Ϣ                           ***|\n");
	printf("      |***                         0���˳�ϵͳ                           ***|\n");
	printf("      |***                                                               ***|\n");
	printf("      |*********************************************************************|\n");
	printf("\n");
}

//��Ϣ¼�뺯��
void input()
{
	int i,n,b=0;
	printf("\n");
	printf("         |**************************************************|\n");
    printf("         |***************     ��Ϣ¼��     *****************|\n");
	printf("         |***************     �˳���ǰ     *****************|\n");
	printf("         |**************************************************|\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			b++;
		else break;
	}
	printf("�Ѿ���%d�˵���Ϣ\n",b);
	printf("������Ҫ¼�������:");
	scanf("%d",&n);
	printf("��������ѧ����ѧ�ţ��������Ա𣬼��ᣬ����(�Կո���)\n");
	i=b;
	for(;i<n+b;i++)
	{
		printf("��%d��ѧ������Ϣ:",i+1);
        scanf("%s %s %c %s %d",s[i].num,s[i].name,&s[i].sex,s[i].home,&s[i].age);
	}
	system("pause");
}

//��Ϣ�������		  
void output()
{		  
    int i, b=0;
	printf("\n");
	printf("         |*****************************************|\n");
	printf("         |************   ��Ϣ���   ***************|\n");
	printf("         |************   �˳���ǰ   ***************|\n");
    printf("         |*****************************************|\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			b++;
		else break;
	}
	printf("����%d����Ϣ\n",b);
	if(b!=0)
		printf("\tѧ��\t����\t�Ա�\t����\t����\n");
    for(i=0;i<b;i++)
        printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
	system("pause");
}

//��Ϣ��ѯ����
void inquire()
{
   	int a;
	do
	{
        system("cls");
	    inquiremenu();
		printf("\n");
        printf("����������ѡ��(0~2):");
		fflush stdin;
        scanf("%d",&a);
	    system ("cls");
	    if(a==0) 
			break;
        switch(a)
		{
			case 1:homeinquire();break;
			case 2:ageinquire();break;
			default:printf("����������ѡ��");system("pause");
		}
	}while(1);
}

//��Ϣ��ѯ�˵�����
void inquiremenu()
{
	printf("\n");
	printf("           |***********************************************|\n");
	printf("           |**************     ��Ϣ��ѯ     ***************|\n");
    printf("           |**************     1 ������     ***************|\n");
    printf("           |**************     2 ������     ***************|\n");
	printf("           |**************     0 �˳�       ***************|\n");
	printf("           |***********************************************|\n");
}
 
//�������ѯ����
void homeinquire()
{
	char jg[20];
	int i,d=0,z=1;
	printf("\n");
	printf("            |*************************************************|\n");
	printf("            |***************    �������ѯ    ****************|\n");
    printf("            |***************    �˳���ǰ      ****************|\n");
    printf("            |*************************************************|\n");
	printf("��������Ҫ��ѯ�ļ��᣺");
	scanf("%s",jg);
	printf("��ѯ������£�\n");
	printf("\tѧ��\t����\t�Ա�\t����\t����\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			d++;
		else break;
	}
	for(i=0;i<d;i++)
	{
	    if(strcmp(jg,s[i].home)==0)
		{
			z=0;
            printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
		}
	}
	if(z) printf("\tû�иü����ѧ����Ϣ\n");
	system("pause");
}

//�������ѯ����
void ageinquire()
{
	int nl,i,d=0,z=1; 
	printf("\n");
	printf("            |*************************************************|\n");
    printf("            |***************    �������ѯ    ****************|\n");
    printf("            |***************    �˳���ǰ      ****************|\n");
    printf("            |*************************************************|\n");
	printf("��������Ҫ��ѯ�����䣺");
	scanf("%d",&nl);
	printf("��ѯ������£�\n");
	printf("\tѧ��\t����\t�Ա�\t����\t����\n");
    for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			d++;
		else break;
	}
    for(i=0;i<d;i++)
	{
	    if(nl==s[i].age)
		{
			z=0;
            printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
		}
	}
	if(z) printf("\tû�и������ѧ����Ϣ\n");
	system("pause");
}

//��Ϣ������
void sort()
{
 	int a;
	do
	{
        system("cls");
		sortmenu();
		printf("\n");
        printf("����������ѡ��(0~2):");
		fflush stdin;
        scanf("%d",&a);
	    system ("cls");
	    if(a==0) 
	    break;
        switch(a)
		{
			case 1:agesort(); break;
			case 2:namesort();break;
			default:printf("����������ѡ��");system("pause");
		}
	}while(1);
}

//��Ϣ����˵�����
void sortmenu()
{
	printf("\n");
	printf("           |***********************************************|\n");
	printf("           |**************     ��Ϣ����     ***************|\n");
    printf("           |**************     1 ������     ***************|\n");
    printf("           |**************     2 ������     ***************|\n");
	printf("           |**************     0 �˳�       ***************|\n");
	printf("           |***********************************************|\n");
}

//������������������
void agesort()
{
    int i,j,d=0;
	printf("\n");
	printf("            |*************************************************|\n");
    printf("            |***************    ����������    ****************|\n");
    printf("            |***************    �˳���ǰ      ****************|\n");
    printf("            |*************************************************|\n");
	printf("�����併���������£�\n");
    for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			d++;
		else break;
	}
    for(i=0;i<d-1;i++)
	{
		for(j=i+1;j<d;j++)
		{
			if(s[i].age<s[j].age)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\tѧ��\t����\t�Ա�\t����\t����\n");
	for(i=0;i<d;i++)
		printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
    system("pause");
}

//������������������
void namesort()
{
    int i,j,d=0;
	printf("\n");
	printf("            |*************************************************|\n");
	printf("            |***************    ����������    ****************|\n");
    printf("            |***************    �˳���ǰ      ****************|\n");
    printf("            |*************************************************|\n");
	printf("�����������������£�\n");
    for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			d++;
		else break;
	}
    for(i=0;i<d-1;i++)
	{	   
	   for(j=i+1;j<d;j++)
	   {
	         if(strcmp(s[i].name,s[j].name)>=0)
			 {	
	            temp=s[i];
	            s[i]=s[j];
		        s[j]=temp;
			 }
			 else continue;
	   }
	}
    printf("\tѧ��\t����\t�Ա�\t����\t����\n");
	for(i=0;i<d;i++)
		printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
    system("pause");
}

//��Ϣͳ�ƺ���
void sta()
{
    char a='y',jg[20];
	int i,d=0,count;
	printf("\n");
	printf("            |************************************************************|\n");
	printf("            |***************       ��Ϣͳ�ƣ����ᣩ      ****************|\n");
    printf("            |***************       �˳���ǰ              ****************|\n");
    printf("            |************************************************************|\n");
	while(a=='y')
	{
		printf("��������Ҫͳ�Ƶļ��᣺");
		scanf("%s",jg);
		printf("ͳ�ƽ�����£�\n");
		for(i=0;i<N;i++)
		{
			if(strcmp(s[i].num,"")!=0)
				d++;
			else break;
		}
		count=0;
		for(i=0;i<d;i++)
		{
			if(strcmp(jg,s[i].home)==0)
			count++;
		}
		printf("�ü���ѧ������Ϊ��%d\n",count);
		printf("�Ƿ����ͳ��(y��ʾ�ǣ�n��ʾ��):");
		fflush stdin;
		a=getchar();
	}
}

//ɾ����Ϣ����
void del()
{
    char a='y',xh[3];
	int i,d=0;
	printf("\n");
	printf("            |************************************************************|\n");
    printf("            |***************       ��Ϣɾ����ѧ�ţ�      ****************|\n");
    printf("            |***************       �˳���ǰ              ****************|\n");
    printf("            |************************************************************|\n");
    while(a=='y')
	{
		printf("��������Ҫɾ������Ϣ��ѧ����ѧ�ţ�");
		scanf("%s",xh);
		for(i=0;i<N;i++)
		{
			if(strcmp(s[i].num,"")!=0)
				d++;
			else break;
		}
		i=0;
		while(strcmp(xh,s[i].num)!=0)
			i++;
		for(i=i;i<d;i++)
			s[i]=s[i+1];		   
		printf("�Ƿ����ɾ��(y��ʾ�ǣ�n��ʾ��):");
		fflush stdin;
		a=getchar();
	}
}

//������Ϣ����
void save()
{
	FILE *fp;	
    int i,d=0;
	printf("\n");
	printf("            |****************************************************|\n");
    printf("            |***************       ������Ϣ      ****************|\n");
    printf("            |***************       �˳���ǰ      ****************|\n");
    printf("            |****************************************************|\n");
    for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			d++;
		else break;
	}
    if((fp=fopen("student.txt","wb"))==NULL)
	{
		printf("cannot open file!\n");
		exit(0);
	}
    if(fwrite(s,sizeof(struct student),d,fp)!=d)
	     printf("file write error\n");
    fclose(fp);
	printf("�ѳɹ����浱ǰs�е���Ϣ\n");
	system("pause");
}

//��ȡ��Ϣ����
void display()
{
	FILE *fp;
    int i,d=0;
	printf("\n");
	printf("            |****************************************************|\n");
    printf("            |***************       ��ȡ��Ϣ      ****************|\n");
    printf("            |***************       �˳���ǰ      ****************|\n");
    printf("            |****************************************************|\n");
    
    if((fp=fopen("student.txt","rb"))==NULL)
	{
		printf("cannot open file!");
		exit(0);
	}
    fread(s,sizeof(struct student),N,fp);
	printf("s����ϢΪ��\n");
	printf("\tѧ��\t����\t�Ա�\t����\t����\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			d++;
		else break;
	}
    for(i=0;i<d;i++)
	{
        printf("\t%s\t%s\t%c\t%s\t%d",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
        printf("\n");
	}
    fclose(fp);
    system("pause");
} 