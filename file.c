#include <stdio.h>
int main()
{
	FILE *fp = fopen("NewFile.c", "w");
	if(fp == NULL){
		printf("Unable to open file");
		return 1;
	}
	fprintf(fp, "#include <stdio.h>\n");
	fprintf(fp, "int main(){\n");
	fprintf(fp, "	printf(\"Hello World\"); \n");
	fprintf(fp, "	return 0;\n");
	fprintf(fp, "}\n");
	fclose(fp);
	return 0;
}
