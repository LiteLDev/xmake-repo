#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
namespace cereal { class LogCheckpoint; }
// clang-format on

namespace cereal {

class SerializerContext : public ::cereal::BasicSerializerContext {
public:
    // SerializerContext inner types declare
    // clang-format off
    struct ScopedPop;
    // clang-format on

    // SerializerContext inner types define
    struct ScopedPop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cereal::SerializerContext*> mContext;
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        ScopedPop();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ScopedPop();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGeneration;
    ::ll::TypedStorage<4, 4, uint> mLastError;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    SerializerContext();

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void clearGenerations(uint const, uint const, ::cereal::ResultCode);
#else // @header-generator platform
    MCAPI void clearGenerations(uint from, uint to, ::cereal::ResultCode filter);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::LogCheckpoint getLogCheckpoint();
#else // @header-generator platform
    MCAPI ::cereal::LogCheckpoint getLogCheckpoint();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasErrors() const;
#else // @header-generator platform
    MCAPI void log(::cereal::ResultCode res, ::Bedrock::StaticOptimizedString msg);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void log(::cereal::ResultCode, ::Bedrock::StaticOptimizedString);
#else // @header-generator platform
    MCAPI void popContext();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void popContext();
#else // @header-generator platform
    MCAPI ::cereal::SerializerContext& pushContext(uint containerIndex);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::SerializerContext& pushContext(::Bedrock::StaticOptimizedString);

    MCNAPI ::cereal::SerializerContext& pushContext(uint);
#else // @header-generator platform
    MCAPI ::cereal::SerializerContext& pushContext(::Bedrock::StaticOptimizedString propertyName);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace cereal
