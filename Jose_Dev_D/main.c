#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *fp;
	char * line = NULL;
	size_t len = 0;
	ssize_t read;
	char * sentence = NULL;
	char * op_code = NULL;
	char * error = NULL;
	char * tmp = NULL;
	unsigned int line_number = 1;
	stack_t *top = NULL;

	if (argc != 2) /*ERROR handling*/
	{
	   exit(EXIT_FAILURE);
	   /* Needs to set ERROR_handling function*/     
	}
	fp = fopen(argv[1], "r"); /*TEST pending*/
	if (fp == NULL)
		exit(EXIT_FAILURE); /* Needs to set ERROR_handling function*/
		
	/*Reading, searching and executing line by line*/
	while ((read = getline(&line, &len, fp)) != -1)
	{
		sentence = line;
		op_code = strtok(sentence, "\n ");
		tmp = strtok(NULL, "\n ");/*Takes in a char*/
		argument = tmp; /*Cast to const char & It is atoi() in each exe func*/
		if (error = strtok(NULL, "\n ") != NULL)
		{
			exit(EXIT_FAILURE)
			/* Needs to set ERROR_handling function*/ 
		}
		top = search_exec(op_code, line_number);
		line_number++;
		/*printf("%s", line);*/ 
		
	}

	/* EOF (EXIT_SUCCESS FREE MEMORY */
	fclose(fp);
	if (line)
		free(line);/* Buffer from getline() */
	exit(EXIT_SUCCESS);
	

}