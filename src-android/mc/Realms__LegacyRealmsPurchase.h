#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/RealmsPurchaseFailureReason.h"
#include "mc/client/realms/RealmsPurchaseState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
class RealmsAPI;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class RealmsWorldContext; }
// clang-format on

namespace Realms {

class LegacyRealmsPurchase : public ::std::enable_shared_from_this<Realms::LegacyRealmsPurchase> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::weak_ptr<RealmsAPI>>             mRealmsAPI;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseState>         mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseFailureReason> mRealmsPurchaseFailureReason;
    ::ll::UntypedStorage<8, 24>                                     mOfferRepository;
    ::ll::TypedStorage<8, 48, std::function<bool()>>                mCreateRealmWithoutPurchase;
    ::ll::TypedStorage<8, 48, std::function<void()>>                mOnPurchaseFulfilled;
    ::ll::UntypedStorage<8, 88>                                     mStateChangedPublisher;
    ::ll::UntypedStorage<8, 24>                                     mRealmsWorldContext;
    // NOLINTEND
};

} // namespace Realms
