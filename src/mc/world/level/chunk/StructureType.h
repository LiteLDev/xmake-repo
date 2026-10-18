#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StructureType {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> type;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> type;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    StructureType& operator=(StructureType const&);
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace br
