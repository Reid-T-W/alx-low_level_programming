#ifndef HEADER_OPERATION
#define HEADER_OPERATION
/**
 *struct op - Struct op
 *
 *@op: The operator
 *@f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
/**
 *op_add - adding operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_add(int a, int b);
/**
 *op_sub - subtraction operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_sub(int a, int b);
/**
 *op_mul - multiplication operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_mul(int a, int b);
/**
 *op_div - division operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_div(int a, int b);
/**
 *op_mod - modules operation
 *@a: param
 *@b: param
 *Return: int
 */
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif /* HEADER_OPERATION */
