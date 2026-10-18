#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct View {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, void const* const> mData;
    ::ll::TypedStorage<8, 8, ulong const>       mSize;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk5e087c;
    ::ll::UntypedStorage<8, 8> mUnk18708e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    View& operator=(View const&);
    View(View const&);
    View();
#endif // @header-generator platform
};

} // namespace NetherNet
