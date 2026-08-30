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
    ::ll::TypedStorage<4, 4, int>                                                 mNumerator;
    ::ll::TypedStorage<4, 4, int>                                                 mDenominator;
    ::ll::TypedStorage<8, 48, std::optional<SharedTypes::Legacy::ExpressionNode>> mChancePercent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_21_10::ScatterChanceData& operator=(::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCNAPI ~ScatterChanceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
