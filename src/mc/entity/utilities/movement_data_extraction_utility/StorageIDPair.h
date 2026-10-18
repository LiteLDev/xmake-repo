#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
namespace MovementDataExtractionUtility { struct StorageStorage; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace MovementDataExtractionUtility {

struct StorageIDPair {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::MovementDataExtractionUtility::StorageStorage&> sourceStorage;
    ::ll::TypedStorage<8, 8, ::MovementDataExtractionUtility::StorageStorage&> targetStorage;
    ::ll::TypedStorage<4, 4, ::EntityId>                                       sourceId;
    ::ll::TypedStorage<4, 4, ::EntityId>                                       targetId;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8> mUnk58532b;
    ::ll::UntypedStorage<8, 8> mUnk52e9d9;
    ::ll::UntypedStorage<4, 4> mUnk284355;
    ::ll::UntypedStorage<4, 4> mUnk693714;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    StorageIDPair& operator=(StorageIDPair const&);
    StorageIDPair(StorageIDPair const&);
    StorageIDPair();
};

} // namespace MovementDataExtractionUtility
