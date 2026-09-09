#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/AttributeLayerData.h"

namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayersData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<EAS::AttributeLayerData>> mAttributeLayers;
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
