#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/util/json_util/JsonParseState.h"
#endif // @header-generator platform
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/feature/feature_loading/ConcreteFeatureHolder.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class ITreeCanopyWrapper;
#if defined(LL_PLAT_A) // @header-generator platform
class ITreeRootWrapper;
#else // @header-generator platform
#endif // @header-generator platform
class ITreeTrunkWrapper;
namespace FeatureLoading { struct FeatureRootParseContext; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace FeatureLoading { template<typename T0> class ConcreteFeatureHolder; }
#else // @header-generator platform
#endif // @header-generator platform
namespace JsonUtil { class EmptyClass; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace JsonUtil { template<typename T0, typename T1> class JsonParseState; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // size:ok
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~VanillaTreeFeature();
#else // @header-generator platform
    virtual ~VanillaTreeFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _buildVanillaCanopyVariants(
#else // @header-generator platform
    MCAPI static void _buildVanillaCanopyVariants(
#endif // @header-generator platform
        ::JsonUtil::JsonSchemaObjectNode<
#if defined(LL_PLAT_A) // @header-generator platform
            JsonUtil::JsonParseState<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>,
            FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>>&,
        std::function<ITreeCanopyWrapper&(FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>*)>
#else // @header-generator platform
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
            ::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>>& schemaNode,
        ::std::function<::ITreeCanopyWrapper&(::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>*)>
            canopyAccessor
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _buildVanillaTrunkVariants(
#else // @header-generator platform
    MCAPI static void _buildVanillaTrunkVariants(
#endif // @header-generator platform
        ::JsonUtil::JsonSchemaObjectNode<
#if defined(LL_PLAT_A) // @header-generator platform
            JsonUtil::JsonParseState<JsonUtil::EmptyClass, FeatureLoading::FeatureRootParseContext>,
            FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>>&,
        std::function<ITreeTrunkWrapper&(FeatureLoading::ConcreteFeatureHolder<VanillaTreeFeature>*)>
#else // @header-generator platform
            ::JsonUtil::JsonParseState<::JsonUtil::EmptyClass, ::FeatureLoading::FeatureRootParseContext>,
            ::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>>& schemaNode,
        ::std::function<::ITreeTrunkWrapper&(::FeatureLoading::ConcreteFeatureHolder<::VanillaTreeFeature>*)>
            trunkAccessor
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
