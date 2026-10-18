#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/RealmsPurchaseReconcilerFailureReason.h"
#include "mc/client/realms/RealmsPurchaseReconcilerState.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
struct Purchase;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Realms { class RealmsWorldContext; }
// clang-format on

namespace Realms {

class LegacyRealmsPurchaseReconciler : public ::std::enable_shared_from_this<Realms::LegacyRealmsPurchaseReconciler> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerState>         mState;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsPurchaseReconcilerFailureReason> mFailureReason;
    ::ll::UntypedStorage<8, 24>                                               mOfferRepository;
    ::ll::TypedStorage<8, 48, std::function<void()>>                          mOnReconciliationFulfilled;
    ::ll::UntypedStorage<8, 16>                                               mPurchase;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldContext>>    mRealmsWorldContext;
    ::ll::UntypedStorage<8, 96>                                               mStateChangedPublisher;
    // NOLINTEND
};

} // namespace Realms
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
