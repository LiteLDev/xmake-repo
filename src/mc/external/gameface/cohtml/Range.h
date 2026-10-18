#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

#if defined(LL_PLAT_A) // @header-generator platform
struct Range {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> Start;
    ::ll::TypedStorage<4, 4, uint> End;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct Range {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk837a74;
    ::ll::UntypedStorage<4, 4> mUnk30cf0d;
    // NOLINTEND

public:
    // prevent constructor by default
    Range& operator=(Range const&);
    Range(Range const&);
    Range();
};
#else // @header-generator platform
struct Range {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml::TextInput
