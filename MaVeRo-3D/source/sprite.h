#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <3ds.h>
#include <sf2d.h>
class sprite
{
	int x, y, width, height;
	int* R;
	int* G;
	int* B;
	int* A;
	double Scale;
public:
	void init() {
		R = NULL;
		G = NULL;
		B = NULL;
		A = NULL;
	}
	void set(int ix, int iy, int *iR, int *iG, int *iB, int *iA, int iwidth, int iheight, double iscale)
	{
		x = ix;
		y = iy;
		int N = iwidth * iheight;
		R = new int[N];
		G = new int[N];
		B = new int[N];
		A = new int[N];
		for (int i = 0; i < N; i++)
		{
			R[i] = iR[i];
			G[i] = iG[i];
			B[i] = iB[i];
			A[i] = iA[i];
		}
		width = iwidth;
		height = iheight;
		Scale = iscale;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	void setPosition(int a, int b)
	{
		x = a;
		y = b;
	}
	void scale(double n)
	{
		Scale = n;
	}
	void draw(int relative_x, int relative_y);
};

/*class obj_Player {
	sprite private_sprite;
	bool private_exists;
	int private_scale;
public:
	void set(sprite set_sprite, int x, int y, int scale)
	{
		private_sprite = set_sprite;
		private_exists = true;
		private_sprite.setPosition(x, y);
		private_scale = scale;
	}
	int getX()
	{
		return private_sprite.getX();
	}
	int getY()
	{
		return private_sprite.getY();
	}
	void move(int x, int y)
	{
		private_sprite.setPosition(x, y);
	}
	void draw(int relative_x, int relative_y)
	{
		private_sprite.draw(relative_x, relative_y);
	}
	bool exists()
	{
		return private_exists;
	}
	int scale()
	{
		return private_scale;
	}
	void setScale(int n)
	{
		private_sprite.scale(n);
		private_scale = n;
	}
	void changeExistance()
	{
		if (private_exists)
			private_exists = false;
		else
			private_exists = true;
	}
};*/

/*class obj_Tile {
	sprite private_sprite;
public:
	void set(sprite set_sprite, int x, int y, int scale)
	{
		private_sprite = set_sprite;
		private_sprite.setPosition(x, y);
		private_sprite.scale(scale);
	}
	int getX()
	{
		return private_sprite.getX();
	}
	int getY()
	{
		return private_sprite.getY();
	}
	void move(int x, int y)
	{
		private_sprite.setPosition(x, y);
	}
	void draw(int relative_x, int relative_y)
	{
		private_sprite.draw(relative_x, relative_y);
	}
};*/
