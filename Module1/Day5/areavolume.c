//Use structures to find the volume and the total surface area of the box. 
  
  
#include <stdio.h>

struct Box {
    float length;
    float width;
    float height;
};

void calculateVolumeandArea(struct Box* box) {
    float volume, area;

    volume = box->length * box->width * box->height;
    area = 2 * (box->length * box->width + box->length * box->height + box->width * box->height);

    printf("volume: %.2f\n", volume);
    printf("total Surface Area: %.2f\n", area);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    printf("enter the dimensions of the box:\n");
    printf("length: ");
    scanf("%f", &(boxPtr->length));
    printf("width: ");
    scanf("%f", &(boxPtr->width));
    printf("height: ");
    scanf("%f", &(boxPtr->height));

    calculateVolumeandArea(boxPtr);

    return 0;
}


