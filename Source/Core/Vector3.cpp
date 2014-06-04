/*
 * This source file is part of rocket, the HTML/CSS Interface Middleware
 *
 * For the latest information, see http://www.librocket.com
 *
 * Copyright (c) 2014 Markus Schöngart
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#include "precompiled.h"
#include <Rocket/Core/Types.h>

namespace Rocket {
namespace Core {

Vector3i operator*(int lhs, const Vector3i& rhs)
{
	return Vector3i(lhs * rhs.x, lhs * rhs.y, lhs * rhs.z);
}

Vector3f operator*(float lhs, const Vector3f& rhs)
{
	return Vector3f(lhs * rhs.x, lhs * rhs.y, lhs * rhs.z);
}

template <>
Vector3< float > Vector3< float >::Normalise() const
{
	float magnitude = Magnitude();
	if (Math::IsZero(magnitude))
		return *this;

	return *this / magnitude;
}

}
}
