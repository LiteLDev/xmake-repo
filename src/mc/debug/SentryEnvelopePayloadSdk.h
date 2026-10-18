#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadSdk {
public:
    // SentryEnvelopePayloadSdk inner types define
    enum class Type : int {
        JavaScript = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::SentryEnvelopePayloadSdk::Type> type;
    ::ll::TypedStorage<8, 24, std::string>                     version;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk1d12a3;
    ::ll::UntypedStorage<8, 32> mUnkaa5ce6;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadSdk& operator=(SentryEnvelopePayloadSdk const&);
    SentryEnvelopePayloadSdk(SentryEnvelopePayloadSdk const&);
    SentryEnvelopePayloadSdk();
#endif // @header-generator platform

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
#else // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
#endif // @header-generator platform
    // NOLINTEND
};
