#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
struct EventProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, std::variant<std::string, bool, double>> value;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise>   privacyTag;
    // NOLINTEND

public:
    // prevent constructor by default
    EventProperty& operator=(EventProperty const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EventProperty();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
struct EventProperty {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<::std::string, bool, double>> value;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise>       privacyTag;
    // NOLINTEND
};
#else // @header-generator platform
struct EventProperty {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
