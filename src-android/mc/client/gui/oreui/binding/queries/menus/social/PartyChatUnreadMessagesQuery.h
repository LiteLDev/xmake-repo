#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyChatUnreadMessagesQuery : public ::OreUI::QueryBase<OreUI::PartyChatUnreadMessagesQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 152>                               mHasUnreadMessages;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mHasUnreadMessagesChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatUnreadMessagesQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatUnreadMessagesQuery();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PartyChatUnreadMessagesQuery(::OreUI::GameDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreUI::GameDependencies const&);
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
