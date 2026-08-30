#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/AssetType.h"
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_60::Spawn {

struct PermuteType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mWeight;
    ::ll::TypedStorage<4, 4, int> mMinGuaranteed;
    ::ll::UntypedStorage<8, 24>   mEntityType;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn
