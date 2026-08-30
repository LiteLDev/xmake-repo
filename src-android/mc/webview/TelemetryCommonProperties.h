#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

struct TelemetryCommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                name;
    ::ll::TypedStorage<8, 24, std::string>                url;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> context;
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryCommonProperties& operator=(TelemetryCommonProperties const&);
    TelemetryCommonProperties(TelemetryCommonProperties const&);
    TelemetryCommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TelemetryCommonProperties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Webview
