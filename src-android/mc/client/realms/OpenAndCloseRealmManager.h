#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/realms/RealmsAvailability.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class IWorldApi; }
namespace Realms { class RealmsList; }
namespace Realms { class RealmsWorldContext; }
// clang-format on

namespace Realms {

class OpenAndCloseRealmManager : public ::std::enable_shared_from_this<Realms::OpenAndCloseRealmManager> {
public:
    // OpenAndCloseRealmManager inner types declare
    // clang-format off
    struct Request;
    // clang-format on

    // OpenAndCloseRealmManager inner types define
    enum class RequestQueueStatus : int {
        Idle       = 0,
        Processing = 1,
    };

    enum class RequestStatus : int {
        Waiting    = 0,
        InProgress = 1,
        Completed  = 2,
    };

    struct Request {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>                                                  id;
        ::ll::TypedStorage<4, 4, ::Realms::RealmsAvailability>                      action;
        ::ll::TypedStorage<4, 4, ::Realms::OpenAndCloseRealmManager::RequestStatus> status;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Realms::OpenAndCloseRealmManager::RequestQueueStatus>  mQueueStatus;
    ::ll::UntypedStorage<8, 88>                                                       mNotifyOpenAndCloseStateUpdated;
    ::ll::TypedStorage<8, 24, std::vector<Realms::OpenAndCloseRealmManager::Request>> mRequests;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::IWorldApi>>                       mRealmsWorldAPI;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsList>>                      mRealmsList;
    ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsWorldContext>>              mRealmsWorldContext;
    ::ll::TypedStorage<4, 8, std::optional<Realms::GenericStatus>>                    mResult;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenAndCloseRealmManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OpenAndCloseRealmManager(
        std::weak_ptr<Realms::IWorldApi>,
        std::weak_ptr<Realms::RealmsList>,
        std::weak_ptr<Realms::RealmsWorldContext>
    );

    MCNAPI void _processRequest(::Realms::OpenAndCloseRealmManager::Request&);

    MCNAPI ::Realms::OpenAndCloseRealmManager::RequestQueueStatus getQueueStatus() const;

    MCNAPI ::Bedrock::PubSub::Subscription registerOpenAndCloseStateChangeListener(std::function<void()>);

    MCNAPI void sendOpenOrCloseRealmRequest(::Realms::RealmId, ::Realms::RealmsAvailability);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        std::weak_ptr<Realms::IWorldApi>,
        std::weak_ptr<Realms::RealmsList>,
        std::weak_ptr<Realms::RealmsWorldContext>
    );
    // NOLINTEND
};

} // namespace Realms
