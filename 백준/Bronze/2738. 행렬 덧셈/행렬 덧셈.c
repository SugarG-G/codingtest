int main(void)
{
   //   3 3
   //   1 1 1
   //   2 2 2
   //   0 1 0
   //   3 3 3
   //   4 4 4
   //   5 5 100

   int N, M;
   scanf("%d %d", &N, &M); // 3, 3

   int array1[N][M];
   int array2[N][M];

   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         scanf("%d", &array1[i][j]);
      }
   }

   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         scanf("%d", &array2[i][j]);
      }
   }



   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < M; j++)
      {
         printf("%d ", array1[i][j] + array2[i][j]);
      }
      printf("\n");
   }

   return 0;
}