#include "monty.h"
/**
 * errorhandling - handle different errors for opcodes
 * @flag: flag that specigy the type of error
 * @line_number: number of the line in the open file
 * @top: pointer to the top of the stack
 * Return: void
 */
void errorhandling(int flag, unsigned int line_number, stack_t **top)
{
	/*First case: not file or more than one argument to monty*/
	if (flag == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	/* else if (flag == 2)*/
	/*fprintf(stderr, "Error: Can't open file %s\n", file_name);*/
	/*else if (flag == 3)*/
	/*fprintf(stderr, "L%d: unknown instruction %s\n", ln, op_code);*/
	else if (flag == 4)
		fprintf(stderr, "Error: malloc failed\n");
	else if (flag == 5)
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
	else if (flag == 6)
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	else if (flag == 7)
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	else if (flag == 8)
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
	else if (flag == 9)
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
	freedom(top, 1);
	exit(EXIT_FAILURE);
}