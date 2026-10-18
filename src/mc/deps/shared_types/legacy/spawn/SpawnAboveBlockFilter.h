#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::Legacy::Spawn {

struct SpawnAboveBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 80, std::variant<std::vector<SharedTypes::Legacy::BlockDescriptor>, SharedTypes::Legacy::BlockDescriptor>> mBlocks;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        88,
        ::std::variant<::std::vector<::SharedTypes::Legacy::BlockDescriptor>, ::SharedTypes::Legacy::BlockDescriptor>>
                                  mBlocks;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int> mDistance;
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
