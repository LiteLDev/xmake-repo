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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mGeneration;
    ::ll::TypedStorage<4, 4, uint> mLastError;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearGenerations(uint const, uint const, ::cereal::ResultCode);

    MCNAPI ::cereal::LogCheckpoint getLogCheckpoint();

    MCNAPI bool hasErrors() const;

    MCNAPI void log(::cereal::ResultCode, ::Bedrock::StaticOptimizedString);

    MCNAPI void popContext();

    MCNAPI ::cereal::SerializerContext& pushContext(::Bedrock::StaticOptimizedString);

    MCNAPI ::cereal::SerializerContext& pushContext(uint);
    // NOLINTEND
};

} // namespace cereal
