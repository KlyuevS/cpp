#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int GetRandomNumber(int min, int max)
{
  
  srand(time(NULL));

 
  int num = min + rand() % (max - min + 1);

  return num;
}
void game(int g){
	for(int i=0;i<g;i++){
int x;
int y;
int z;
cout<<"Choose one of this tools:"<<endl;
cout<<"1-rock"<<endl;
cout<<"2-scissors"<<endl;
cout<<"3-paper"<<endl;
cin>>x;
y=GetRandomNumber(1,3);
if ((y==1) && (x==1)){
	cout<<"Nobody win";
}
else if ((y==2) && (x==2)){
	cout<<"Nobody win";
}
else if ((y==3)&&(x==3)){
	cout<<"Nobody win";
}
else if ((y==1)&&(x==2)){
	cout<<"Rock stronger than scissors,u lose:("<<endl;
}
else if ((y==1)&&(x==3)){
	cout<<"Paper stronger than rock, u win :)"<<endl;
}
else if ((y==2)&&(x==1)){
	cout<<"Rock  stronger than scissors,u win :)"<<endl;
}
else if ((y==2) && (x==3)){
	cout<<"Scissors stronger than paper, u lose :("<<endl;
}
else if ((y==3)&&(x==1)){
	cout<<"Paper stronger than rock,u lose :("<<endl;
}
else if ((y==3)&&(x==2)){
	cout<<"Scissors stronger than paper, u win :)"<<endl;
}
else {
	cout<<"incorrect choice"<<endl;
}
	}
}
int main()
{
int round;
int go;
cout<<"Choose number of rounds"<<endl;
cin>>go;
game(go);
return 0;	
}


