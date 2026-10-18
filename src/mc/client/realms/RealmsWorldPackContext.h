#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/network/realms/Content.h"
#include "mc/client/network/realms/GenericStatus.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/realms/RealmsWorldContextState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/PublishedValue.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Realms { class IContentApi; }
namespace Realms { class RealmsWorldContext; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform

namespace Realms {

class RealmsWorldPackContext {
public:
    // RealmsWorldPackContext inner types declare
    // clang-format off
    class RealmsWorldPackContextImpl;
    // clang-format on

    // RealmsWorldPackContext inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class RealmsWorldPackContextState : int {
        IDLE            = 0,
        FETCHING_PACKS  = 1,
        FAILED          = 2,
        PACKS_AVAILABLE = 3,
    };
#else // @header-generator platform
    enum class RealmsWorldPackContextState : int {};
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    class RealmsWorldPackContextImpl
    : public ::std::enable_shared_from_this<Realms::RealmsWorldPackContext::RealmsWorldPackContextImpl> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::RealmsWorldContext>> mRealmsWorldContext;
        ::ll::TypedStorage<8, 16, std::weak_ptr<Realms::IContentApi>>        mContentAPI;
        ::ll::TypedStorage<8, 8, std::unique_ptr<TaskGroup>>                 mTaskGroup;
        ::ll::UntypedStorage<8, 8>                                           mCurrentRealmId;
        ::ll::TypedStorage<4, 8, std::optional<int>>                         mCurrentSlotIndex;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mRealmsWorldContextIdChangedSub;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mRealmsWorldContextStateChangedSub;
        ::ll::UntypedStorage<8, 48>                                          mStatePubVal;
        ::ll::TypedStorage<4, 4, ::Realms::GenericStatus>                    mFetchError;
        ::ll::TypedStorage<8, 24, std::vector<Realms::Content>>              mRealmsWorldPackContent;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmsWorldPackContextImpl();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _fetchPackContent();

        MCNAPI void _handleRealmIdChange(::Realms::RealmId);

        MCNAPI void invalidateContext();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsWorldPackContext::RealmsWorldPackContextImpl>> mPackContextImpl;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsWorldPackContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void invalidateContext();
    // NOLINTEND
#else // @header-generator platform
    class RealmsWorldPackContextImpl {};
#endif // @header-generator platform
};

} // namespace Realms
