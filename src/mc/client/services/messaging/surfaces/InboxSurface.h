#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/services/messaging/InboxCategoryData.h"
#include "mc/client/services/messaging/InboxSettingsData.h"
#include "mc/client/services/messaging/MessageData.h"
#include "mc/client/services/messaging/surfaces/BaseMessageSurface.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
// clang-format on

class InboxSurface : public ::BaseMessageSurface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88>                                mInboxUpdatedPublisher;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMessageImageLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSettingsLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCategoriesLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCategoryImageLoadedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCategoryContinuationChangedSubscription;
    ::ll::TypedStorage<1, 2, ::InboxSettingsData>              mSettings;
    ::ll::TypedStorage<8, 24, std::vector<InboxCategoryData>>  mCategories;
    ::ll::TypedStorage<8, 24, std::vector<MessageData>>        mMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    InboxSurface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InboxSurface();

    virtual void reset();

    virtual void _handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI InboxSurface(::PlayerMessagingService&, std::string const&);

    MCNAPI std::optional<uint> _getCategoryIndex(std::string const&) const;

    MCNAPI void decrementInvitesTotalCount();

    MCNAPI void decrementInvitesUnreadCount();

    MCNAPI void deleteAllReadMessages();

    MCNAPI void deleteMessage(std::string const&, std::string const&);

    MCNAPI std::vector<InboxCategoryData> const& getCategories() const;

    MCNAPI std::optional<InboxCategoryData> getCategory(std::string const&) const;

    MCNAPI ::Bedrock::PubSub::Connector<void()>& getInboxUpdatedConnector();

    MCNAPI std::vector<MessageData> const& getMessages() const;

    MCNAPI ::InboxSettingsData getSettings() const;

    MCNAPI void impressControlMessages();

    MCNAPI void readAllMessages();

    MCNAPI void readMessage(std::string const&, std::string const&);

    MCNAPI void reportClick(std::string const&, std::string const&, std::string const&);

    MCNAPI void reportSettingsChanged(::InboxSettingsData const&);

    MCNAPI void reportSubmit(std::string const&, std::string const&, std::string const&);

    MCNAPI void requestMessages(std::string const&);

    MCNAPI void setInviteCounts(uint, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PlayerMessagingService&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reset();

    MCNAPI void $_handleNewMessages(std::vector<MessageData>&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class InboxSurface {};
#endif // @header-generator platform
