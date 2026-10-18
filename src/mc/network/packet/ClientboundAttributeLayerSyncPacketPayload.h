#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/attribute_layer_sync_packet_data/RemoveEnvironmentAttributesData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateAttributeLayerSettingsData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateAttributeLayersData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateEnvironmentAttributesData.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
struct DimensionType;
namespace EAS { struct AttributeLayerData; }
namespace EAS { struct AttributeLayerSettings; }
namespace EAS { struct EnvironmentAttributeData; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
struct ClientboundAttributeLayerSyncPacketPayload {
public:
    // ClientboundAttributeLayerSyncPacketPayload inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using AttributeLayerSyncData = std::variant<
        AttributeLayerSyncPacketData::UpdateAttributeLayersData,
        AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData,
        AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData,
        AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>;
#else // @header-generator platform
    using AttributeLayerSyncData = ::std::variant<
        ::AttributeLayerSyncPacketData::UpdateAttributeLayersData,
        ::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData,
        ::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData,
        ::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 64, std::variant<AttributeLayerSyncPacketData::UpdateAttributeLayersData, AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData, AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData, AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>> mData;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        72,
        ::std::variant<
            ::AttributeLayerSyncPacketData::UpdateAttributeLayersData,
            ::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData,
            ::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData,
            ::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>>
        mData;
#endif // @header-generator platform
    // NOLINTEND
};
