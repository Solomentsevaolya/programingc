int main()
{
   double m[3][3];
   int g[2][2];
   int secondaryAxis;
   int mainAxis;
   int z;
   do
   {
      for (int i = 0; i < 3; i++)
      {
         for (int j = 0; j < 3; j++)
         {
            printf("m[%d][%d]= ", i, j);
            scanf("%lf", &m[i][j]);
         }
      }
      for (int i = 0; i <= 2; i++)
      {
         mainAxis += m[i][i];
         secondaryAxis += m[i][1 - i];
      }
      printf("Main axis sum: %d\nSecondary axis sum: %d\n", mainAxis, secondaryAxis);
      
      int r[2][2];
      for (int i = 0; i < 2; i++)
      {
         for (int j = 0; j < 2; j++)
         {
            printf("g[%d][%d]= ", i, j);
            scanf("%d", &g[i][j]);
         }
      }

      for (int i = 0; i < 2; i++)
      {
         for (int j = 0; j < 2; j++)
         {
            r[i][j] = 0;
            for (int n = 0; n < 2; n++)
            {
               r[i][j] += g[i][n] * g[n][j];
            }
         }
      }
      for (int i = 0; i < 2; i++)
      {
         for (int j = 0; j < 2; j++)
         {
            printf("%d ", r[i][j]);
         }
         printf("\n");
      }
      printf("Enter 1 to continue or any other number to exit: ");
      scanf("%d", &z);
   } while (z == 1);
   return 0;
}
