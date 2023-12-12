#include<unistd.h>
int main(){
char buf[20];
read(0,buf,5);
write(1,buf,5);
}
