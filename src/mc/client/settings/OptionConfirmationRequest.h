#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/ConfirmationRequest.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/settings/ConfirmationRequest.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace Settings {

#if defined(LL_PLAT_A) // @header-generator platform
struct OptionConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    OptionConfirmationRequest& operator=(OptionConfirmationRequest const&);
    OptionConfirmationRequest(OptionConfirmationRequest const&);
    OptionConfirmationRequest();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct OptionConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct OptionConfirmationRequest {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
