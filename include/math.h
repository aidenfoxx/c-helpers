#ifndef MATH_H
#define MATH_H

#include <stdio.h>
#include <math.h>

typedef struct {
	float x;
	float y;
} Vec2;

typedef struct {
	float x;
	float y;
	float z;
} Vec3;

typedef struct {
	float x;
	float y;
	float z;
	float w;
} Vec4;

typedef struct {
	float xx; float xy; float xz; float xw;
	float yx; float yy; float yz; float yw;
	float zx; float zy; float zz; float zw;
	float wx; float wy; float wz; float ww;
} Mat4;

Vec2 vec2(float, float);
Vec3 vec3(float, float, float);
Vec4 vec4(float, float, float, float);

Vec2 vec2Negative(Vec2);
Vec3 vec3Negative(Vec3);
Vec4 vec4Negative(Vec4);

Vec2 vec2Normalize();
Vec3 vec3Normalize();
Vec4 vec4Normalize();

Vec2 vec2AddVec2(Vec2, Vec2);
Vec2 vec2AddVec3(Vec2, Vec3);
Vec2 vec2AddVec4(Vec2, Vec4);

Vec3 vec3AddVec2(Vec3, Vec2);
Vec3 vec3AddVec3(Vec3, Vec3);
Vec3 vec3AddVec4(Vec3, Vec4);

Vec4 vec4AddVec2(Vec4, Vec2);
Vec4 vec4AddVec3(Vec4, Vec3);
Vec4 vec4AddVec4(Vec4, Vec4);

Vec2 vec2AddMat4(Vec2, Mat4);
Vec3 vec3AddMat4(Vec3, Mat4);
Vec4 vec4AddMat4(Vec4, Mat4);

Vec2 vec2DivideVec2(Vec2, Vec2);
Vec2 vec2DivideVec3(Vec2, Vec3);
Vec2 vec2DivideVec4(Vec2, Vec4);

Vec3 vec3DivideVec2(Vec3, Vec2);
Vec3 vec3DivideVec3(Vec3, Vec3);
Vec3 vec3DivideVec4(Vec3, Vec4);

Vec4 vec4DivideVec2(Vec4, Vec2);
Vec4 vec4DivideVec3(Vec4, Vec3);
Vec4 vec4DivideVec4(Vec4, Vec4);

Vec2 vec2DivideMat4(Vec2, Mat4);
Vec3 vec3DivideMat4(Vec3, Mat4);
Vec4 vec4DivideMat4(Vec4, Mat4);

Vec2 vec2MultiplyVec2(Vec2, Vec2);
Vec2 vec2MultiplyVec3(Vec2, Vec3);
Vec2 vec2MultiplyVec4(Vec2, Vec4);

Vec3 vec3MultiplyVec2(Vec3, Vec2);
Vec3 vec3MultiplyVec3(Vec3, Vec3);
Vec3 vec3MultiplyVec4(Vec3, Vec4);

Vec4 vec4MultiplyVec2(Vec4, Vec2);
Vec4 vec4MultiplyVec3(Vec4, Vec3);
Vec4 vec4MultiplyVec4(Vec4, Vec4);

Vec2 vec2MultiplyMat4(Vec2, Mat4);
Vec3 vec3MultiplyMat4(Vec3, Mat4);
Vec4 vec4MultiplyMat4(Vec4, Mat4);

Vec3 vec3CrossProduct();

Vec4 quatRotation(Vec3, float);
Vec4 quatMultiplyQuat(Vec4, Vec4);

Mat4 mat4Empty();
Mat4 mat4Identity();

Mat4 mat4Translation(Vec3);
Mat4 mat4RotationQuat(Vec4);
Mat4 mat4Scale(Vec3);

Mat4 mat4Invert(Mat4);
Mat4 mat4Transpose(Mat4);

Mat4 mat4LookAt(Vec3, Vec3, Vec3);
Mat4 mat4Orthographic(float, float, float, float, float, float);
Mat4 mat4Perspective(float, float, float, float);

Mat4 mat4MultiplyMat4(Mat4, Mat4);

#endif