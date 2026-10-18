#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadUserData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 32, std::optional<std::string>> ipAddress;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> id;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> username;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 40> mUnkdadd81;
    ::ll::UntypedStorage<8, 40> mUnk5865d3;
    ::ll::UntypedStorage<8, 40> mUnk64ef69;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadUserData(SentryEnvelopePayloadUserData const&);
    SentryEnvelopePayloadUserData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SentryEnvelopePayloadUserData(::SentryEnvelopePayloadUserData const&);

    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData&&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI ~SentryEnvelopePayloadUserData();
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // constructor thunks
#else // @header-generator platform
    // destructor thunk
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::SentryEnvelopePayloadUserData const&);
#else // @header-generator platform
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
