#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
#include "mc/client/gui/oreui/binding/interface/ICommandGroup.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IBindable.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class ICommandGroup; }
namespace OreUI::Detail { class IInvocationStateTracker; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace OreUI::Detail {

#if defined(LL_PLAT_A) // @header-generator platform
class CommandRegistry : public ::OreUI::Detail::IBindable {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class CommandRegistry : public ::OreUI::Detail::IBindable {
#else // @header-generator platform
class CommandRegistry {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // CommandRegistry inner types declare
    // clang-format off
    class LiveCommands;
    // clang-format on

    // CommandRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    class LiveCommands {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::Detail::ICommandGroup>>                  mCommands;
        ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Detail::IInvocationStateTracker>> mTracker;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                   mOnChangeToken;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                   mOnRemoveToken;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void _enableListeners();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Detail::IInvocationStateTracker>> mTracker;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::OreUI::Detail::Binder>>                  mBinder;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::Detail::CommandRegistry::LiveCommands>>     mCommands;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::function<::std::unique_ptr<::OreUI::Detail::ICommandGroup>()>>>
        mCommandTemplates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onReadyForBindings() /*override*/;

    virtual void onSuspend() /*override*/;

    virtual void onBindingsReleased() /*override*/;

    virtual void update(double const time) /*override*/;

    virtual ~CommandRegistry() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void registerCommandTemplate(
        ::std::string                                                        name,
        ::std::function<::std::unique_ptr<::OreUI::Detail::ICommandGroup>()> constructor
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onReadyForBindings();

    MCFOLD void $onSuspend();

    MCFOLD void $onBindingsReleased();

    MCFOLD void $update(double const time);
    // NOLINTEND
#else // @header-generator platform
    class LiveCommands {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace OreUI::Detail
