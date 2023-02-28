int main() {
  int num, Num, count;
  scanf("%d", &num);
  Num = num;
  count=0;
  while(num!=-1) {
    scanf("%d", &num);
    if(num%2!=0){
      count=count+1;
    }
    if(count==Num){
      printf("%d",num);
      break;
    }
  }
  if(count<Num){
    printf("-1");
  }

  
  return 0;
}
