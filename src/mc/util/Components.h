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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> scheme;
    ::ll::TypedStorage<8, 24, std::string> authority;
    ::ll::TypedStorage<8, 24, std::string> path;
    ::ll::TypedStorage<8, 24, std::string> query;
    ::ll::TypedStorage<8, 24, std::string> fragment;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 32> mUnk765e7d;
    ::ll::UntypedStorage<8, 32> mUnkd60fb8;
    ::ll::UntypedStorage<8, 32> mUnke6f14c;
    ::ll::UntypedStorage<8, 32> mUnk27a341;
    ::ll::UntypedStorage<8, 32> mUnk93f566;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    Components& operator=(Components const&);
    Components(Components const&);
#endif // @header-generator platform
    Components();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit Components(::Util::Url::ComponentsView const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI explicit Components(::Util::Url::ComponentsView const& other);
#endif

    MCNAPI ~Components();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Util::Url::ComponentsView const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Util::Url::ComponentsView const& other);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Util::Url
