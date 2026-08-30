#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/deps/shared_types/legacy/DefinitionTrigger.h"

namespace SharedTypes::v1_20_50 {

struct DiggerItemComponent {
public:
    // DiggerItemComponent inner types declare
    // clang-format off
    struct BlockInfo;
    // clang-format on

    // DiggerItemComponent inner types define
    struct BlockInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::BlockDescriptor>   filter;
        ::ll::TypedStorage<4, 4, int>                                       destroySpeed;
        ::ll::TypedStorage<8, 72, ::SharedTypes::Legacy::DefinitionTrigger> onDigDeprecated;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<SharedTypes::v1_20_50::DiggerItemComponent::BlockInfo>> mDestroySpeeds;
    ::ll::TypedStorage<1, 1, bool>                                                                mUseEfficiency;
    ::ll::TypedStorage<8, 80, std::optional<SharedTypes::Legacy::DefinitionTrigger>>              mOnDigDeprecated;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_50
