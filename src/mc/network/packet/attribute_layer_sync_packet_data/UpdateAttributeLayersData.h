#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/eas/AttributeLayerData.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace EAS { struct AttributeLayerData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#endif // @header-generator platform

namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayersData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<EAS::AttributeLayerData>> mAttributeLayers;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::std::vector<::EAS::AttributeLayerData>> mAttributeLayers;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
