#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_21_10/scatter_params/RandomDistributionType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct CoordinateRangeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType>     mDistribution;
    ::ll::TypedStorage<8, 48, std::optional<SharedTypes::Legacy::ExpressionNode>> mMinOrSingleValue;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                  mStepSize;
    ::ll::TypedStorage<4, 8, std::optional<int>>                                  mGridOffset;
    ::ll::TypedStorage<8, 80, std::array<SharedTypes::Legacy::ExpressionNode, 2>> mExtent;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_21_10::RandomDistributionType>         mDistribution;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>> mMinOrSingleValue;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mStepSize;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                                    mGridOffset;
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mExtent;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CoordinateRangeData& operator=(CoordinateRangeData const&);
    CoordinateRangeData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI CoordinateRangeData(::SharedTypes::v1_21_10::CoordinateRangeData const&);
#else // @header-generator platform
    MCAPI CoordinateRangeData(::SharedTypes::v1_21_10::CoordinateRangeData const&);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_10::CoordinateRangeData& operator=(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCNAPI ~CoordinateRangeData();
#else // @header-generator platform
    MCAPI ~CoordinateRangeData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::CoordinateRangeData const&);
#else // @header-generator platform
    MCAPI void* $ctor(::SharedTypes::v1_21_10::CoordinateRangeData const&);
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

} // namespace SharedTypes::v1_21_10
