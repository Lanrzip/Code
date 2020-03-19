int Max3( int A, int B, int C )
{ /* 返回3个整数中的最大值 */
    return A > B ? A > C ? A : C : B > C ? B : C;
}

int MaxSubseq(int A[], int N){
    int  half = N/2;
    if (half == 1){
        return 0;
    }
}