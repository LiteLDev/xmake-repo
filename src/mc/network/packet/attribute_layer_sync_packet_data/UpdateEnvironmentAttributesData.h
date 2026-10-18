#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/attributes/EnvironmentAttributeData.h"
#include "mc/world/level/dimension/DimensionType.h"

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace EAS { struct EnvironmentAttributeData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

#endif // @header-generator platform
namespace AttributeLayerSyncPacketData {

struct UpdateEnvironmentAttributesData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                                mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                             mLayerDimensionId;
    ::ll::TypedStorage<8, 24, std::vector<EAS::EnvironmentAttributeData>> mAttributes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                                  mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                 mLayerDimensionId;
    ::ll::TypedStorage<8, 24, ::std::vector<::EAS::EnvironmentAttributeData>> mAttributes;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
