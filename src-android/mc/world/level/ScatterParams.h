#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/CoordinateEvaluationOrder.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/IntRange.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/util/molang/ExpressionOp.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Random;
class RenderParams;
struct BiomeScatterParamData;
struct BiomeStringList;
namespace SharedTypes::v1_21_10 { struct CoordinateRangeData; }
namespace SharedTypes::v1_21_10 { struct ScatterParamsData; }
// clang-format on

class ScatterParams {
public:
    // ScatterParams inner types declare
    // clang-format off
    struct CoordinateRange;
    struct ChanceInformation;
    class ScatteredPositions;
    // clang-format on

    // ScatterParams inner types define
    enum class NeedsMolang : int {
        No  = 0,
        Yes = 1,
    };

    struct CoordinateRange {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                               mMinOrSingleValue;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                               mMax;
        ::ll::TypedStorage<4, 4, uint>                                            mGridStepSize;
        ::ll::TypedStorage<4, 4, uint>                                            mGridOffset;
        ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType> mDistribution;
        ::ll::TypedStorage<4, 12, std::optional<IntRange>>                        mFastPathRange;
        // NOLINTEND

    public:
        // prevent constructor by default
        CoordinateRange& operator=(CoordinateRange const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int _eval(int, int, uint&, ::Random&) const;

        MCNAPI ~CoordinateRange();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ChanceInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mChancePercent;
        ::ll::TypedStorage<4, 4, int>               mNumerator;
        ::ll::TypedStorage<4, 4, int>               mDenominator;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChanceInformation& operator=(ChanceInformation const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ChanceInformation();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class ScatteredPositions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RenderParams&>        mMolangParams;
        ::ll::TypedStorage<8, 8, ::Random&>              mRandom;
        ::ll::TypedStorage<8, 8, ::ScatterParams const&> mScatterParams;
        ::ll::TypedStorage<4, 12, ::BlockPos>            mOrigin;
        ::ll::TypedStorage<4, 4, uint>                   mIterations;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScatteredPositions& operator=(ScatteredPositions const&);
        ScatteredPositions();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool empty();

        MCNAPI ::BlockPos nextPos();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::ScatterParams::CoordinateRange[3]>              mCoordinateRanges;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder> mEvalOrder;
    ::ll::TypedStorage<8, 24, ::ScatterParams::ChanceInformation>                mScatterChance;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                  mIterations;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatterParams& operator=(ScatterParams const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScatterParams(::ScatterParams const&);

    MCNAPI void _fillCoordinateRangeFromData(
        std::string const&,
        ::ScatterParams::CoordinateRange&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&,
        ::MolangVersion const&,
        ::LogArea
    );

    MCNAPI void fillFromData(::SharedTypes::v1_21_10::ScatterParamsData const&, ::MolangVersion, ::LogArea);

    MCNAPI void readSerializedScatterParamData(::BiomeScatterParamData const&, ::BiomeStringList const&);

    MCNAPI ::ScatterParams::ScatteredPositions scatter(::RenderParams&, ::BlockPos const&, ::Random&) const;

    MCNAPI void serializeScatterParamData(::BiomeScatterParamData&, ::BiomeStringList&) const;

    MCNAPI ~ScatterParams();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _parseExpressionNodeFloat(::ExpressionOp, std::string const&, ::ExpressionNode&, float);

    MCNAPI static void initMolangParams(::RenderParams&, ::BlockPos const&, ::Random&);

    MCNAPI static void initScatterParamIndices();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScatterParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
