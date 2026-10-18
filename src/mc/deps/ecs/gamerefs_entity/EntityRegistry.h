#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/game_refs/WeakRef.h"
#else // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityId;
class StrictEntityContext;
// clang-format on

class EntityRegistry : public ::EnableGetWeakRef<EntityRegistry>,
                       public ::std::enable_shared_from_this<EntityRegistry> {
#else // @header-generator platform
class EntityRegistry : public ::EnableGetWeakRef<::EntityRegistry>,
                       public ::std::enable_shared_from_this<::EntityRegistry> {
#endif // @header-generator platform
public:
    // EntityRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using EntityInvokeCallbackFunc = std::function<void(EntityId)>;
#else // @header-generator platform
    using Base = ::entt::basic_registry<::EntityId>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using EntityInvokeCallbackPair = std::pair<std::function<void(EntityId)>, std::function<void(EntityId)>>;
#else // @header-generator platform
    using BaseShared = ::std::enable_shared_from_this<::EntityRegistry>;

    using BaseWeak = ::EnableGetWeakRef<::EntityRegistry>;

    using EntityInvokeCallbackFunc = ::std::function<void(::EntityId)>;

    using EntityInvokeCallbackPair = ::std::pair<::std::function<void(::EntityId)>, ::std::function<void(::EntityId)>>;

    using EntityInvokeCallbackSig = void(::EntityId);
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    ::ll::UntypedStorage<8, 256>           mRegistry;
    ::ll::TypedStorage<4, 4, uint>         mId;
    ::ll::UntypedStorage<8, 48>            mPreEntityInvoke;
    ::ll::UntypedStorage<8, 48>            mPostEntityInvoke;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>                       mDebugName;
    ::ll::TypedStorage<8, 304, ::entt::basic_registry<::EntityId>> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                                 mId;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EntityId)>>   mPreEntityInvoke;
    ::ll::TypedStorage<8, 64, ::std::function<void(::EntityId)>>   mPostEntityInvoke;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    EntityRegistry();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EntityRegistry();
#else // @header-generator platform
    MCNAPI explicit EntityRegistry(::std::string identifier);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EntityContext _createEntity();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::vector<uint> _getComponentIdsOfEntity(::EntityId const& context) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<uint> _getComponentIdsOfEntity(::EntityId const&) const;
#else // @header-generator platform
    MCNAPI void postViewEachCount(uint64 count);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::StrictEntityContext createUnverifiedEntityContextFromInteger(uint) const;

    MCNAPI ::WeakRef<EntityRegistry> getWeakRef();

    MCNAPI void postViewEachCount(ulong);

    MCNAPI std::pair<std::function<void(EntityId)>, std::function<void(EntityId)>>
           setEntityInvokeCallbacks(std::function<void(EntityId)>&&, std::function<void(EntityId)>&&);

    MCNAPI void shrinkToFit();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCNAPI ::std::pair<::std::function<void(::EntityId)>, ::std::function<void(::EntityId)>> setEntityInvokeCallbacks(
        ::std::function<void(::EntityId)>&& preInvoke,
        ::std::function<void(::EntityId)>&& postInvoke
    );
#endif
#endif // @header-generator platform

    MCNAPI ~EntityRegistry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::atomic<uint>& mRegistryCount();
#else // @header-generator platform
    MCNAPI static ::std::atomic<uint>& mRegistryCount();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCNAPI void* $ctor(::std::string identifier);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
