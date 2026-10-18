#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/runtime/scripting/Result.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/platform/UUID.h"
#include "mc/util/Bounds.h"
#include "mc/world/events/EventListenerDispatcher.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/events/LevelEventListener.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec3;
#else // @header-generator platform
#endif // @header-generator platform
struct LevelTickingAreaFinishedLoadingEvent;
namespace ScriptModuleMinecraft { struct ScriptTickingArea; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptTickingAreaError; }
namespace ScriptModuleMinecraft { struct ScriptTickingAreaOptions; }
namespace Scripting { class ScriptObjectFactory; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

#if defined(LL_PLAT_A) // @header-generator platform
class ScriptTickingAreaManager : public ::EventListenerDispatcher<LevelEventListener> {
#else // @header-generator platform
class ScriptTickingAreaManager : public ::EventListenerDispatcher<::LevelEventListener> {
#endif // @header-generator platform
public:
    // ScriptTickingAreaManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct PromiseContext;
#else // @header-generator platform
#endif // @header-generator platform
    struct Counter;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PromiseContext;
#endif // @header-generator platform
    // clang-format on

    // ScriptTickingAreaManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PromiseContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>    mName;
        ::ll::TypedStorage<4, 48, ::Bounds>       mBounds;
        ::ll::UntypedStorage<8, 80>               mPromise;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
        ::ll::TypedStorage<1, 1, bool>            mFinishedLoading;
        // NOLINTEND

    public:
        // prevent constructor by default
        PromiseContext& operator=(PromiseContext const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~PromiseContext();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

#else // @header-generator platform
#endif // @header-generator platform
    struct Counter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mCount;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct PromiseContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                  mName;
        ::ll::TypedStorage<4, 48, ::Bounds>                                       mBounds;
        ::ll::TypedStorage<8, 80, ::Scripting::Promise<void, ::Scripting::Error>> mPromise;
        ::ll::TypedStorage<4, 4, ::DimensionType>                                 mDimensionType;
        ::ll::TypedStorage<1, 1, bool>                                            mFinishedLoading;
        // NOLINTEND

    public:
        // prevent constructor by default
        PromiseContext& operator=(PromiseContext const&);
        PromiseContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI PromiseContext(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const&);
        // NOLINTEND
    };

#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext>> mPromiseContexts;
    ::ll::TypedStorage<8, 24, std::map<DimensionType, std::unordered_map<ChunkPos, ScriptModuleMinecraft::ScriptTickingAreaManager::Counter>>> mTickingChunksCache;
    ::ll::TypedStorage<4, 4, int const> mMaxNumberOfChunks;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::mce::UUID, ::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext>>
        mPromiseContexts;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            ::DimensionType,
            ::std::unordered_map<::ChunkPos, ::ScriptModuleMinecraft::ScriptTickingAreaManager::Counter>>>
                                                              mTickingChunksCache;
    ::ll::TypedStorage<4, 4, int const>                       mMaxNumberOfChunks;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>> mLevel;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ServerLevel*>> mLevel;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    ScriptTickingAreaManager& operator=(ScriptTickingAreaManager const&);
#else // @header-generator platform
#endif // @header-generator platform
    ScriptTickingAreaManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptTickingAreaManager();
#else // @header-generator platform
    virtual ~ScriptTickingAreaManager() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::EventResult onEvent(::LevelTickingAreaFinishedLoadingEvent const&);
#else // @header-generator platform
    virtual ::EventResult onEvent(::LevelTickingAreaFinishedLoadingEvent const& event) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScriptModuleMinecraft::ScriptTickingArea>
           _getTickingArea(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const&) const;
#else // @header-generator platform
    MCAPI ScriptTickingAreaManager(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::ServerLevel*>       level,
        ::Scripting::ContextConfig const&     contextConfig
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _hasCapacity(::DimensionType const&, ::Bounds const&);
#else // @header-generator platform
    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptTickingArea>
    _getTickingArea(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const& context) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isUniqueIdentifier(std::string const&) const;
#else // @header-generator platform
    MCAPI bool _hasCapacity(::DimensionType const& dimensionId, ::Bounds const& bounds);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _removeTickingAreas(std::vector<mce::UUID> const&);
#else // @header-generator platform
    MCAPI bool _removeTickingAreas(::std::vector<::mce::UUID> const& uuids);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::WeakLifetimeScope const& scope,
        ::gsl::not_null<::ServerLevel*>       level,
        ::Scripting::ContextConfig const&     contextConfig
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::EventResult $onEvent(::LevelTickingAreaFinishedLoadingEvent const&);
#else // @header-generator platform
    MCAPI ::EventResult $onEvent(::LevelTickingAreaFinishedLoadingEvent const& event);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
