#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cohtml { class ISyncStreamReader; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Gameface {

#if defined(LL_PLAT_A) // @header-generator platform
class ISyncStreamReader {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ISyncStreamReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISyncStreamReader() = default;

    virtual ::cohtml::ISyncStreamReader* getCohtmlReader() = 0;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class ISyncStreamReader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Gameface
