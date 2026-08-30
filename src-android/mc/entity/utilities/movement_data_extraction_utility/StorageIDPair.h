#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
namespace MovementDataExtractionUtility { struct StorageStorage; }
// clang-format on

namespace MovementDataExtractionUtility {

struct StorageIDPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::MovementDataExtractionUtility::StorageStorage&> sourceStorage;
    ::ll::TypedStorage<8, 8, ::MovementDataExtractionUtility::StorageStorage&> targetStorage;
    ::ll::TypedStorage<4, 4, ::EntityId>                                       sourceId;
    ::ll::TypedStorage<4, 4, ::EntityId>                                       targetId;
    // NOLINTEND

public:
    // prevent constructor by default
    StorageIDPair& operator=(StorageIDPair const&);
    StorageIDPair(StorageIDPair const&);
    StorageIDPair();
};

} // namespace MovementDataExtractionUtility
