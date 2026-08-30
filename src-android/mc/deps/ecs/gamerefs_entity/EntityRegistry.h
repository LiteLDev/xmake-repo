#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityId;
class StrictEntityContext;
// clang-format on

class EntityRegistry : public ::EnableGetWeakRef<EntityRegistry>,
                       public ::std::enable_shared_from_this<EntityRegistry> {
public:
    // EntityRegistry inner types define
    using EntityInvokeCallbackFunc = std::function<void(EntityId)>;

    using EntityInvokeCallbackPair = std::pair<std::function<void(EntityId)>, std::function<void(EntityId)>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mDebugName;
    ::ll::UntypedStorage<8, 256>           mRegistry;
    ::ll::TypedStorage<4, 4, uint>         mId;
    ::ll::UntypedStorage<8, 48>            mPreEntityInvoke;
    ::ll::UntypedStorage<8, 48>            mPostEntityInvoke;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EntityRegistry();

    MCNAPI ::EntityContext _createEntity();

    MCNAPI std::vector<uint> _getComponentIdsOfEntity(::EntityId const&) const;

    MCNAPI ::StrictEntityContext createUnverifiedEntityContextFromInteger(uint) const;

    MCNAPI ::WeakRef<EntityRegistry> getWeakRef();

    MCNAPI void postViewEachCount(ulong);

    MCNAPI std::pair<std::function<void(EntityId)>, std::function<void(EntityId)>>
           setEntityInvokeCallbacks(std::function<void(EntityId)>&&, std::function<void(EntityId)>&&);

    MCNAPI void shrinkToFit();

    MCNAPI ~EntityRegistry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::atomic<uint>& mRegistryCount();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
