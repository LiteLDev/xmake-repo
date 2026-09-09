#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/eas/EASManager.h"

// auto generated forward declare list
// clang-format off
class ClientboundAttributeLayerSyncPacket;
class DimensionManager;
class PacketSender;
struct DimensionType;
namespace AttributeLayerSyncPacketData { struct RemoveEnvironmentAttributesData; }
namespace AttributeLayerSyncPacketData { struct UpdateAttributeLayerSettingsData; }
namespace AttributeLayerSyncPacketData { struct UpdateAttributeLayersData; }
namespace AttributeLayerSyncPacketData { struct UpdateEnvironmentAttributesData; }
namespace EAS { class ClientAttributeLayer; }
namespace EAS { struct AttributeLayerData; }
// clang-format on

namespace EAS {

class ClientEASManager : public ::EAS::EASManager {
public:
    // prevent constructor by default
    ClientEASManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::PacketSender&);
    // NOLINTEND
};

} // namespace EAS
