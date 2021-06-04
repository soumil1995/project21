/*******************************************************************************
* File Name: user_param.h
* Version 0.30 (Update 25-6-2012)
*
* Description:
*  This file contains assignment of parameters for global resources.
*
* Author: Siew Hon Teay
* Diagnostics and Sustainability Research Group(DIASUS)
*
*******************************************************************************
Copyright(c) 2012 S.H.Teay, DIASUS

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
********************************************************************************/
//*****Declarations of parameters*****
//***** Input 1: i1*****
member_func i1;
//Term: low,medium,high
int i1_xfunc[3][5] = {{-30,0,27,27,27},{11,35,64,64,64},{45,75,105,105,105}};
int i1_yfunc[3][5] = {{0,1,0,0,0},{0,1,0,0,0},{0,1,0,0,0}};
int i1_range[2] = {0,70};
double i1_mapped[3];
double i1_weight[3] = {1,1,1};

//***** Input 2: i2*****
member_func i2;
//Term: v.low,low,medium,high,v.high
int i2_xfunc[3][5] = {{-13,0,13,13,13},{3,15,27,27,27},{17,30,42,42,42}};
int i2_yfunc[3][5] = {{0,1,0,0,0},{0,1,0,0,0},{0,1,0,0,0}};
int i2_range[2] = {0,30};
double i2_mapped[3];
double i2_weight[3] = {1,1,1};

//***** Output: o1*****
member_func o1;
//Term: v.low,low,medium,high,v.high
int o1_xfunc[3][5] = {{-13,0,13,13,13},{3,15,27,27,27},{17,30,42,42,42}};
int o1_yfunc[3][5] = {{0,1,0,0,0},{0,1,0,0,0},{0,1,0,0,0}};
int o1_range[2] = {0,30};
double o1_mapped[3];
double o1_weight[3] = {1,1,1};

double m[5][4];	//1st order membership function of fuzzy sset

void declaration(void)
{
	i1.name = "i1\0";
	i1.num_func = 3;
	i1.xfunc = i1_xfunc;
	i1.yfunc = i1_yfunc;
	i1.range = i1_range;
	i1.mapped = i1_mapped;
	i1.weight = i1_weight;
	i1.network = 1;
	i1.type = 0;

	i2.name = "i2\0";
	i2.num_func = 3;
	i2.xfunc = i2_xfunc;
	i2.yfunc = i2_yfunc;
	i2.range = i2_range;
	i2.mapped = i2_mapped;
	i2.weight = i2_weight;
	i2.network = 1;
	i2.type = 0;

	o1.name = "o1\0";
	o1.num_func = 3;
	o1.xfunc = o1_xfunc;
	o1.yfunc = o1_yfunc;
	o1.range = o1_range;
	o1.mapped = o1_mapped;
	o1.weight = o1_weight;
	o1.network = 1;
	o1.type = 1;
}
