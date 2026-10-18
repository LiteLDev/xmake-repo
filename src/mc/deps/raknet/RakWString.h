#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class RakWString {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, wchar_t*> c_str;
    ::ll::TypedStorage<8, 8, ulong>    c_strCharLength;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk37de96;
    ::ll::UntypedStorage<8, 8> mUnk89536d;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    RakWString& operator=(RakWString const&);
    RakWString(RakWString const&);
    RakWString();
#endif // @header-generator platform
};

} // namespace RakNet
