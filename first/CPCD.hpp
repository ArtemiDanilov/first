//
//  CPCD.h
//  first
//
//  Created by Артемий Данилов on 28.10.2021.
//

#pragma once

#include "CPoint.hpp"
#include "CDist.hpp"

CPoint operator+(CPoint, CDist);
CPoint operator+(CDist, CPoint);
CDist operator-(CPoint, CPoint);
