#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/external/gameface/renoir/IStreamReader.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace cohtml {

#if defined(LL_PLAT_A) // @header-generator platform
class ISyncStreamReader {};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class ISyncStreamReader : public ::renoir::IStreamReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISyncStreamReader() /*override*/ = default;
    // NOLINTEND
};
#else // @header-generator platform
class ISyncStreamReader {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace cohtml
