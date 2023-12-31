#include <stdio.h>
#include <stdlib.h>



///IMPORTANT NOTE: PREFIX (++) OR (--),  EQUAL (=), DEREFERENCE(&), POINTER REFERENCE(*), UNARY (-) OR (+)
///ARE RIGHT ASSOCIATIVE -> FROM RIGHT TO LEFT

///IMPORTANT NOTE: POSTFIX (++) OR (--) IS LEFT ASSOCIATIVE -> FROM LEFT TO RIGHT

///IMPORTANT NOTE: PRECEDENCE OF POSTFIX (LEFT TO RIGHT) > PRECEDENCE OF PREFIX (RIGHT TO LEFT)



int main()
{

}


///PREFIX AND POSTFIX EXAMPLES ON MATHEMATICAL OPERATIONS
void prepostNums_1() {
    int i = 1;
    int sum = 0;

    ///IMPORTANT NOTE: PREFIXS "++X" ARE ASSIGNED AT THE END OF EACH OPERATION (+, -, *, /)
    ///IMPORTANT NOTE: POSTFIX (++) OR (--) IS LEFT ASSOCIATIVE -> FROM LEFT TO RIGHT
    ///IMPORTANT NOTE: PRECEDENCE OF POSTFIX (LEFT TO RIGHT) > PRECEDENCE OF PREFIX (RIGHT TO LEFT)


    ///FROM LEFT TO RIGHT, PREFIX INCREMENTS I BUT IS NOT ASSIGNED YET, I = 2.
    ///POSTFIX IS ASSIGNED = 2 AND THEN INCREMENTED  I = 3;
    ///NOW THE PREFIX IS ASSIGNED TO THE NEW INCREMENTED VALUE , 3.
    ///SUM = 5
    ///I AFTER OPERATION = 3
    ///      3  +  2 = 5
    //sum = ++i + i++;



    ///FROM LEFT TO RIGHT , POSTFIX ASSIGNED = 1 THEN INCREMENT I = 2.
    ///PREFIX INCREMENTED AND ASSIGNED I = 3 AS OPERATION IS DONE
    ///SUM = 1 + 3 = 4
    ///I AFTER OPERATION = 3
    //sum = i++ + ++i;

    ///FROM RIGHT TO LEFT (ONLY PREFIX) , 2ND PREFIX IS INCREMENTED BUT NOT ASSIGNED AS OPERATION IS NOT DONE, VALUE OF I = 2
    ///THEN 1ST PREFIX IS INCREMENTED AND ASSIGNED AS OPERATION IS DONE SO I = 3 AND 1ST PREFIX = 3
    ///2ND PREFIX IS NOW ASSIGNED TO THE FINAL VALUE OF I , 3
    ///SUM = 6
    ///     3   +   3
    //sum = ++i + ++i;


    ///FROM LEFT TO RIGHT, 1ST POSTFIX IS ASSIGNED THEN INCREMENTED, 1ST = 1, I = 2.
    ///THEN 2ND POSTFIX IS ASSIGNED THEN INCREMENTED AS WELL, 2ND = 2, I = 3.
    ///SUM = 3
    ///I AFTER OPERATION = 3
    ///    1  +  2
    //sum = i++ + i++;


    //sum = i++ + i++ + i++;
    //sum = ++i + ++i + ++i;
    //sum =  i++ + ++i + i++;

    printf("%d\n", i);
    printf("%d", sum);
}

///PREFIX AND POSTFIX EXAMPLES ON POINTERS
void prepostPointers_1() {
    char arr[] = "geeksforgeeks";
    char *p = arr;
    ///Address incremented then get value : ARR[I+1]
    //*p++;

    ///Get value then increment value : g -> g+1 = h .. abcdefGH
    //++*p;
    printf(" %c", *p);
    getchar();
    return 0;
}

///PREFIX AND POSTFIX EXAMPLES ON NUMBERS NOT IN AN OPERATION
void loops_1() {
    for (int i = 0; i < 5;) {


        ///IMPORTANT NOTE: PREFIX AND DEREFERENCE(&) AND POINTER REFERENCE(*) ARE RIGHT ASSOCIATIVE -> FROM RIGHT TO LEFT:

        ///PREFIX
        //printf("i before %d\n" ,i); //0
        ///RIGHT TO LEFT -> I INCREMENTED AND ASSIGNED
        //printf("sum %d", i + ++i); // 1 + 1
        //printf("\n");
        //printf("i after %d\n" ,i); // 1

        ///POSTFIX
        //printf("i before %d\n" ,i);
        /// 0 + 1
        //printf("%d\n", i + i++);
        //printf("i after %d\n" ,i);
        //printf("\n");
    }

}

///POINTERS SYNTAX
void pointers_1() {

int x = 5;
    int y;
    int *z;

    int *p;
    ///1- DURING INITIALIZATION: PTR P POINTS TO ADD X
    //int *p = &x;

    ///IF DECLARED: ERROR.
    //*p = &x;

    ///1- VALUE OF P = VALUE OF X
    //*p = x;

    ///1- ADD X = ADD P
    //p = &x;

    /// ERROR.
    //p = x;

    ///VALUE OF Y = VALUE OF P
    //y = *p;

    ///ADD OF PTR Z = ADD OF PTR P
    //z = p;

    ///VALUE OF PTR Z = VALUE OF PTR P
    //*z = *p;

    printf("%d\n", *p);
    //printf("%d\n", p);
    printf("%d\n", x);
    //printf("%d\n", y);
    //printf("%d\n", z);
    printf("%d\n", *z);
}





