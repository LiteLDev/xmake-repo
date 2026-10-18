#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::Detail { class PublisherBase; }
namespace Bedrock::PubSub::Detail { class SubscriptionBodyBase; }
// clang-format on

namespace Bedrock::PubSub::Detail {

class DispatchTargets {
public:
    // DispatchTargets inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using StrongTarget = std::shared_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>;
#else // @header-generator platform
    using SSOTargets = ::std::array<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using WeakTarget = std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>;
#else // @header-generator platform
    using StorageType = ::std::variant<
        ::std::monostate,
        ::std::array<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>,
        ::std::vector<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using StorageType = std::variant<
        std::monostate,
        std::array<std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>,
        std::vector<std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>>>;
#else // @header-generator platform
    using StrongTarget = ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;

    using UnboundedTargets = ::std::vector<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>;

    using WeakTarget = ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>> mSingleDispatch;
    ::ll::TypedStorage<8, 8, std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>*> mMultiDispatchBegin;
    ::ll::TypedStorage<8, 8, std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>*> mMultiDispatchEnd;
    ::ll::TypedStorage<8, 520, std::variant<std::monostate, std::array<std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>, std::vector<std::weak_ptr<Bedrock::PubSub::Detail::SubscriptionBodyBase>>>> mStorage;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>> mSingleDispatch;
    ::ll::TypedStorage<8, 8, ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>*>   mMultiDispatchBegin;
    ::ll::TypedStorage<8, 8, ::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>*>   mMultiDispatchEnd;
    ::ll::TypedStorage<
        8,
        520,
        ::std::variant<
            ::std::monostate,
            ::std::array<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>, 32>,
            ::std::vector<::std::weak_ptr<::Bedrock::PubSub::Detail::SubscriptionBodyBase>>>>
        mStorage;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool loadSubscriptions(::Bedrock::PubSub::Detail::PublisherBase const&);
#else // @header-generator platform
    MCAPI bool loadSubscriptions(::Bedrock::PubSub::Detail::PublisherBase const& publisher);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~DispatchTargets();
#else // @header-generator platform
    MCAPI ~DispatchTargets();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Bedrock::PubSub::Detail
