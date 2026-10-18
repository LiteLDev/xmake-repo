#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/eas/EASManager.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ClientboundAttributeLayerSyncPacket;
class DimensionManager;
#else // @header-generator platform
#endif // @header-generator platform
class PacketSender;
#if defined(LL_PLAT_A) // @header-generator platform
struct DimensionType;
namespace AttributeLayerSyncPacketData { struct RemoveEnvironmentAttributesData; }
namespace AttributeLayerSyncPacketData { struct UpdateAttributeLayerSettingsData; }
namespace AttributeLayerSyncPacketData { struct UpdateAttributeLayersData; }
namespace AttributeLayerSyncPacketData { struct UpdateEnvironmentAttributesData; }
namespace EAS { class ClientAttributeLayer; }
namespace EAS { struct AttributeLayerData; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

namespace EAS {

class ClientEASManager : public ::EAS::EASManager {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    ClientEASManager();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual void tick(::PacketSender&);
#else // @header-generator platform
    virtual void tick(::PacketSender&) /*override*/;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace EAS
