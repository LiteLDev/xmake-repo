#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class GuiData;
namespace Parties { class PartySystem; }
namespace Social { class IChatChannel; }
namespace Social { class User; }
namespace Social { struct ChatMessage; }
// clang-format on

namespace Social {

class PartyChatGuiDataProxy : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>                                      mGuiData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::User>>         mUser;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mPartyChatSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>       mChatReceivedSubscription;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::IChatChannel>> mChatChannel;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatGuiDataProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatGuiDataProxy();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PartyChatGuiDataProxy(
        ::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>>,
        std::shared_ptr<Social::User>,
        ::Parties::PartySystem&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<GuiData>>, std::shared_ptr<Social::User>, ::Parties::PartySystem&);
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

} // namespace Social
