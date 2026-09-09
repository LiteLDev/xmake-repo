#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/edu/Role.h"

// auto generated forward declare list
// clang-format off
class IActiveDirectoryIdentityTelemetry;
namespace Json { class Value; }
// clang-format on

class ADPopupTelemetryEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mStage;
    // NOLINTEND

public:
    // prevent constructor by default
    ADPopupTelemetryEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void
    tryFireSignInEvent(::IActiveDirectoryIdentityTelemetry&, std::string const&, ::edu::Role, std::string const&) const;
    // NOLINTEND
};
