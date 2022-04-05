#ifndef IMAGESCHANGE_H
#define IMAGESCHANGE_H

#include <string>


class Images_Change

{

public:

    Images_Change();

    char *NextImage();
    char *NextImage2();
    char *ChangeImage(int i);
    /*图片的路径*/

    char* images[10] = {":/Background/Image/1.jpg",":/Background/Image/2.jpg",":/Background/Image/3.jpg",
                        ":/Background/Image/4.jpg",":/Background/Image/5.jpg",":/Background/Image/6.jpg",
                        ":/Background/Image/7.jpg",":/Background/Image/8.jpg",":/Background/Image/9.jpg",
                        ":/Background/Image/10.jpg"};
    char* images2[10] = {":/Boss/Image/Balana.jpg",":/Boss/Image/CK.jpg",":/Boss/Image/Doom.jpg",
                        ":/Boss/Image/HN.png",":/Boss/Image/Nevermore.jpg",":/Boss/Image/QOP.png",
                        ":/Boss/Image/SD.png",":/Boss/Image/Spe.jpg",":/Boss/Image/TB.jpg",
                        ":/Boss/Image/vampire.jpg"};
    int index;
};



#endif // IMAGESCHANGE_H
