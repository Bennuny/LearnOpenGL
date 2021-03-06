//
//  Texture2D.hpp
//  Breakout
//
//  Created by Ben on 2020/6/2.
//  Copyright © 2020 Ben. All rights reserved.
//

#ifndef Texture2D_hpp
#define Texture2D_hpp

#include <glad/glad.h>
#include <GLFW/glfw3.h>

class Texture2D
{
public:
    Texture2D();
    
    void Generate(GLuint width, GLuint height, unsigned char *data);

    void Bind();
    
    GLuint GetID() const {
        return _ID;
    }
    
    void SetInternalFormat(GLuint value) {
        _internal_format = value;
    }
    void SetImageFormat(GLuint value) {
        _image_format = value;
    }

    GLuint GetWidth() const {
        return _width;
    }
    
    GLuint GetHeight() const {
        return _height;
    }
    
private:
    GLuint  _ID;
    
    GLuint  _width;
    GLuint  _height;
    
    // Format of texture object
    GLuint  _internal_format;
    // Format of loaded image
    GLuint  _image_format;

    GLuint  _wrap_s;
    GLuint  _wrap_t;
    
    GLuint  _filter_min;
    GLuint  _filter_max;
};

#endif /* Texture2D_hpp */
