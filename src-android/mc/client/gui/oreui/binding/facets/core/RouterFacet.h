#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
namespace OreUI { class RouterLocation; }
// clang-format on

namespace OreUI {

class RouterFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::RouterFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 248, ::OreUI::RouterHistoryAdapter>  mRouterHistoryAdapter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RouterFacet(::OreUI::Router&);

    MCNAPI ::OreUI::RouterHistoryAdapter& getHistoryAdapter();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[12]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::Router&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
