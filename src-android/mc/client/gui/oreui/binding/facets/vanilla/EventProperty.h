#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

namespace OreUI {

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

} // namespace OreUI
