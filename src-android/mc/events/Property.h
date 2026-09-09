#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Social::Events {

class Property {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                           mName;
    ::ll::UntypedStorage<8, 16>                                      mValue;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mPrivacyTag;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Social::Events::Property const&) const;

    MCNAPI ~Property();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
