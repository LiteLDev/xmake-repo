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
    MCNAPI static void bindBlockRenderLayer(::cereal::ReflectionCtx&);

    MCNAPI static void bindChestObstructionRule(::cereal::ReflectionCtx&);

    MCNAPI static void bindConnectionID(::cereal::ReflectionCtx&);

    MCNAPI static void bindConnectionType(::cereal::ReflectionCtx&);

    MCNAPI static void bindDirection(::cereal::ReflectionCtx&);

    MCNAPI static void bindEnum(::cereal::ReflectionCtx&);

    MCNAPI static void bindMaterialType(::cereal::ReflectionCtx&);

    MCNAPI static void bindMovementType(::cereal::ReflectionCtx&);

    MCNAPI static void bindPrecipitationBehavior(::cereal::ReflectionCtx&);

    MCNAPI static void bindStickyType(::cereal::ReflectionCtx&);

    MCNAPI static void bindSupportShape(::cereal::ReflectionCtx&);

    MCNAPI static void bindTintMethod(::cereal::ReflectionCtx&);

    MCNAPI static std::string getBlockRenderLayerHelp();

    MCNAPI static std::string getMovementTypeHelp();

    MCNAPI static std::string getPrecipitationBehaviorHelp();

    MCNAPI static std::string getStickyTypeHelp();

    MCNAPI static std::string getSupportShapeHelp();

    MCNAPI static std::string getTintMethodHelp();

    MCNAPI static ::SharedTypes::v1_26_20::MaterialType stringToMaterialType(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<const char*, 26> const& MaterialTypeToString();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20
