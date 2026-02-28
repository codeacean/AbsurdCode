struct Rectangle {
    float x = 0, y = 0;
    float width, height;

    float area() const { return width * height; }
    bool contains(float px, float py) const {
        return px >= x && px < x + width &&
               py >= y && py < y + height;
    }
};

Rectangle r1 = { .width = 120.5f, .height = 80.0f, .x = 10, .y = 15 };
// .y was omitted → zero-initialized

Rectangle r2 { .width{200}, .height{150} };
