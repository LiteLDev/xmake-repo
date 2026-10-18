#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"

// auto generated forward declare list
// clang-format off
class IActiveDirectoryIdentityTelemetry;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class ADPopupTelemetryEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mStage;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mStage;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ADPopupTelemetryEvent();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    tryFireSignInEvent(::IActiveDirectoryIdentityTelemetry&, std::string const&, ::edu::Role, std::string const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void tryFireSignInEvent(
        ::IActiveDirectoryIdentityTelemetry& eventing,
        ::std::string const&                 mutsUserId,
        ::edu::Role                          role,
        ::std::string const&                 tenantType
    ) const;

    MCNAPI ~ADPopupTelemetryEvent();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};
