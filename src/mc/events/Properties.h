#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/events/Property.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Social::Events {

class Properties {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::Property>> mProperties;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkd1b489;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    Properties& operator=(Properties const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Properties(Properties const&);
#endif // @header-generator platform
    Properties();
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<std::reference_wrapper<const Social::Events::Property>> getProperty(std::string const&) const;

    MCNAPI ~Properties();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};

} // namespace Social::Events
