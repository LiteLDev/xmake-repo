#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/texture_shift/ShiftStep.h"
#include "mc/platform/brstd/flat_map.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace TextureShift {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShiftResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> collectionName;
    ::ll::TypedStorage<8, 8, ulong>        bufferIndex;
    ::ll::UntypedStorage<8, 48>            steps;
    // NOLINTEND
};
#else // @header-generator platform
struct ShiftResource {};
#endif // @header-generator platform

} // namespace TextureShift
