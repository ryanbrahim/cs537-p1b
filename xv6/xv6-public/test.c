#include "types.h"
#include "stat.h"
#include "user.h"

int main(void)
{
    // printf(1, "test: Hello world!\n");
    // printf(1, "test: trace's return code is %d\n", trace("path/file.c"));
    // printf(1, "test: the current count is %d\n", getcount());
    
    char* testpath1 = "./README";
    char* testpath2 = "./cat";
    trace(testpath1);
    printf(1, "1st getcount should be 0 : %d\n", getcount());
    open(testpath1, 0);
    open(testpath2, 0);
    open(testpath1, 0);
    printf(1, "2nd getcount should be 2 : %d\n", getcount());

    // new trace
    trace(testpath2);
    printf(1, "1st getcount should be 0 : %d\n", getcount());
    open(testpath1, 0);
    open(testpath2, 0);
    open(testpath1, 0);
    printf(1, "2nd getcount should be 1 : %d\n", getcount());


    exit();
}
