#include <stdio.h>

int data = 100;
static int bss;

void print_addr ( void )
{
        int local = 100;
        int *code_segment_address = ( int* ) &print_addr;
        int *data_segment_address = &data;
        int *bss_address = &bss;
        int *stack_segment_address = &local;

        printf ( "\nAddress of various segments:" );
        printf ( "\n\tCode Segment : %p" , code_segment_address );
        printf ( "\n\tData Segment : %p" , data_segment_address );
        printf ( "\n\tBSS : %p" , bss_address );
        printf ( "\n\tStack Segment : %p\n" , stack_segment_address );

}

int main ( )
{
        print_addr ();
        return 0;
}