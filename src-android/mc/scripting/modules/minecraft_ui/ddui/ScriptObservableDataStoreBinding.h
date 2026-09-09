#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableNumber.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class ServerPlayer;
namespace cereal { class DynamicValue; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptObservableDataStoreBinding {
public:
    // ScriptObservableDataStoreBinding inner types declare
    // clang-format off
    struct Subscription;
    // clang-format on

    // ScriptObservableDataStoreBinding inner types define
    struct Subscription {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40>                                mObservable;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDataStoreSubscription;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mObservableSubscription;
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscription& operator=(Subscription const&);
        Subscription(Subscription const&);
        Subscription();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Subscription();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using AnyObservable = std::variant<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableNumber>,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableBoolean>,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding::Subscription>>> mBoundData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 24, std::string> mDataStoreName;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObservableDataStoreBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptObservableDataStoreBinding(::IGameplayUserManagerConnector&, ::ServerPlayer&);

    MCNAPI void _onGameplayUserRemoved(::EntityContext&);

    MCNAPI void bindObservable(
        std::string const&,
        std::string const&,
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableNumber>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableBoolean>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>>
    );

    MCNAPI void unbindAll();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IGameplayUserManagerConnector&, ::ServerPlayer&);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
