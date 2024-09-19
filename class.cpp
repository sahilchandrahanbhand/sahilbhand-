#include <iostream> 
using namespace std;
class students {
private:
int score[5];
public:
void input()
{
for(int i=0;i<5;++i){
cin>>scores[i];
}
}
int calculateTotalScore() const {
int totalscore = 0;
fort(i=0;i<5;++i){
totalscore +=scores[i];
}
return totalScore;
}
};
int main() {
students student;
cout<<"enter 5 exam scores:";
student.input();
cout<<"Total score:"student.calculateTotalscore()<<endl;
return 0;
}
