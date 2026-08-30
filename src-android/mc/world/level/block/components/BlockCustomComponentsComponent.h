#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentParameterCacheHandle.h"
#include "mc/world/level/block/components/BlockCustomComponentData.h"

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
// clang-format on

class BlockCustomComponentsComponent {
public:
    // BlockCustomComponentsComponent inner types declare
    // clang-format off
    struct ExecutableComponent;
    // clang-format on

    // BlockCustomComponentsComponent inner types define
    struct ExecutableComponent {
    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 8, ::HashedString const&> mName;
        ::ll::TypedStorage<8, 16, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const> mData;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface*>> mComponent;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        ExecutableComponent& operator=(ExecutableComponent const&);
        ExecutableComponent(ExecutableComponent const&);
        ExecutableComponent();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                   mIsCustomComponentsV1;
    ::ll::TypedStorage<1, 1, bool>                                   mHasPlayerInteractEvent;
    ::ll::UntypedStorage<1, 6>                                       mHasPlayerPlacingEvent;
    ::ll::UntypedStorage<1, 16>                                      mScriptRegistry;
    ::ll::TypedStorage<8, 24, std::vector<BlockCustomComponentData>> mCustomComponentData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCustomComponentsComponent& operator=(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent(BlockCustomComponentsComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<BlockCustomComponentsComponent::ExecutableComponent> _gatherComponentsToExecute() const;

    MCNAPI void finalize(
        ::WeakRef<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry> const&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
    );

    MCNAPI bool hasPlayerInteractEvent() const;

    MCNAPI bool hasPlayerPlacingEvent() const;

    MCNAPI bool isV1() const;

    MCNAPI std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
        void>>
           tryGetComponentsToExecute(::BlockType const&) const;
    // NOLINTEND
};
