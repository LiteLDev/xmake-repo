#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Option;
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
class IClientInstance;
class Option;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI {

#if defined(LL_PLAT_A) // @header-generator platform
class AnimationQuery : public ::OreUI::QueryBase<OreUI::AnimationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                                      mScreenAnimationEnabled;
    ::ll::TypedStorage<8, 8, ::Option*>                               mAnimationOption;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<IClientInstance>> mClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mRouteChangedToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mSplitScreenChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnimationQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AnimationQuery(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&);

    MCNAPI void _updateProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::ClientDependencies const&, ::OreUI::GameDependencies const&);
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
class AnimationQuery : public ::OreUI::QueryBase<::OreUI::AnimationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mScreenAnimationEnabled;
    ::ll::TypedStorage<8, 8, ::Option*>                                   mAnimationOption;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRouteChangedToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSplitScreenChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimationQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _updateProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};
#else // @header-generator platform
class AnimationQuery {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace OreUI
