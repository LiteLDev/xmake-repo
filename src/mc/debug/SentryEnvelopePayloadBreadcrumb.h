#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadBreadcrumb {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 8, std::optional<SentryBreadcrumbLevel>> level;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          category;
    ::ll::TypedStorage<8, 32, std::optional<std::string>>          message;
    ::ll::TypedStorage<8, 16, std::optional<ulong>>                timestamp;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 8>  mUnkb35040;
    ::ll::UntypedStorage<8, 40> mUnkc95d01;
    ::ll::UntypedStorage<8, 40> mUnk49856e;
    ::ll::UntypedStorage<8, 16> mUnke46afa;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    SentryEnvelopePayloadBreadcrumb(SentryEnvelopePayloadBreadcrumb const&);
    SentryEnvelopePayloadBreadcrumb();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI SentryEnvelopePayloadBreadcrumb(::SentryEnvelopePayloadBreadcrumb const&);

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ::SentryEnvelopePayloadBreadcrumb& operator=(::SentryEnvelopePayloadBreadcrumb const&);

    MCNAPI ~SentryEnvelopePayloadBreadcrumb();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadBreadcrumb const&);
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
