#version 330 core
layout (location = 0) in vec4 vertex;   // <vec2 position, vec2 texCoord>

out vec2 TexCoord;

uniform mat4 projection;
uniform vec2 offset;

void main()
{
    float scale = 10.0f;

    TexCoord = vertex.zw;

    gl_Position = projection * vec4((vertex.xy * scale + offset), 0.0, 1.0);
}
