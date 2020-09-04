#ifndef POS_HPP
#define POS_HPP
int pos(char x, char* arr){
    int i;
    for(i=0;i<7;i++){
        if(x==arr[i])
            return i;
    }
    return 7;
}
#endif
