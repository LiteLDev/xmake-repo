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
#if defined(LL_PLAT_A) // @header-generator platform
    struct CoordinateRange;
#else // @header-generator platform
#endif // @header-generator platform
    struct ChanceInformation;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct CoordinateRange;
#endif // @header-generator platform
    class ScatteredPositions;
    // clang-format on

    // ScatterParams inner types define
    enum class NeedsMolang : int {
        No  = 0,
        Yes = 1,
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    struct ChanceInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ExpressionNode> mChancePercent;
        ::ll::TypedStorage<4, 4, int>               mNumerator;
        ::ll::TypedStorage<4, 4, int>               mDenominator;
        // NOLINTEND
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, std::optional<IntRange>>                        mFastPathRange;
#else // @header-generator platform
        ::ll::TypedStorage<4, 12, ::std::optional<::IntRange>>                    mFastPathRange;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        CoordinateRange& operator=(CoordinateRange const&);
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI int _eval(int, int, uint&, ::Random&) const;
#else // @header-generator platform
        MCNAPI int _eval(int evaluatedMin, int evaluatedMax, uint& stepIndex, ::Random& random) const;
#endif // @header-generator platform

        MCNAPI ~CoordinateRange();
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        ScatteredPositions(ScatteredPositions const&);
#endif // @header-generator platform
        ScatteredPositions();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool empty();

        MCNAPI ::BlockPos nextPos();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScatterParams();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScatterParams(::ScatterParams const&);
#else // @header-generator platform
    MCAPI ScatterParams(::ScatterParams&&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _fillCoordinateRangeFromData(
        std::string const&,
        ::ScatterParams::CoordinateRange&,
        ::SharedTypes::v1_21_10::CoordinateRangeData const&,
        ::MolangVersion const&,
        ::LogArea
#else // @header-generator platform
    MCAPI ScatterParams(::ScatterParams const&);

    MCAPI void fillFromData(
        ::SharedTypes::v1_21_10::ScatterParamsData const& data,
        ::MolangVersion                                   molangVersion,
        ::LogArea                                         logArea
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void fillFromData(::SharedTypes::v1_21_10::ScatterParamsData const&, ::MolangVersion, ::LogArea);
#else // @header-generator platform
    MCAPI void readSerializedScatterParamData(::BiomeScatterParamData const& data, ::BiomeStringList const& stringList);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void readSerializedScatterParamData(::BiomeScatterParamData const&, ::BiomeStringList const&);
#else // @header-generator platform
    MCAPI ::ScatterParams::ScatteredPositions
    scatter(::RenderParams& molangParams, ::BlockPos const& pos, ::Random& random) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::ScatterParams::ScatteredPositions scatter(::RenderParams&, ::BlockPos const&, ::Random&) const;
#else // @header-generator platform
    MCAPI void serializeScatterParamData(::BiomeScatterParamData& data, ::BiomeStringList& stringList) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void serializeScatterParamData(::BiomeScatterParamData&, ::BiomeStringList&) const;

    MCNAPI ~ScatterParams();
#else // @header-generator platform
    MCAPI ~ScatterParams();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void _parseExpressionNodeFloat(::ExpressionOp, std::string const&, ::ExpressionNode&, float);
#else // @header-generator platform
    MCAPI static void _fillCoordinateRangeFromData(
        ::std::string const&                                coordinateName,
        ::ScatterParams::CoordinateRange&                   coordinateRange,
        ::SharedTypes::v1_21_10::CoordinateRangeData const& coordinateRangeData,
        ::MolangVersion const&                              molangVersion,
        ::LogArea                                           logArea
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initMolangParams(::RenderParams&, ::BlockPos const&, ::Random&);
#else // @header-generator platform
    MCAPI static void _parseExpressionNodeFloat(
        ::ExpressionOp       op,
        ::std::string const& expression,
        ::ExpressionNode&    node,
        float                defaultValue
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void initScatterParamIndices();
#else // @header-generator platform
    MCAPI static void initMolangParams(::RenderParams& molangParams, ::BlockPos const& pos, ::Random& random);

    MCAPI static void initScatterParamIndices();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScatterParams const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScatterParams&&);

    MCAPI void* $ctor(::ScatterParams const&);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
