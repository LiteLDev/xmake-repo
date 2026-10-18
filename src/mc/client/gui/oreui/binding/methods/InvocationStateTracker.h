#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/IdType.h"
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/oreui/binding/IdType.h"
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class InvocationStateTracker : public ::OreUI::Detail::IInvocationStateTracker {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class InvocationStateTracker : public ::OreUI::Detail::IInvocationStateTracker {
#else // @header-generator platform
class InvocationStateTracker {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // InvocationStateTracker inner types declare
    // clang-format off
    struct InvocationData;
    // clang-format on

    // InvocationStateTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct InvocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12>    mInformation;
        ::ll::TypedStorage<1, 1, bool> mHasState;
        ::ll::UntypedStorage<8, 40>    mOnChangePublisher;
        ::ll::UntypedStorage<8, 40>    mOnRemovedPublisher;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<OreUI::Detail::IdType, OreUI::Detail::InvocationStateTracker::InvocationData>> mStates;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~InvocationStateTracker();

    virtual ::Bedrock::PubSub::Subscription onChange(::OreUI::Detail::IdType const&, std::function<void (const OreUI::Detail::IdType&, const OreUI::Detail::IInvocationStateTracker::InvocationInformation&)>);

    virtual ::Bedrock::PubSub::Subscription onRemove(::OreUI::Detail::IdType const&, std::function<void (const OreUI::Detail::IdType&)>);

    virtual void setState(::OreUI::Detail::IdType const&, ::OreUI::InvocationState, ::OreUI::InvocationResult, uchar, std::optional<int>);

    virtual void setState(::OreUI::Detail::IdType const&, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&);

    virtual void remove(::OreUI::Detail::IdType const&);
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Subscription $onChange(
        ::OreUI::Detail::IdType const&,
        std::function<
            void(const OreUI::Detail::IdType&, const OreUI::Detail::IInvocationStateTracker::InvocationInformation&)>
    );

    MCNAPI ::Bedrock::PubSub::Subscription
    $onRemove(::OreUI::Detail::IdType const&, std::function<void(const OreUI::Detail::IdType&)>);

    MCNAPI void $setState(
        ::OreUI::Detail::IdType const&,
        ::OreUI::InvocationState,
        ::OreUI::InvocationResult,
        uchar,
        std::optional<int>
    );

    MCNAPI void
    $setState(::OreUI::Detail::IdType const&, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&);

    MCNAPI void $remove(::OreUI::Detail::IdType const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct InvocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation> mInformation;
        ::ll::TypedStorage<1, 1, bool>                                                             mHasState;
        ::ll::TypedStorage<
            8,
            48,
            ::Bedrock::PubSub::Publisher<
                void(
                    ::OreUI::Detail::IdType const&,
                    ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
                ),
                ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                0>>
            mOnChangePublisher;
        ::ll::TypedStorage<
            8,
            48,
            ::Bedrock::PubSub::
                Publisher<void(::OreUI::Detail::IdType const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
            mOnRemovedPublisher;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::OreUI::Detail::IdType, ::OreUI::Detail::InvocationStateTracker::InvocationData>>
        mStates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvocationStateTracker() /*override*/ = default;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::OreUI::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                             observer
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription onRemove(
        ::OreUI::Detail::IdType const&                        id,
        ::std::function<void(::OreUI::Detail::IdType const&)> observer
    ) /*override*/;

    virtual void setState(
        ::OreUI::Detail::IdType const&                                         id,
        ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const& information
    ) /*override*/;

    virtual void setState(
        ::OreUI::Detail::IdType const& id,
        ::OreUI::InvocationState       state,
        ::OreUI::InvocationResult      result,
        uchar                          progress,
        ::std::optional<int>           error
    ) /*override*/;

    virtual void remove(::OreUI::Detail::IdType const& id) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription $onChange(
        ::OreUI::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                             observer
    );

    MCAPI ::Bedrock::PubSub::Subscription
    $onRemove(::OreUI::Detail::IdType const& id, ::std::function<void(::OreUI::Detail::IdType const&)> observer);

    MCAPI void $setState(
        ::OreUI::Detail::IdType const&                                         id,
        ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const& information
    );

    MCAPI void $setState(
        ::OreUI::Detail::IdType const& id,
        ::OreUI::InvocationState       state,
        ::OreUI::InvocationResult      result,
        uchar                          progress,
        ::std::optional<int>           error
    );

    MCAPI void $remove(::OreUI::Detail::IdType const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
#else // @header-generator platform
    struct InvocationData {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::Detail
