#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/eas/AttributeHandle.h"
#include "mc/world/eas/AttributeLayerSettings.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class PacketSender;
class Vec3;
namespace AttributeLayerSyncPacketData { struct RemoveEnvironmentAttributesData; }
namespace AttributeLayerSyncPacketData { struct UpdateAttributeLayerSettingsData; }
namespace AttributeLayerSyncPacketData { struct UpdateEnvironmentAttributesData; }
namespace EAS { class AttributeRegistry; }
namespace EAS { class IAttributeWrapper; }
namespace EAS { struct AttributeLayerData; }
namespace EAS { struct EnvironmentAttributeData; }
// clang-format on

namespace EAS {

class AttributeLayer {
public:
    // AttributeLayer inner types define
    enum class DirtyFlag : uchar {
        InitLayer           = 0,
        UpdateLayerSettings = 1,
        UpdateAttribute     = 2,
        RemoveAttribute     = 3,
        COUNT               = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mNoiseName;
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionId;
    ::ll::TypedStorage<4, 12, ::EAS::AttributeLayerSettings> mLayerSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<EAS::AttributeHandle, std::unique_ptr<EAS::IAttributeWrapper>>> mAttributes;
    ::ll::UntypedStorage<8, 24> mAttributeRegistry;
    ::ll::UntypedStorage<1, 1> mDirty;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAttributesToUpdate;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mAttributesToRemove;
    ::ll::UntypedStorage<8, 24> mWeightProcessor;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    AttributeLayer();
};

} // namespace EAS
