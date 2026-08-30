#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakWString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, wchar_t*> c_str;
    ::ll::TypedStorage<8, 8, ulong>    c_strCharLength;
    // NOLINTEND
};

} // namespace RakNet
