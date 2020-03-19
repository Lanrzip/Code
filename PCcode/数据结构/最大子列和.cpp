int MaxSubseq(int A[], int N){
    int i,j;
    int maxsum, totalsum;
    for (i=0; i<N; i++){
        for (j=i; j<N; j++){
            maxsum += A[j];
            if (maxsum > totalsum){
                totalsum = maxsum;
            }
        }
    }
    return maxsum;
}