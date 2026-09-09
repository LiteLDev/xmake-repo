#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

namespace AttributeLayerSyncPacketData {

struct RemoveEnvironmentAttributesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>              mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>           mLayerDimensionId;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAttributes;
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
