#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Social {

struct AuthServiceStartSessionRequestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> languageCode;
    ::ll::TypedStorage<8, 24, std::string> ietfLanguageCode;
    ::ll::TypedStorage<8, 24, std::string> regionCode;
    ::ll::UntypedStorage<8, 16>            deviceContext;
    ::ll::TypedStorage<8, 24, std::string> ageRange;
    // NOLINTEND

public:
    // prevent constructor by default
    AuthServiceStartSessionRequestData& operator=(AuthServiceStartSessionRequestData const&);
    AuthServiceStartSessionRequestData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AuthServiceStartSessionRequestData(::Social::AuthServiceStartSessionRequestData const&);

    MCNAPI ~AuthServiceStartSessionRequestData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::AuthServiceStartSessionRequestData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
