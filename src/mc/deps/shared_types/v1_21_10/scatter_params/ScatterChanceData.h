#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ScatterChanceData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                 mNumerator;
    ::ll::TypedStorage<4, 4, int>                                                 mDenominator;
    ::ll::TypedStorage<8, 48, std::optional<SharedTypes::Legacy::ExpressionNode>> mChancePercent;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                                                     mNumerator;
    ::ll::TypedStorage<4, 4, int>                                                     mDenominator;
    ::ll::TypedStorage<8, 56, ::std::optional<::SharedTypes::Legacy::ExpressionNode>> mChancePercent;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SharedTypes::v1_21_10::ScatterChanceData& operator=(::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCNAPI ~ScatterChanceData();
#else // @header-generator platform
    MCAPI ~ScatterChanceData();
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
