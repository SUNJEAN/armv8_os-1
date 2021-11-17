#include <stdio.h>
#include <elog.h>
#include <board_init.h>
#include <config.h>

int main()
{
    printf("start run in main!\n");
    elog_lib_init();

    interrupt_init();
    systic_timer_init();
    user_task_init();

    /* will not run here! */
    printf("will not run here!!!\n");
    return 0;
}
