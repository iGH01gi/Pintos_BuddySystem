#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "threads/init.h"
#include "threads/malloc.h"
#include "threads/palloc.h"
#include "threads/thread.h"
#include "projects/pa/pa.h"

void run_patest(char **argv)
{   
    /// TODO: make your own test

    printf("\n\n\n[A : request 5 page allocate]\n");
    size_t pageA=palloc_get_multiple(4,5);
    palloc_get_status(0);

    printf("\n\n\n[B : 9 page allocate]\n");
    size_t pageB=palloc_get_multiple(4,9);
    palloc_get_status(0);

    printf("\n\n\n[C : 9 page allocate]\n");
    size_t pageC=palloc_get_multiple(4,9);
    palloc_get_status(0);

    printf("\n\n\n[D : 4 page allocate]\n");
    size_t pageD=palloc_get_multiple(4,4);
    palloc_get_status(0);

    printf("\n\n\n[E : 2 page allocate]\n");
    size_t pageE=palloc_get_multiple(4,2);
    palloc_get_status(0);

    printf("\n\n\n[F : 18 page allocate]\n");
    size_t pageF=palloc_get_multiple(4,18);
    palloc_get_status(0);

    printf("\n\n\n [release D]\n"); 
    palloc_free_page(pageD);
    palloc_get_status(0);

    printf("\n\n\n [release C]\n");
    palloc_free_page(pageC);
    palloc_get_status(0);

    printf("\n\n\n [release B]\n");
    palloc_free_page(pageB);
    palloc_get_status(0);

    printf("\n\n\n[G : 18 page allocate]\n");
    size_t pageG=palloc_get_multiple(4,18);
    palloc_get_status(0);

    while (1) {
        timer_msleep(1000);
    }
}