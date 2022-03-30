#ifndef IMAGESCHANGE_H
#define IMAGESCHANGE_H



class Images_Change

{

public:

    Images_Change();

    char *NextImage();

    /*图片的路径*/

    char* images[10] = {":/Background/Image/1.jpg",":/Background/Image/2.jpg",":/Background/Image/3.jpg",
                        ":/Background/Image/4.jpg",":/Background/Image/5.jpg",":/Background/Image/6.jpg",
                        ":/Background/Image/7.jpg",":/Background/Image/8.jpg",":/Background/Image/9.jpg",
                        ":/Background/Image/10.jpg"};

    int index;

};



#endif // IMAGESCHANGE_H
