/*-------------------------------------------------------------------------
LayoutMapCallback

Written by Michael C. Miller.

I invest time and resources providing this open source code,
please support me by donating (see https://github.com/Makuna/NeoPixelBus)

-------------------------------------------------------------------------
This file is part of the Makuna/NeoPixelBus library.

NeoPixelBus is free software: you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as
published by the Free Software Foundation, either version 3 of
the License, or (at your option) any later version.

NeoPixelBus is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with NeoPixel.  If not, see
<http://www.gnu.org/licenses/>.
-------------------------------------------------------------------------*/

#pragma once


#if defined(NEOPIXEBUS_NO_STL)

typedef uint16_t(*LayoutMapCallback)(int16_t x, int16_t y);

#else

#undef max
#undef min
#include <functional>
typedef std::function<uint16_t(int16_t x, int16_t y)> LayoutMapCallback;

#endif