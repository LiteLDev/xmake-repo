#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

class Property {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                           mName;
    ::ll::UntypedStorage<8, 16>                                      mValue;
    ::ll::TypedStorage<1, 1, ::Social::Events::PrivacyTagEnterprise> mPrivacyTag;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnke42131;
    ::ll::UntypedStorage<8, 16> mUnka5b622;
    ::ll::UntypedStorage<1, 1>  mUnk99a354;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    Property& operator=(Property const&);
    Property(Property const&);
    Property();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool operator==(::Social::Events::Property const&) const;

#else // @header-generator platform
#endif // @header-generator platform
    MCNAPI ~Property();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
