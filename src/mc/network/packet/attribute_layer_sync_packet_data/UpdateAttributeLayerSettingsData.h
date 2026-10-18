#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/AttributeLayerSettings.h"
#include "mc/world/level/dimension/DimensionType.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayerSettingsData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mLayerName;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                 mLayerName;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::DimensionType>                mLayerDimensionId;
    ::ll::TypedStorage<4, 12, ::EAS::AttributeLayerSettings> mAttributeLayerSettings;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
