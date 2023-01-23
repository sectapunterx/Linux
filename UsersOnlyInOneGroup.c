#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char s[10000];
	FILE* out;
	char c;
	int count = 0;
	char* outname = "out.txt";
	out = fopen(outname, "r");
	if(!out)
		printf("file error\n");
	system("getent passwd > out.txt");
	size_t num_read = fread(s, 1, sizeof(s), out);
	fclose(out);
	fwrite(s, 1, num_read, stdout);

	

	return 0;
}