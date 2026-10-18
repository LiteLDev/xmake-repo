#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class BuildInfoQuery : public ::OreUI::QueryBase<OreUI::BuildInfoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 168>                               mTreatments;
    ::ll::UntypedStorage<8, 152>                               mCanCopyToClipboard;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mTreatmentChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BuildInfoQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BuildInfoQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BuildInfoQuery(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&, ::OreUI::ClientDependencies const&);
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
class BuildInfoQuery : public ::OreUI::QueryBase<::OreUI::BuildInfoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mTreatments;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mCanCopyToClipboard;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mTreatmentChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    BuildInfoQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BuildInfoQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND
};
#else // @header-generator platform
class BuildInfoQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
