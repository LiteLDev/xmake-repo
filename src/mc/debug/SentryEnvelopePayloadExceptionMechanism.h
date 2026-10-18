#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadExceptionMechanism {
public:
    // SentryEnvelopePayloadExceptionMechanism inner types define
    enum class Type : int {
        Unknown                   = 0,
        UnhandledException        = 1,
        UnhandledPromiseRejection = 2,
        CapturedException         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayloadExceptionMechanism::Type> type;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> description;
    ::ll::TypedStorage<1, 1, bool> handled;
    ::ll::TypedStorage<8, 48, std::optional<std::unordered_map<std::string, std::variant<float, bool, std::string>>>> data;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk7efe5d;
    ::ll::UntypedStorage<8, 40> mUnk9a1198;
    ::ll::UntypedStorage<1, 1>  mUnkee412c;
    ::ll::UntypedStorage<8, 72> mUnk70ce1e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadExceptionMechanism& operator=(SentryEnvelopePayloadExceptionMechanism const&);
    SentryEnvelopePayloadExceptionMechanism(SentryEnvelopePayloadExceptionMechanism const&);
    SentryEnvelopePayloadExceptionMechanism();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism&&);

    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~SentryEnvelopePayloadExceptionMechanism();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
