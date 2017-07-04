/*
 * definitions.h
 *
 *  Created on: Aug 14, 2013
 *      Author: Paul Phillips
 */

#ifndef DEFINITIONS_H_
#define DEFINITIONS_H_

enum
{
    X_AXIS,
    Y_AXIS,
    Z_AXIS,
};

#define EULAR 3
//define: 弧长等于半径的弧，其所对的圆心角为1弧度
//360度= 2pi;  => 1弧度约为57.3度。//180/3.14
#define R2D 57.3F
//3.14/180 = 0.0174
#define D2R 0.01745329

#endif /* DEFINITIONS_H_ */
