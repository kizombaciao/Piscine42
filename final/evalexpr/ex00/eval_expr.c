#include <unistd.h>

void ft_putchar(char c);
void ft_putnbr(int nb);
void ft_putstr(char *str);

struct et
{
    char value;
    et *left;
    et  *right;
}

// check if c is an operator
bool isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/') {
        return 1;
    }
    return 0;
}

// ??? HOW DOES THIS WORK?
// to do inorder traversal
void inorder(et *t)
{
    if (t) {
        inorder(t->left);
        printf("%c", t->value);
        inorder(t->right);
    }
}

// to create a new node
et *newNode(int v)
{
    et *temp;
    
    temp = (et *)malloc(sizeof(et));
    temp->left = NULL;
    temp->right = NULL;
    temp->value = v;
    return (temp);
}

// returns root of constructed tree for given postfix expression
et *constructTree(char postfix[])
{
    

    
    
}


int eval_expr(char *str)
{
    
    
    return (1);
}

int main(int ac, char **av)
{
    if (ac > 1) {
        ft_putstr(av[1]);
 
        ft_putnbr(eval_expr(av[1]));
        ft_putchar('\n');
    }
    return (0);
}
