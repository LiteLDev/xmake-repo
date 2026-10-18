#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/ISyncStreamReader.h"
#include "mc/external/gameface/cohtml/ISyncStreamReader.h"

namespace Gameface {

class SyncCachedStreamReader : public ::Gameface::ISyncStreamReader, public ::cohtml::ISyncStreamReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mBuffer;
    // NOLINTEND
};

} // namespace Gameface
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
