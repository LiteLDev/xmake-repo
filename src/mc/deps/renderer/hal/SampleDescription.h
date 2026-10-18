#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

#if defined(LL_PLAT_A) // @header-generator platform
class SampleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, long> count;
    ::ll::TypedStorage<8, 8, long> quality;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::mce::SampleDescription const&) const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class SampleDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> count;
    ::ll::TypedStorage<4, 4, int> quality;
    // NOLINTEND
};
#else // @header-generator platform
class SampleDescription {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace mce
