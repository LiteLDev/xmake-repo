#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class ICallable; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {

class ICommandGroup {
public:
    // ICommandGroup inner types define
    using NameType = char const* const;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ICommandGroup() = default;

    virtual char const* const name() const = 0;

    virtual void addCallable(::OreUI::Detail::ICallable*) = 0;

    virtual void removeCallable(::OreUI::Detail::ICallable*) = 0;

    virtual void setState(::OreUI::Detail::IdType const&, ::OreUI::InvocationState const, ::OreUI::InvocationResult const, uchar const, std::optional<int> const) = 0;

    virtual ::Bedrock::PubSub::Subscription onChange(std::function<void (const OreUI::Detail::IdType&, const OreUI::Detail::IInvocationStateTracker::InvocationInformation&)> const&) = 0;

    virtual ::Bedrock::PubSub::Subscription onRemove(std::function<void (const OreUI::Detail::IdType&)> const&) = 0;

    virtual void expose(::cohtml::Binder*, void*) = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace OreUI::Detail
