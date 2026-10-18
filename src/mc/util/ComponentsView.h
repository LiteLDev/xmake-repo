#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace Util::Url { struct Components; }
// clang-format on
#endif // @header-generator platform

namespace Util::Url {

struct ComponentsView {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::string_view> scheme;
    ::ll::TypedStorage<8, 16, std::string_view> authority;
    ::ll::TypedStorage<8, 16, std::string_view> path;
    ::ll::TypedStorage<8, 16, std::string_view> query;
    ::ll::TypedStorage<8, 16, std::string_view> fragment;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnk3c0461;
    ::ll::UntypedStorage<8, 16> mUnk6c1f03;
    ::ll::UntypedStorage<8, 16> mUnkc5f673;
    ::ll::UntypedStorage<8, 16> mUnk6fbbab;
    ::ll::UntypedStorage<8, 16> mUnk70faf8;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentsView& operator=(ComponentsView const&);
    ComponentsView(ComponentsView const&);
    ComponentsView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Util::Url::Components const& other) const;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util::Url
