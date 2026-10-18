#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/core/ExposedRouterLocation.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/core/ExposedRouterLocation.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class RouterQuery : public ::OreUI::QueryBase<OreUI::RouterQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, ::OreUI::RouterHistoryAdapter>  mRouter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRouterToken;
    ::ll::UntypedStorage<8, 152>                               mLength;
    ::ll::UntypedStorage<8, 168>                               mAction;
    ::ll::UntypedStorage<8, 720>                               mLocation;
    ::ll::UntypedStorage<8, 104>                               mHistory;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RouterQuery(::OreUI::ClientDependencies const&);

    MCNAPI void _updateState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class RouterQuery : public ::OreUI::QueryBase<::OreUI::RouterQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>    mRouter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mRouterToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>        mLength;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mAction;
    ::ll::TypedStorage<8, 840, ::OreUI::ExposedRouterLocation>   mLocation;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ExposedRouterLocation, ::std::allocator<::OreUI::ExposedRouterLocation>>>
        mHistory;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterQuery(::OreUI::ClientDependencies const& client);

    MCAPI void _updateState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class RouterQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
