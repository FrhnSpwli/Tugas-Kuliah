#include<stdio.h>
#include<math.h>
#include<conio.h>


float determinant(float a[25][25],float k);
void cofactor(float num[25][25],float f);
void transpose(float num[25][25],float fac[25][25],float r);
int main()
{
  float a[25][25],k,d;
  int i,j;
  printf("-------------------------------------------------------------\n");
  printf("----------------program invers matriks------------------------\n");
  printf("-------------------------------------------------------------\n");
  printf("masukkan ordo matriks : ");
  scanf("%f",&k);
  printf("masukkan elemen dari matriks %.0fX%.0f \n",k,k);
  for (i=0;i<k;i++)
    {
     for (j=0;j<k;j++)
       {
        printf("A(%d,%d)",i+1,j+1);
        scanf("%f",&a[i][j]);
        }
    }
  d=determinant(a,k);
  printf("Determinan = %.2f",d);
  if (d==0)
   printf("\nInverse matriks tidak temukan\n");
  else
   cofactor(a,k);
   printf("\n\n**** AAAARRIIGGGAATTOOUUU ONI CHANNNNNNNNN!!! ****");
   getch();
}

/*For calculating Determinant of the Matrix */
float determinant(float a[25][25],float k)
{
  float s=1,det=0,b[25][25];
  int i,j,m,n,c;
  if (k==1)
    {
     return (a[0][0]);
    }
  else
    {
     det=0;
     for (c=0;c<k;c++)
       {
        m=0;
        n=0;
        for (i=0;i<k;i++)
          {
            for (j=0;j<k;j++)
              {
                b[i][j]=0;
                if (i != 0 && j != c)
                 {
                   b[m][n]=a[i][j];
                   if (n<(k-2))
                    n++;
                   else
                    {
                     n=0;
                     m++;
                     }

                   }
               }
             }
          det=det + s * (a[0][c] * determinant(b,k-1));
          s=-1 * s;
          }
    }

    return (det);
}

void cofactor(float num[25][25],float f)
{
 float b[25][25],fac[25][25];
 int p,q,m,n,i,j;
 for (q=0;q<f;q++)
 {
   for (p=0;p<f;p++)
    {
     m=0;
     n=0;
     for (i=0;i<f;i++)
     {
       for (j=0;j<f;j++)
        {
          if (i != q && j != p)
          {
            b[m][n]=num[i][j];
            if (n<(f-2))
             n++;
            else
             {
               n=0;
               m++;
               }
            }
        }
      }
      fac[q][p]=pow(-1,q + p) * determinant(b,f-1);
    }
  }
  transpose(num,fac,f);
}
/*Finding transpose of matrix*/
void transpose(float num[25][25],float fac[25][25],float r)
{
  int i,j;
  float b[25][25],inverse[25][25],d;

  for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
         b[i][j]=fac[j][i];
        }
    }
  d=determinant(num,r);
  for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
        inverse[i][j]=b[i][j] / d;
        }
    }
   printf("\n\n\nThe inverse of matrix is : \n");

   for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
         printf("\t%.1f",inverse[i][j]);
        }
    printf("\n");
     }
}