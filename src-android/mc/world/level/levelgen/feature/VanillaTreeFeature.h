#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITreeCanopyWrapper;
class ITreeRootWrapper;
class ITreeTrunkWrapper;
namespace FeatureLoading { struct FeatureRootParseContext; }
namespace FeatureLoading { template<typename T0> class ConcreteFeatureHolder; }
namespace JsonUtil { class EmptyClass; }
namespace JsonUtil { template<typename T0, typename T1> class JsonParseState; }
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaTreeFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _buildVanillaCanopyVariants(
        ::JsonUtil::JsonSchemaObjectNode<
            JsonUtil::JsonParseState<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>,
            FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>>&,
        std::function<ITreeCanopyWrapper&(FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>*)>
    );

    MCNAPI static void _buildVanillaTrunkVariants(
        ::JsonUtil::JsonSchemaObjectNode<
            JsonUtil::JsonParseState<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>,
            FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>>&,
        std::function<ITreeTrunkWrapper&(FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>*)>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
