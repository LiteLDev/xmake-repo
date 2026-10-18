#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"

namespace BlockDescriptorSerializer {

struct StatesProxy {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mBlockStates;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor::State>> mBlockStates;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace BlockDescriptorSerializer
