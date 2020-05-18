#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 100
struct student
{
     char num[3];//学号
     char name[20];//姓名
     char sex;//性别
     char home[20];//籍贯
	 int  age;//年龄
}s[N],temp;
struct student s[N]={{"01","sun",'m',"henan",22},{"02","jin",'m',"hubei",21},{"03","xu",'m',"jiangsu",21}};/*结构体类型变量的初始化；
这一行有个问题：每次运行后“信息浏览”时，出现的都是这三个人的信息，而“读取信息”显示的是上次运行后保存的信息，两者不一致*/

//函数声明
void menu();//主菜单
void input();//信息录入
void output();//信息浏览
void inquire();//信息查询
void inquiremenu();//信息查询菜单
void homeinquire();//按籍贯查询
void ageinquire();//按年龄查询
void sort();//信息排序
void sortmenu();//信息排序菜单
void agesort();//按年龄排序（降序）
void namesort();//按姓名排序（升序）
void sta();//信息统计
void del();//信息删除
void save();//保存信息
void display();//读取信息
void main()
{
	int a;
	do
	{
        system("cls");
	    menu();
        printf("请输入您的选择(0~8):");
        scanf("%d",&a);
	    system ("cls");
	    if(a==0) 
		{
		  printf("\t谢谢使用!\n");
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
			default:printf("错误，请重新在0-8之间选择\n");system("pause");
		}
	}while(1);
}

//主菜单函数
void menu()
{
	printf("\n");
    printf("      |*****************        学生籍贯信息记录簿         *****************|\n");
	printf("      |***                                                               ***|\n");
	printf("      |***                         1、信息录入                           ***|\n");
	printf("      |***                         2、信息浏览                           ***|\n");
	printf("      |***                         3、信息查询                           ***|\n");
    printf("      |***                         4、信息排序                           ***|\n");
	printf("      |***                         5、信息统计                           ***|\n");
    printf("      |***                         6、信息删除                           ***|\n");
    printf("      |***                         7、保存信息                           ***|\n");
    printf("      |***                         8、读取信息                           ***|\n");
	printf("      |***                         0、退出系统                           ***|\n");
	printf("      |***                                                               ***|\n");
	printf("      |*********************************************************************|\n");
	printf("\n");
}

//信息录入函数
void input()
{
	int i,n,b=0;
	printf("\n");
	printf("         |**************************************************|\n");
    printf("         |***************     信息录入     *****************|\n");
	printf("         |***************     退出当前     *****************|\n");
	printf("         |**************************************************|\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			b++;
		else break;
	}
	printf("已经有%d人的信息\n",b);
	printf("请输入要录入的人数:");
	scanf("%d",&n);
	printf("依次输入学生的学号，姓名，性别，籍贯，年龄(以空格间隔)\n");
	i=b;
	for(;i<n+b;i++)
	{
		printf("第%d个学生的信息:",i+1);
        scanf("%s %s %c %s %d",s[i].num,s[i].name,&s[i].sex,s[i].home,&s[i].age);
	}
	system("pause");
}

//信息浏览函数		  
void output()
{		  
    int i, b=0;
	printf("\n");
	printf("         |*****************************************|\n");
	printf("         |************   信息浏览   ***************|\n");
	printf("         |************   退出当前   ***************|\n");
    printf("         |*****************************************|\n");
	for(i=0;i<N;i++)
	{
		if(strcmp(s[i].num,"")!=0)
			b++;
		else break;
	}
	printf("已有%d人信息\n",b);
	if(b!=0)
		printf("\t学号\t姓名\t性别\t籍贯\t年龄\n");
    for(i=0;i<b;i++)
        printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
	system("pause");
}

//信息查询函数
void inquire()
{
   	int a;
	do
	{
        system("cls");
	    inquiremenu();
		printf("\n");
        printf("请输入您的选择(0~2):");
		fflush stdin;
        scanf("%d",&a);
	    system ("cls");
	    if(a==0) 
			break;
        switch(a)
		{
			case 1:homeinquire();break;
			case 2:ageinquire();break;
			default:printf("错误，请重新选择：");system("pause");
		}
	}while(1);
}

//信息查询菜单函数
void inquiremenu()
{
	printf("\n");
	printf("           |***********************************************|\n");
	printf("           |**************     信息查询     ***************|\n");
    printf("           |**************     1 按籍贯     ***************|\n");
    printf("           |**************     2 按年龄     ***************|\n");
	printf("           |**************     0 退出       ***************|\n");
	printf("           |***********************************************|\n");
}
 
//按籍贯查询函数
void homeinquire()
{
	char jg[20];
	int i,d=0,z=1;
	printf("\n");
	printf("            |*************************************************|\n");
	printf("            |***************    按籍贯查询    ****************|\n");
    printf("            |***************    退出当前      ****************|\n");
    printf("            |*************************************************|\n");
	printf("请输入您要查询的籍贯：");
	scanf("%s",jg);
	printf("查询结果如下：\n");
	printf("\t学号\t姓名\t性别\t籍贯\t年龄\n");
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
	if(z) printf("\t没有该籍贯的学生信息\n");
	system("pause");
}

//按年龄查询函数
void ageinquire()
{
	int nl,i,d=0,z=1; 
	printf("\n");
	printf("            |*************************************************|\n");
    printf("            |***************    按年龄查询    ****************|\n");
    printf("            |***************    退出当前      ****************|\n");
    printf("            |*************************************************|\n");
	printf("请输入您要查询的年龄：");
	scanf("%d",&nl);
	printf("查询结果如下：\n");
	printf("\t学号\t姓名\t性别\t籍贯\t年龄\n");
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
	if(z) printf("\t没有该年龄的学生信息\n");
	system("pause");
}

//信息排序函数
void sort()
{
 	int a;
	do
	{
        system("cls");
		sortmenu();
		printf("\n");
        printf("请输入您的选择(0~2):");
		fflush stdin;
        scanf("%d",&a);
	    system ("cls");
	    if(a==0) 
	    break;
        switch(a)
		{
			case 1:agesort(); break;
			case 2:namesort();break;
			default:printf("错误，请重新选择：");system("pause");
		}
	}while(1);
}

//信息排序菜单函数
void sortmenu()
{
	printf("\n");
	printf("           |***********************************************|\n");
	printf("           |**************     信息排序     ***************|\n");
    printf("           |**************     1 按年龄     ***************|\n");
    printf("           |**************     2 按姓名     ***************|\n");
	printf("           |**************     0 退出       ***************|\n");
	printf("           |***********************************************|\n");
}

//按年龄排序函数（降序）
void agesort()
{
    int i,j,d=0;
	printf("\n");
	printf("            |*************************************************|\n");
    printf("            |***************    按年龄排序    ****************|\n");
    printf("            |***************    退出当前      ****************|\n");
    printf("            |*************************************************|\n");
	printf("按年龄降序排序如下：\n");
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
	printf("\t学号\t姓名\t性别\t籍贯\t年龄\n");
	for(i=0;i<d;i++)
		printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
    system("pause");
}

//按姓名排序函数（升序）
void namesort()
{
    int i,j,d=0;
	printf("\n");
	printf("            |*************************************************|\n");
	printf("            |***************    按姓名排序    ****************|\n");
    printf("            |***************    退出当前      ****************|\n");
    printf("            |*************************************************|\n");
	printf("按姓名升序排序如下：\n");
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
    printf("\t学号\t姓名\t性别\t籍贯\t年龄\n");
	for(i=0;i<d;i++)
		printf("\t%s\t%s\t%c\t%s\t%d\n",s[i].num,s[i].name,s[i].sex,s[i].home,s[i].age);
    system("pause");
}

//信息统计函数
void sta()
{
    char a='y',jg[20];
	int i,d=0,count;
	printf("\n");
	printf("            |************************************************************|\n");
	printf("            |***************       信息统计（籍贯）      ****************|\n");
    printf("            |***************       退出当前              ****************|\n");
    printf("            |************************************************************|\n");
	while(a=='y')
	{
		printf("请输入您要统计的籍贯：");
		scanf("%s",jg);
		printf("统计结果如下：\n");
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
		printf("该籍贯学生人数为：%d\n",count);
		printf("是否继续统计(y表示是，n表示否):");
		fflush stdin;
		a=getchar();
	}
}

//删除信息函数
void del()
{
    char a='y',xh[3];
	int i,d=0;
	printf("\n");
	printf("            |************************************************************|\n");
    printf("            |***************       信息删除（学号）      ****************|\n");
    printf("            |***************       退出当前              ****************|\n");
    printf("            |************************************************************|\n");
    while(a=='y')
	{
		printf("请输入您要删除其信息的学生的学号：");
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
		printf("是否继续删除(y表示是，n表示否):");
		fflush stdin;
		a=getchar();
	}
}

//保存信息函数
void save()
{
	FILE *fp;	
    int i,d=0;
	printf("\n");
	printf("            |****************************************************|\n");
    printf("            |***************       保存信息      ****************|\n");
    printf("            |***************       退出当前      ****************|\n");
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
	printf("已成功保存当前s中的信息\n");
	system("pause");
}

//读取信息函数
void display()
{
	FILE *fp;
    int i,d=0;
	printf("\n");
	printf("            |****************************************************|\n");
    printf("            |***************       读取信息      ****************|\n");
    printf("            |***************       退出当前      ****************|\n");
    printf("            |****************************************************|\n");
    
    if((fp=fopen("student.txt","rb"))==NULL)
	{
		printf("cannot open file!");
		exit(0);
	}
    fread(s,sizeof(struct student),N,fp);
	printf("s中信息为：\n");
	printf("\t学号\t姓名\t性别\t籍贯\t年龄\n");
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