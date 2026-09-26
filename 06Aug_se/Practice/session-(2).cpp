#include <stdio.h>

       int main() {
    const float GST_RATE = 18.0;
    float basePrice = 500.0;
    float gst;
    float finalPrice;

    gst = basePrice * GST_RATE / 100;
    finalPrice = basePrice + gst;

    printf("Base Price = Rs. %.2f\n", basePrice);
    printf("GST = Rs. %.2f\n", gst);
    printf("Final Price = Rs. %.2f\n", finalPrice);

    return 0;
}

