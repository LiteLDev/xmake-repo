#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace cereal {

class LogCheckpoint {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<cereal::SerializerContext*>> mParent;
    ::ll::TypedStorage<4, 4, uint>                                        mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    LogCheckpoint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearFromHere(::cereal::ResultCode);

    MCNAPI void clearFromHereAndUntil(::cereal::LogCheckpoint const, ::cereal::ResultCode);

    MCNAPI bool hasErrorsAfterThis(::cereal::ResultCode) const;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::cereal::SerializerContext*>> mParent;
    ::ll::TypedStorage<4, 4, uint>                                          mValue;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
