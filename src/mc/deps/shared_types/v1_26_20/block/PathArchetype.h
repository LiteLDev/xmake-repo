#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct PathArchetype {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor> mBlockToTillInto;
    ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor> mBaseBlock;
#else // @header-generator platform
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> mBlockToTillInto;
    ::ll::TypedStorage<8, 80, ::SharedTypes::Legacy::BlockDescriptor> mBaseBlock;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
