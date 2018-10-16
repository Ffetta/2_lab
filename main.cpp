#include <iostream>
#include <list>     // подключаем заголовок списка
#include <iterator> // заголовок итераторов
#include <QList>
#include<QVector>
#include <stdio.h>
#include <time.h>
#include <ctime>
using namespace std;



struct list
{
 int field; // поле данных
 struct list *next; // указатель на следующий элемент
 struct list *prev; // указатель на предыдущий элемент
};




void insert(int *elem, int index,int *ptr,int *n)
{

for (int j=*n-1; j>=index; j--)
ptr[j+1]=ptr[j];
*n++;
ptr[index]=*elem;
}



//int main()
//{
// int *a,n,index,elem=2;
// cout<<"n="; cin>>n;
// cout<<"index="; cin>>index;
// if(index>n)
//  return 0;
// a=(int *)calloc(n,sizeof(int));
// for(int i=0;i<n;i++)
//  cin>>a[i];
// insert(a,index,&elem,&n );
// cout << "\n";
// for(int i=0;i<n;i++)
//  cout<<a[i];
//}


//insertToList(QList myList,int a,int pos){

//    int* index;
//    myList.insert(pos,a);
//         myList.at(pos);







//}

int main()
{
   //int *dinamich_array = new int [];

  QList  <int> myList; // объявляем пустой список
      for(int i = 0; i < 11; i++) {
          myList.push_back(i); // добавляем в список новые элементы
      }
   QVector<int> myVector;
   for(int i = 0; i < 11; i++) {
       myVector.push_back(i);
   }

   int a,pos=0;
   cin>>pos;
   cin>>a;




   clock_t start1 = clock();
    getchar();
    myVector.insert(pos,a);

clock_t start2 = clock();
  clock_t end1 = clock();
  double seconds1 = (double)(end1 - start1) / CLOCKS_PER_SEC;
    printf("The time: %f seconds\n", seconds1);
 myVector.insert(pos,a);
 double time1 = static_cast<double>(clock() - start2) / CLOCKS_PER_SEC;
       cout << time1 << " seconds" << endl;
      time_t start, end;
start2 = clock();
        time(&start);
        myVector.insert(pos,a);
        time(&end);
        time1 = static_cast<double>(clock() - start2) / CLOCKS_PER_SEC;
               cout << time1 << " seconds" << endl;

        //long double seconds = difftime(end, start);
        //printf("The time: %f seconds\n", seconds);


        time(&start);
        myList.insert(pos,a);
        time(&end);

        //seconds = difftime(end, start);
       // printf("The time: %f seconds\n", seconds);

      myList.insert(pos,a);



     //insertToList(myList,a,poz);




//   struct list
//  {
//    int field; // поле данных
//    struct list *next; // указатель на следующий элемент
//    struct list *prev; // указатель на предыдущий элемент
//  };



    return 0;
}
