//
// Created by Max Yu on 9/22/20.
//

#ifndef LOOPSYSTEM_MATERIAL_H
#define LOOPSYSTEM_MATERIAL_H

struct Color {
    int r;
    int g;
    int b;
    Color(int r, int g, int b) {
        Color::r = r;
        Color::g = g;
        Color::b = b;
    }
};

class Material {
private:
    Color color;
public:
    void setColor(Color &c)
    { color = c; }
};


#endif //LOOPSYSTEM_MATERIAL_H
