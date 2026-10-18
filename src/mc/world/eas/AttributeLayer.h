#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform

namespace EAS {

class AttributeLayer {
public:
    // AttributeLayer inner types define
    enum class DirtyFlag : uchar {
        InitLayer           = 0,
        UpdateLayerSettings = 1,
        UpdateAttribute     = 2,
        RemoveAttribute     = 3,
#if defined(LL_PLAT_A) // @header-generator platform
        COUNT               = 4,
#else // @header-generator platform
        Count               = 4,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkd3250a;
    ::ll::UntypedStorage<8, 32> mUnkceb7a5;
    ::ll::UntypedStorage<4, 4>  mUnk2c4138;
    ::ll::UntypedStorage<4, 12> mUnkdd6fbf;
    ::ll::UntypedStorage<8, 64> mUnk69c6ee;
    ::ll::UntypedStorage<8, 24> mUnk6ea0a5;
    ::ll::UntypedStorage<1, 1>  mUnkf57859;
    ::ll::UntypedStorage<8, 24> mUnk114377;
    ::ll::UntypedStorage<8, 24> mUnkefb940;
    ::ll::UntypedStorage<8, 24> mUnkcb9948;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    AttributeLayer& operator=(AttributeLayer const&);
    AttributeLayer(AttributeLayer const&);
#endif // @header-generator platform
    AttributeLayer();
};

} // namespace EAS
