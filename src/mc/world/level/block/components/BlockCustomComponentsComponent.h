#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/scripting/modules/minecraft/ScriptCustomComponentParameterCacheHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/components/BlockCustomComponentData.h"
#else // @header-generator platform
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentToExecute.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockType;
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct BlockCustomComponentData;
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentInterface; }
namespace ScriptModuleMinecraft { class ScriptBlockCustomComponentsRegistry; }
namespace ScriptModuleMinecraft { class ScriptCustomComponentParameterCache; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { template<typename T0, typename T1> class ScriptCustomComponentToExecute; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 8, ::HashedString const&> mName;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::HashedString const&>                                                     mName;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 16, ::ScriptModuleMinecraft::ScriptCustomComponentParameterCacheHandle const> mData;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface*>> mComponent;
        // clang-format on
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const*>>
            mComponent;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<1, 1, bool>                                   mIsCustomComponentsV1;
    ::ll::TypedStorage<1, 1, bool>                                   mHasPlayerInteractEvent;
    ::ll::UntypedStorage<1, 6>                                       mHasPlayerPlacingEvent;
    ::ll::UntypedStorage<1, 16>                                      mScriptRegistry;
    ::ll::TypedStorage<8, 24, std::vector<BlockCustomComponentData>> mCustomComponentData;
#else // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mIsCustomComponentsV1;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerInteractEvent;
    ::ll::TypedStorage<1, 1, bool> mHasPlayerPlacingEvent;
    ::ll::TypedStorage<8, 16, ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry>> mScriptRegistry;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockCustomComponentData>> mCustomComponentData;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    BlockCustomComponentsComponent& operator=(BlockCustomComponentsComponent const&);
    BlockCustomComponentsComponent(BlockCustomComponentsComponent const&);
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<BlockCustomComponentsComponent::ExecutableComponent> _gatherComponentsToExecute() const;
#else // @header-generator platform
    MCAPI ::std::vector<::BlockCustomComponentsComponent::ExecutableComponent> _gatherComponentsToExecute() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void finalize(
        ::WeakRef<ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry> const&,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&
#else // @header-generator platform
    MCAPI void finalize(
        ::WeakRef<::ScriptModuleMinecraft::ScriptBlockCustomComponentsRegistry> const& registry,
        ::ScriptModuleMinecraft::ScriptCustomComponentParameterCache&                  parameterCache
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasPlayerInteractEvent() const;

    MCNAPI bool hasPlayerPlacingEvent() const;

    MCNAPI bool isV1() const;

    MCNAPI std::vector<ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        const ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&,
#else // @header-generator platform
    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptCustomComponentToExecute<
        ::ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&,
#endif // @header-generator platform
        void>>
#if defined(LL_PLAT_A) // @header-generator platform
           tryGetComponentsToExecute(::BlockType const&) const;
#else // @header-generator platform
    tryGetComponentsToExecute(::BlockType const& baseBlock) const;
#endif // @header-generator platform
    // NOLINTEND
};
