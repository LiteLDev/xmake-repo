#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_20 {

struct BlockEnum {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindBlockRenderLayer(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindBlockRenderLayer(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindChestObstructionRule(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindChestObstructionRule(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindConnectionID(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindConnectionID(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindConnectionType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindConnectionType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindDirection(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindDirection(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindEnum(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindEnum(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindMaterialType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindMaterialType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindMovementType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindMovementType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindPrecipitationBehavior(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindPrecipitationBehavior(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindStickyType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindStickyType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindSupportShape(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindSupportShape(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindTintMethod(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindTintMethod(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string getBlockRenderLayerHelp();

    MCNAPI static std::string getMovementTypeHelp();

    MCNAPI static std::string getPrecipitationBehaviorHelp();

    MCNAPI static std::string getStickyTypeHelp();

    MCNAPI static std::string getSupportShapeHelp();

    MCNAPI static std::string getTintMethodHelp();

    MCNAPI static ::SharedTypes::v1_26_20::MaterialType stringToMaterialType(std::string const&);
#else // @header-generator platform
    MCAPI static ::SharedTypes::v1_26_20::MaterialType stringToMaterialType(::std::string const& type);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::array<const char*, 26> const& MaterialTypeToString();
#else // @header-generator platform
    MCAPI static ::std::array<char const*, 26> const& MaterialTypeToString();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
