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
    ::ll::UntypedStorage<1, 24>                 mFeatureToScatter;
    ::ll::TypedStorage<8, 216, ::ScatterParams> mScatterParams;
    ::ll::TypedStorage<1, 1, bool>              mProjectInputToFloor;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScatterFeature();

    virtual std::optional<BlockPos> place(::IFeature::PlacementContext const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScatterFeature();

    MCNAPI ::SharedTypes::v1_21_10::CoordinateRangeData
    _createCoordinateRangeDataFromExpression(::SharedTypes::Legacy::ExpressionNode const&);

    MCNAPI void addCoordinateEvaluationOrder(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateEvaluationOrder const&
    );

    MCNAPI void addCoordinateRangeDataX(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&
    );

    MCNAPI void addCoordinateRangeDataXExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
    );

    MCNAPI void addCoordinateRangeDataY(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&
    );

    MCNAPI void addCoordinateRangeDataYExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
    );

    MCNAPI void addCoordinateRangeDataZ(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&
    );

    MCNAPI void addCoordinateRangeDataZExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
    );

    MCNAPI void
    addIterations(::SharedTypes::v1_21_10::ScatterParamsData&, ::SharedTypes::Legacy::ExpressionNode const&);

    MCNAPI void
    addScatterChance(::SharedTypes::v1_21_10::ScatterParamsData&, ::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCNAPI void addScatterChanceExpression(
        ::SharedTypes::v1_21_10::ScatterParamsData&,
        ::SharedTypes::Legacy::ExpressionNode const&
    );

    MCNAPI void addScatterParams(::ScatterParams const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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
