#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

class ByChar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8ee993;
    // NOLINTEND

public:
    // prevent constructor by default
    ByChar& operator=(ByChar const&);
    ByChar(ByChar const&);
    ByChar();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string_view Find(::std::string_view text, uint64 pos) const;
    // NOLINTEND
};

} // namespace absl
#endif // @header-generator platform
