#include <iostream>
#include <bits/stdc++.h>
#include <dirent.h> 
#include <unistd.h>
#include "cJSON.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop*/ 

const char *optstring = "i:u:r:e:";  //��Ӧ�ĸ��̲��� -i��-u��-r��-e 

/*<path to data>��ָ���JSON�ļ����ļ��У�
  ��Ҫ���ļ�������������������Ҫ�󣬽������������JSON������ͳ��*/
void ReadJSON(string FilePath)	//JSON��Ҫ��ע������type��actor->login��repo->name 
{
	
}

int main (int argc, char** argv)
{
	FILE *fp;
	cJSON *json;
	
	 
	int seg;	//�����к�������״̬ 
	while ((seg = getopt (argc, argv, optstring)) != -1)
	{
		
    } 
	
	char line[1024];
	if ((fp = fopen("./JSON/Data.json", "r")) != NULL)
	{	
		while (fgets(line, sizeof(line), fp) != NULL)
		{
			json = cJSON_Parse(line);	//��ȡ�������
			 
		}
	}
	
	//�ͷŵ�һ����ȡ�ľ�����õ��ڴ�ռ� 
	cJSON_Delete(json);
	
	fclose(fp);
	 
	
	return 0;
}


