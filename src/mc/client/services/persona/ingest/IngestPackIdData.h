#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/UUID.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace persona {

#if defined(LL_PLAT_A) // @header-generator platform
struct IngestPackIdData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::UUID> mPackId;
    ::ll::TypedStorage<1, 1, bool>         isClassicSkin;
    // NOLINTEND
};
#else // @header-generator platform
struct IngestPackIdData {};
#endif // @header-generator platform

} // namespace persona
