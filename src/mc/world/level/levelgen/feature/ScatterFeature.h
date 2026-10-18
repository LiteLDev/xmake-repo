#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/world/level/ScatterParams.h"
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace SharedTypes::v1_21_10 { struct CoordinateRangeData; }
namespace SharedTypes::v1_21_10 { struct ScatterChanceData; }
namespace SharedTypes::v1_21_10 { struct ScatterParamsData; }
// clang-format on

class ScatterFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<1, 24>                 mFeatureToScatter;
    ::ll::TypedStorage<8, 216, ::ScatterParams> mScatterParams;
    ::ll::TypedStorage<1, 1, bool>              mProjectInputToFloor;
#else // @header-generator platform
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeatureToScatter;
    ::ll::TypedStorage<8, 216, ::ScatterParams>      mScatterParams;
    ::ll::TypedStorage<1, 1, bool>                   mProjectInputToFloor;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScatterFeature();
#else // @header-generator platform
    virtual ~ScatterFeature() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScatterFeature();

    MCNAPI ::SharedTypes::v1_21_10::CoordinateRangeData
    _createCoordinateRangeDataFromExpression(::SharedTypes::Legacy::ExpressionNode const&);

    MCNAPI void addCoordinateEvaluationOrder(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateEvaluationOrder const&
#else // @header-generator platform
    MCAPI void addCoordinateEvaluationOrder(
        ::SharedTypes::v1_21_10::ScatterParamsData&               scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateEvaluationOrder const& coordinateEvaluationOrder
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCoordinateRangeDataX(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&
#else // @header-generator platform
    MCAPI void addCoordinateRangeDataX(
        ::SharedTypes::v1_21_10::ScatterParamsData&         scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCoordinateRangeDataXExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
#else // @header-generator platform
    MCAPI void addCoordinateRangeDataXExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& expressionNode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCoordinateRangeDataY(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&
#else // @header-generator platform
    MCAPI void addCoordinateRangeDataY(
        ::SharedTypes::v1_21_10::ScatterParamsData&         scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCoordinateRangeDataYExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
#else // @header-generator platform
    MCAPI void addCoordinateRangeDataYExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& expressionNode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCoordinateRangeDataZ(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&
#else // @header-generator platform
    MCAPI void addCoordinateRangeDataZ(
        ::SharedTypes::v1_21_10::ScatterParamsData&         scatterParamsData,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addCoordinateRangeDataZExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
#else // @header-generator platform
    MCAPI void addCoordinateRangeDataZExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& expressionNode
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    addIterations(::SharedTypes::v1_21_10::ScatterParamsData&, ::SharedTypes::Legacy::ExpressionNode const&);

    MCNAPI void
    addScatterChance(::SharedTypes::v1_21_10::ScatterParamsData&, ::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCNAPI void addScatterChanceExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
#else // @header-generator platform
    MCAPI void addIterations(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& iterations
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addScatterParams(::ScatterParams const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI void addScatterChance(
        ::SharedTypes::v1_21_10::ScatterParamsData&       scatterParamsData,
        ::SharedTypes::v1_21_10::ScatterChanceData const& scatterChance
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
#else // @header-generator platform
    MCAPI void addScatterChanceExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&  scatterParamsData,
        ::SharedTypes::Legacy::ExpressionNode const& scatterChance
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void addScatterParams(::ScatterParams const& scatterParams);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<BlockPos> $place(::IFeature::PlacementContext const&) const;
#else // @header-generator platform
    MCAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
