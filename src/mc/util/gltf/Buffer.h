#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace glTF {

struct Buffer {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> uri;
    ::ll::TypedStorage<4, 4, int>          byteLength;
    ::ll::TypedStorage<8, 24, std::string> name;
    ::ll::TypedStorage<4, 4, int>          id;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkecc731;
    ::ll::UntypedStorage<4, 4>  mUnkf25ebd;
    ::ll::UntypedStorage<8, 32> mUnk7f9932;
    ::ll::UntypedStorage<4, 4>  mUnk916439;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Buffer& operator=(Buffer const&);
    Buffer(Buffer const&);
    Buffer();
#endif // @header-generator platform
};

} // namespace glTF
