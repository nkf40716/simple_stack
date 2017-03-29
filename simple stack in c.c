#define STACKSIZE 1024

struct stack
{
    int top;
    int items[STACKSIZE];
};

void push(struct stack *ps, int x)
{
    if (ps->top == STACKSIZE-1)
    {
        printf("Error: stack overflow\n");
        return;
    }
    else
    {
        ps->top += 1;
        int top = ps->top;
        ps->items [top] = x;
    }
}
 
bool isEmpty(struct stack *ps)
{
    return (ps->top == -1)? true : false;
}
 
int pop(struct stack *ps)
{
    int temp;
    if (ps->top == -1)
    {
        printf("Error: stack underflow \n");
        return -1;
    }
    else
    {
        int top = ps->top;
        temp = ps->items [top];
        ps->top -= 1;
        return temp;
    }
}