#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/string/StaticOptimizedString.h"

namespace cereal {

class BasicSerializerContext {
public:
    // BasicSerializerContext inner types declare
    // clang-format off
    struct TokenHolder;
    struct Context;
    struct LogEntry;
    // clang-format on

    // BasicSerializerContext inner types define
    enum ContextType : uint {
        array_elem = 0,
        member     = 1,
        root       = 2,
    };

    struct TokenHolder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::variant<uint, Bedrock::StaticOptimizedString>> mToken;
        // NOLINTEND

    public:
        // prevent constructor by default
        TokenHolder();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit operator std::string_view() const;
        // NOLINTEND
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::cereal::BasicSerializerContext::ContextType>  mType;
        ::ll::TypedStorage<8, 16, ::cereal::BasicSerializerContext::TokenHolder> mToken;
        ::ll::TypedStorage<4, 4, uint>                                           mPrevIndex;
        // NOLINTEND

    public:
        // prevent constructor by default
        Context();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Context(::cereal::BasicSerializerContext::Context const&);

        MCNAPI ~Context();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::cereal::BasicSerializerContext::Context const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                           mResultCode;
        ::ll::TypedStorage<8, 16, ::cereal::BasicSerializerContext::TokenHolder> mMessage;
        ::ll::TypedStorage<4, 4, uint>                                           mContextIndex;
        ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<cereal::BasicSerializerContext::Context, 8> const*> mStack;
        ::ll::TypedStorage<4, 4, uint> mGeneration;
        // NOLINTEND

    public:
        // prevent constructor by default
        LogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::cereal::BasicSerializerContext::LogEntry& operator=(::cereal::BasicSerializerContext::LogEntry&&);

        MCNAPI ~LogEntry();
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
    ::ll::TypedStorage<4, 4, uint>                  mCurrentIndex;
    ::ll::UntypedStorage<8, 272>                    mStack;
    ::ll::UntypedStorage<8, 400>                    mLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>  mErrorCodes;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea> mContextArea;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicSerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BasicSerializerContext(::cereal::ResultCode);

    MCNAPI std::string _getContextString(uint) const;

    MCNAPI ::cereal::ContextArea contextArea() const;

    MCNAPI void contextArea(::cereal::ContextArea);

    MCNAPI std::vector<cereal::BasicSerializerContext::Context>
           contextFor(::cereal::BasicSerializerContext::LogEntry const&) const;

    MCNAPI std::pair<cereal::BasicSerializerContext::ContextType, std::string_view> currentContext() const;

    MCNAPI std::string currentContextString() const;

    MCNAPI ::cereal::ResultCode errorCodes() const;

    MCNAPI std::vector<std::string> errors() const;

    MCNAPI ::gsl::span<const cereal::BasicSerializerContext::LogEntry> logEntries() const;

    MCNAPI ~BasicSerializerContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ResultCode);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
