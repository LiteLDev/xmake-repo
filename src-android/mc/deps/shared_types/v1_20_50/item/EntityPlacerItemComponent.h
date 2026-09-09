#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_20_50 {

struct EntityPlacerItemComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                                  mEntity;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mDispenseOn;
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::Legacy::BlockDescriptor>> mUseOn;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
