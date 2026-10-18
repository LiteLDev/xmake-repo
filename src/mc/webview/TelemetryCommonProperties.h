#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Webview {

struct TelemetryCommonProperties {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                name;
    ::ll::TypedStorage<8, 24, std::string>                url;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> context;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnkaee8a1;
    ::ll::UntypedStorage<8, 32> mUnk1fc2a6;
    ::ll::UntypedStorage<8, 40> mUnk80d437;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    TelemetryCommonProperties& operator=(TelemetryCommonProperties const&);
    TelemetryCommonProperties(TelemetryCommonProperties const&);
    TelemetryCommonProperties();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~TelemetryCommonProperties();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ~TelemetryCommonProperties();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Webview
