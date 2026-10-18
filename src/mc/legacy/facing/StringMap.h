#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Facing {

class StringMap {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 144, std::array<std::pair<std::string_view, uchar>, 6>> mArray;
#else // @header-generator platform
    ::ll::TypedStorage<8, 144, ::std::array<::std::pair<::std::string_view, uchar>, 6>> mArray;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<uchar> find(std::string_view const) const;
#else // @header-generator platform
    MCNAPI ::std::optional<uchar> find(::std::string_view str) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Facing
