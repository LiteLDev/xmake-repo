#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IdType; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IdType; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI::Detail {

class IInvocationStateTracker {
public:
    // IInvocationStateTracker inner types declare
    // clang-format off
    struct InvocationInformation;
    // clang-format on

    // IInvocationStateTracker inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct InvocationInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::OreUI::InvocationState>  mState;
        ::ll::TypedStorage<1, 1, ::OreUI::InvocationResult> mResult;
        ::ll::TypedStorage<1, 1, uchar>                     mProgress;
        ::ll::TypedStorage<4, 8, std::optional<int>>        mError;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IInvocationStateTracker() = default;

    virtual ::Bedrock::PubSub::Subscription onChange(::OreUI::Detail::IdType const&, std::function<void (const OreUI::Detail::IdType&, const OreUI::Detail::IInvocationStateTracker::InvocationInformation&)>) = 0;

    virtual ::Bedrock::PubSub::Subscription onRemove(::OreUI::Detail::IdType const&, std::function<void (const OreUI::Detail::IdType&)>) = 0;

    virtual void setState(::OreUI::Detail::IdType const&, ::OreUI::InvocationState, ::OreUI::InvocationResult, uchar, std::optional<int>) = 0;

    virtual void setState(::OreUI::Detail::IdType const&, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&) = 0;

    virtual void remove(::OreUI::Detail::IdType const&) = 0;
    // clang-format on
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct InvocationInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::OreUI::InvocationState>  mState;
        ::ll::TypedStorage<1, 1, ::OreUI::InvocationResult> mResult;
        ::ll::TypedStorage<1, 1, uchar>                     mProgress;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      mError;
        // NOLINTEND
    };

    using OnChange =
        void(::OreUI::Detail::IdType const&, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&);

    using OnRemoved = void(::OreUI::Detail::IdType const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInvocationStateTracker() = default;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::OreUI::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                             observer
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
    onRemove(::OreUI::Detail::IdType const& id, ::std::function<void(::OreUI::Detail::IdType const&)> observer) = 0;

    virtual void setState(
        ::OreUI::Detail::IdType const&                                         id,
        ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const& information
    ) = 0;

    virtual void setState(
        ::OreUI::Detail::IdType const& id,
        ::OreUI::InvocationState       state,
        ::OreUI::InvocationResult      result,
        uchar                          progress,
        ::std::optional<int>           error
    ) = 0;

    virtual void remove(::OreUI::Detail::IdType const& id) = 0;
    // NOLINTEND
#else // @header-generator platform
    struct InvocationInformation {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::Detail
