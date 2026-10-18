#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#include "mc/events/identity/EduSignInStage.h"

class IActiveDirectoryIdentityTelemetry {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // IActiveDirectoryIdentityTelemetry inner types define
    using SignInErrorDetails = std::vector<std::pair<std::string, std::string>>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~IActiveDirectoryIdentityTelemetry();
#else // @header-generator platform
    virtual ~IActiveDirectoryIdentityTelemetry() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventSignInEdu(std::string const&, ::edu::Role, ::Identity::EduSignInStage, std::string const&, std::string const&, std::vector<std::pair<std::string, std::string>> const&) = 0;
#else // @header-generator platform
    virtual void fireEventSignInEdu(
        ::std::string const&                                            mutsUserId,
        ::edu::Role                                                     role,
        ::Identity::EduSignInStage                                      stage,
        ::std::string const&                                            tenantType,
        ::std::string const&                                            error,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& details
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;
#else // @header-generator platform
    virtual void fireEventEduDemoConversion(::edu::Role role, ::LastClickedSource lastClickedSource) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void fireCodeBuilderLoadPerformanceEvent(::CodeBuilderPerformance::Stage) = 0;
#else // @header-generator platform
    virtual void fireCodeBuilderLoadPerformanceEvent(::CodeBuilderPerformance::Stage stage) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getAppSessionId() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::std::string getAppSessionId() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
