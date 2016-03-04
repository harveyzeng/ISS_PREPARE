
int main()
{

	 int X=5,Y=5;
	int c[X][Y];
int i,j;
for( i=0;i<X;i++)c[i][0]=1;
for( j=0;j<Y;j++)c[0][j]=1;

for( i=1;i<X;i++)
	for( j=1;j<Y;j++)
		c[i][j]=c[i-1][j]+c[i][j-1];

return c[(X-1)][(Y-1)];

}
