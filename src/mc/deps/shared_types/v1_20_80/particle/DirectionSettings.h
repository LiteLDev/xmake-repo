#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace SharedTypes::v1_20_80 {

struct DirectionSettings {
public:
    // DirectionSettings inner types define
    enum class Mode : int {
        UseVelocity = 0,
        Custom      = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_20_80::DirectionSettings::Mode>     mMode;
    ::ll::TypedStorage<8, 120, std::array<SharedTypes::Legacy::ExpressionNode, 3>> mCustomDirectionExpr;
    ::ll::TypedStorage<4, 4, float>                                                mMinSpeedThreshold;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectionSettings& operator=(DirectionSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DirectionSettings();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_20_80::DirectionSettings::Mode>         mMode;
    ::ll::TypedStorage<8, 144, ::std::array<::SharedTypes::Legacy::ExpressionNode, 3>> mCustomDirectionExpr;
    ::ll::TypedStorage<4, 4, float>                                                    mMinSpeedThreshold;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
