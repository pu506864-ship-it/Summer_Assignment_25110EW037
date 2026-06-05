/*Write a program to Print reverse pyramid.
  *********
   *******
    *****
     ***
      *  */
     #include<iostream>
     using namespace std;
     int main()
     {
     int rows;
cout<<"enter  number of row ::";cin>>rows;



for (int i = rows; i >= 1; i--)
{
    

    for (int j = 0; j <rows-i; j++)
    {
        cout<<" ";
    }
for ( int k =2*i-1; k>=1; k--)
{
     cout<<"*";
}
   cout<<endl;
}

     return 0;
     }
