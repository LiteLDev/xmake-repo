#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class ICommandGroup; }
namespace OreUI::Detail { class IInvocationStateTracker; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {

class CommandRegistry : public ::OreUI::Detail::IBindable {
public:
    // CommandRegistry inner types declare
    // clang-format off
    class LiveCommands;
    // clang-format on

    // CommandRegistry inner types define
    class LiveCommands {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<OreUI::Detail::ICommandGroup>>                  mCommands;
        ::ll::TypedStorage<8, 8, std::reference_wrapper<OreUI::Detail::IInvocationStateTracker>> mTracker;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mOnChangeToken;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                               mOnRemoveToken;
        // NOLINTEND

    public:
        // prevent constructor by default
        LiveCommands();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void _enableListeners();

        MCNAPI ~LiveCommands();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::reference_wrapper<OreUI::Detail::IInvocationStateTracker>> mTracker;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<OreUI::Detail::Binder>> mBinder;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::Detail::CommandRegistry::LiveCommands>> mCommands;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::function<std::unique_ptr<OreUI::Detail::ICommandGroup> ()>>> mCommandTemplates;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandRegistry();

    virtual void onReadyForBindings();

    virtual void onSuspend();

    virtual void onBindingsReleased();

    virtual void update(double const);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<OreUI::Detail::ICommandGroup*> getCommands() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onReadyForBindings();

    MCNAPI void $onSuspend();

    MCNAPI void $onBindingsReleased();

    MCNAPI void $update(double const);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Detail
