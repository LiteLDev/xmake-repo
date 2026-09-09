#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/LastClickedSource.h"
#include "mc/certificates/identity/edu/Role.h"
#include "mc/deps/code_builder/CodeBuilderPerformance.h"
#include "mc/events/identity/EduSignInStage.h"

class IActiveDirectoryIdentityTelemetry {
public:
    // IActiveDirectoryIdentityTelemetry inner types define
    using SignInErrorDetails = std::vector<std::pair<std::string, std::string>>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IActiveDirectoryIdentityTelemetry();

    virtual void fireEventSignInEdu(std::string const&, ::edu::Role, ::Identity::EduSignInStage, std::string const&, std::string const&, std::vector<std::pair<std::string, std::string>> const&) = 0;

    virtual void fireEventEduDemoConversion(::edu::Role, ::LastClickedSource) = 0;

    virtual void fireCodeBuilderLoadPerformanceEvent(::CodeBuilderPerformance::Stage) = 0;

    virtual std::string getAppSessionId() = 0;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
