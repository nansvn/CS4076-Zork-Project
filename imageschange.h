#ifndef IMAGESCHANGE_H
#define IMAGESCHANGE_H



class Images_Change

{

public:

    Images_Change();

    char *NextImage();

    /*图片的路径*/

    char* images[10] = {":/Boss/Image/Doom.jpg",":/Boss/Image/Nevermore.jpg",":/Boss/Image/Spe.jpg",":/Boss/Image/Balana.jpg",":/Boss/Image/CK.jpg",":/Boss/Image/HN.png",":/Boss/Image/loa.jpg",":/Boss/Image/QOP.png",":/Boss/Image/SD.png",":/Boss/Image/TB.jpg"};

    int index;

};



#endif // IMAGESCHANGE_H
