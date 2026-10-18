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
#if defined(LL_PLAT_A) // @header-generator platform
    enum ContextType : uint {
        array_elem = 0,
        member     = 1,
        root       = 2,
#else // @header-generator platform
    enum class ContextType : int {
        ArrayElem = 0,
        Member    = 1,
        Root      = 2,
#endif // @header-generator platform
    };

    struct TokenHolder {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::variant<uint, Bedrock::StaticOptimizedString>> mToken;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::variant<uint, ::Bedrock::StaticOptimizedString>> mToken;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        TokenHolder();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI explicit operator std::string_view() const;
#else // @header-generator platform
        MCAPI explicit operator ::std::string_view() const;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };

    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                           mResultCode;
        ::ll::TypedStorage<8, 16, ::cereal::BasicSerializerContext::TokenHolder> mMessage;
        ::ll::TypedStorage<4, 4, uint>                                           mContextIndex;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<cereal::BasicSerializerContext::Context, 8> const*> mStack;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<::cereal::BasicSerializerContext::Context, 8> const*> mStack;
#endif // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> mGeneration;
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                  mCurrentIndex;
    ::ll::UntypedStorage<8, 272>                    mStack;
    ::ll::UntypedStorage<8, 400>                    mLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>  mErrorCodes;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea> mContextArea;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, uint>                                                                     mCurrentIndex;
    ::ll::TypedStorage<8, 272, ::Bedrock::small_vector<::cereal::BasicSerializerContext::Context, 8>>  mStack;
    ::ll::TypedStorage<8, 400, ::Bedrock::small_vector<::cereal::BasicSerializerContext::LogEntry, 8>> mLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                                                     mErrorCodes;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                                                    mContextArea;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BasicSerializerContext();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit BasicSerializerContext(::cereal::ResultCode);
#else // @header-generator platform
    MCAPI ::std::string _getContextString(uint index) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getContextString(uint) const;
#else // @header-generator platform
    MCAPI ::std::vector<::cereal::BasicSerializerContext::Context>
    contextFor(::cereal::BasicSerializerContext::LogEntry const& entry) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::cereal::ContextArea contextArea() const;
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> errors() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ~BasicSerializerContext();
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

} // namespace cereal
