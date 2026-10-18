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
struct BooleanConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    BooleanConfirmationRequest& operator=(BooleanConfirmationRequest const&);
    BooleanConfirmationRequest();
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct BooleanConfirmationRequest : public ::Settings::ConfirmationRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mValue;
    // NOLINTEND
};
#else // @header-generator platform
struct BooleanConfirmationRequest {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace Settings
