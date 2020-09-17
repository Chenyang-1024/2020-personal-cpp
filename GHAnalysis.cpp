#include <iostream>
#include <bits/stdc++.h>
#include <dirent.h> 
#include <unistd.h>
#include "cJSON.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop*/ 

const char *optstring = "i:u:r:e:";  //对应四个短参数 -i，-u，-r，-e 

/*<path to data>是指存放JSON文件的文件夹，
  需要把文件读出，按照三种类型要求，解析后放入三个JSON，方便统计*/
void ReadJSON(string FilePath)	//JSON中要关注的项有type、actor->login、repo->name 
{
	
}

int main (int argc, char** argv)
{
	FILE *fp;
	cJSON *json;
	
	 
	int seg;	//命令行函数返回状态 
	while ((seg = getopt (argc, argv, optstring)) != -1)
	{
		
    } 
	
	char line[1024];
	if ((fp = fopen("./JSON/Data.json", "r")) != NULL)
	{	
		while (fgets(line, sizeof(line), fp) != NULL)
		{
			json = cJSON_Parse(line);	//获取整个句柄
			 
		}
	}
	
	//释放第一步获取的句柄所用的内存空间 
	cJSON_Delete(json);
	
	fclose(fp);
	 
	
	return 0;
}


