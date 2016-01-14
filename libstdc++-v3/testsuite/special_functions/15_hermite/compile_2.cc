// { dg-do compile { xfail *-*-* } }
// { dg-excess-errors "" }
// { dg-options "-D__STDCPP_WANT_MATH_SPEC_FUNCS__" }

// Copyright (C) 2016 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

// 8.1.15 hermite

#include <math.h>

void
test01()
{
  float xf = 2.5F;
  double xd = 2.5;
  long double xl = 2.5L;
  unsigned int n = 5;

  hermite(n, xf);
  hermitef(n, xf);
  hermite(n, xd);
  hermite(n, xl);
  hermitel(n, xl);

  return;
}
