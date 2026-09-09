#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI {

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

} // namespace OreUI
