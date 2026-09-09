#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/attribute_layer_sync_packet_data/RemoveEnvironmentAttributesData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateAttributeLayerSettingsData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateAttributeLayersData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateEnvironmentAttributesData.h"

// auto generated forward declare list
// clang-format off
struct DimensionType;
namespace EAS { struct AttributeLayerData; }
namespace EAS { struct AttributeLayerSettings; }
namespace EAS { struct EnvironmentAttributeData; }
// clang-format on

struct ClientboundAttributeLayerSyncPacketPayload {
public:
    // ClientboundAttributeLayerSyncPacketPayload inner types define
    using AttributeLayerSyncData = std::variant<
        AttributeLayerSyncPacketData::UpdateAttributeLayersData,
        AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData,
        AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData,
        AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 64, std::variant<AttributeLayerSyncPacketData::UpdateAttributeLayersData, AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData, AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData, AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>> mData;
    // clang-format on
    // NOLINTEND
};
