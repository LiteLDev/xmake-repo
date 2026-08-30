#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
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
class Vec3;
struct LevelTickingAreaFinishedLoadingEvent;
namespace ScriptModuleMinecraft { struct ScriptTickingArea; }
namespace ScriptModuleMinecraft { struct ScriptTickingAreaError; }
namespace ScriptModuleMinecraft { struct ScriptTickingAreaOptions; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTickingAreaManager : public ::EventListenerDispatcher<LevelEventListener> {
public:
    // ScriptTickingAreaManager inner types declare
    // clang-format off
    struct PromiseContext;
    struct Counter;
    // clang-format on

    // ScriptTickingAreaManager inner types define
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

    struct Counter {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mCount;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<mce::UUID, ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext>> mPromiseContexts;
    ::ll::TypedStorage<8, 24, std::map<DimensionType, std::unordered_map<ChunkPos, ScriptModuleMinecraft::ScriptTickingAreaManager::Counter>>> mTickingChunksCache;
    ::ll::TypedStorage<4, 4, int const> mMaxNumberOfChunks;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<ServerLevel*>> mLevel;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickingAreaManager& operator=(ScriptTickingAreaManager const&);
    ScriptTickingAreaManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptTickingAreaManager();

    virtual ::EventResult onEvent(::LevelTickingAreaFinishedLoadingEvent const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<ScriptModuleMinecraft::ScriptTickingArea>
           _getTickingArea(::ScriptModuleMinecraft::ScriptTickingAreaManager::PromiseContext const&) const;

    MCNAPI bool _hasCapacity(::DimensionType const&, ::Bounds const&);

    MCNAPI bool _isUniqueIdentifier(std::string const&) const;

    MCNAPI bool _removeTickingAreas(std::vector<mce::UUID> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::EventResult $onEvent(::LevelTickingAreaFinishedLoadingEvent const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
