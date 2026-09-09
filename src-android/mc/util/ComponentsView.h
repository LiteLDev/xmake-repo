#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::Url {

struct ComponentsView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::string_view> scheme;
    ::ll::TypedStorage<8, 16, std::string_view> authority;
    ::ll::TypedStorage<8, 16, std::string_view> path;
    ::ll::TypedStorage<8, 16, std::string_view> query;
    ::ll::TypedStorage<8, 16, std::string_view> fragment;
    // NOLINTEND
};

} // namespace Util::Url
