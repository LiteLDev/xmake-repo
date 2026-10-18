#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UrlOverride {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> feedbackURLOverride;
    ::ll::TypedStorage<8, 24, std::string> eligibilityURLOverride;
    ::ll::TypedStorage<8, 24, std::string> clientDownloadURLOverride;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkf6e712;
    ::ll::UntypedStorage<8, 32> mUnk8b49db;
    ::ll::UntypedStorage<8, 32> mUnk20d762;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    UrlOverride& operator=(UrlOverride const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    UrlOverride(UrlOverride const&);
#endif // @header-generator platform
    UrlOverride();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::UrlOverride& operator=(::UrlOverride&&);

    MCNAPI ~UrlOverride();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
#endif // @header-generator platform
};
