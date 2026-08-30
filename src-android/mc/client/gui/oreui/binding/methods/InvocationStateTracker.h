#pragma once

#include "mc/_HeaderOutputPredefine.h"

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

namespace OreUI::Detail {

class InvocationStateTracker : public ::OreUI::Detail::IInvocationStateTracker {
public:
    // InvocationStateTracker inner types declare
    // clang-format off
    struct InvocationData;
    // clang-format on

    // InvocationStateTracker inner types define
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
};

} // namespace OreUI::Detail
