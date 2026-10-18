#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableBoolean.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableNumber.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableString.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptObservableUIRawMessage.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class EntityContext;
class IGameplayUserManagerConnector;
class ServerPlayer;
#if defined(LL_PLAT_A) // @header-generator platform
namespace cereal { class DynamicValue; }
#else // @header-generator platform
struct ActorUniqueID;
namespace ScriptModuleMinecraftServerUI { class ScriptObservableBoolean; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableNumber; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableString; }
namespace ScriptModuleMinecraftServerUI { class ScriptObservableUIRawMessage; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 40>                                mObservable;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDataStoreSubscription;
        ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mObservableSubscription;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 40> mUnk97f907;
        ::ll::UntypedStorage<8, 16> mUnk60eb08;
        ::ll::UntypedStorage<8, 16> mUnkd60d31;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Subscription& operator=(Subscription const&);
        Subscription(Subscription const&);
        Subscription();
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using AnyObservable = std::variant<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableNumber>,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableBoolean>,
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<1, 24, ::WeakEntityRef> mPlayer;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<std::string, ScriptModuleMinecraftServerUI::ScriptObservableDataStoreBinding::Subscription>>> mBoundData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnGameplayUserRemovedSubscription;
    ::ll::TypedStorage<8, 24, std::string> mDataStoreName;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk6ef883;
    ::ll::UntypedStorage<8, 64> mUnkccf317;
    ::ll::UntypedStorage<8, 16> mUnk344dd9;
    ::ll::UntypedStorage<8, 32> mUnkd3cf3a;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ScriptObservableDataStoreBinding& operator=(ScriptObservableDataStoreBinding const&);
    ScriptObservableDataStoreBinding(ScriptObservableDataStoreBinding const&);
#endif // @header-generator platform
    ScriptObservableDataStoreBinding();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptObservableDataStoreBinding(::IGameplayUserManagerConnector&, ::ServerPlayer&);
#else // @header-generator platform
    MCNAPI
    ScriptObservableDataStoreBinding(::IGameplayUserManagerConnector& userManagerConnector, ::ServerPlayer& player);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _onGameplayUserRemoved(::EntityContext&);
#else // @header-generator platform
    MCNAPI void _onGameplayUserRemoved(::EntityContext& entity);
#endif // @header-generator platform

    MCNAPI void bindObservable(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string const&,
        std::string const&,
        std::variant<
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableString>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableNumber>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableBoolean>,
            Scripting::StrongTypedObjectHandle<ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>>
#else // @header-generator platform
        ::std::string const& property,
        ::std::string const& path,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableString>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableNumber>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableBoolean>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraftServerUI::ScriptObservableUIRawMessage>> binding
#endif // @header-generator platform
    );

    MCNAPI void unbindAll();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    MCNAPI void unbindObservable(::std::string const& property, ::std::string const& path);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::IGameplayUserManagerConnector&, ::ServerPlayer&);
#else // @header-generator platform
    MCNAPI void* $ctor(::IGameplayUserManagerConnector& userManagerConnector, ::ServerPlayer& player);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
