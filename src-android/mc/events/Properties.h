#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/Property.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Social::Events {

class Properties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<Social::Events::Property>> mProperties;
    // NOLINTEND

public:
    // prevent constructor by default
    Properties& operator=(Properties const&);
    Properties();

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
};

} // namespace Social::Events
