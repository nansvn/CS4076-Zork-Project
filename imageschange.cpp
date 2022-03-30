
#include "imageschange.h"




Images_Change::Images_Change()

{

    index = -1;

}

char* Images_Change::NextImage(){

    if(index>=9)

        index=0;

    else

        index++;

    return(images[index]);

}
