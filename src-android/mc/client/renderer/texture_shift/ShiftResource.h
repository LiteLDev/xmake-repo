#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/texture_shift/ShiftStep.h"
#include "mc/platform/brstd/flat_map.h"

namespace TextureShift {

struct ShiftResource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> collectionName;
    ::ll::TypedStorage<8, 8, ulong>        bufferIndex;
    ::ll::UntypedStorage<8, 48>            steps;
    // NOLINTEND
};

} // namespace TextureShift
