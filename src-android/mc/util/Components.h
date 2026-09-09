#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct ComponentsView; }
// clang-format on

namespace Util::Url {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> scheme;
    ::ll::TypedStorage<8, 24, std::string> authority;
    ::ll::TypedStorage<8, 24, std::string> path;
    ::ll::TypedStorage<8, 24, std::string> query;
    ::ll::TypedStorage<8, 24, std::string> fragment;
    // NOLINTEND

public:
    // prevent constructor by default
    Components();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Components(::Util::Url::ComponentsView const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Util::Url::ComponentsView const&);
    // NOLINTEND
};

} // namespace Util::Url
