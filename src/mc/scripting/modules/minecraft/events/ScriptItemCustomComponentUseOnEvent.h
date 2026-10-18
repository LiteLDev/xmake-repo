#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/events/ScriptCustomComponentPubSubConnectors.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentAfterEvent.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemCustomComponentIntermediateStorage.h"
#include "mc/scripting/modules/minecraft/events/ScriptItemUseOnEvent.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class ComponentItem;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { class WeakLifetimeScope; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemCustomComponentUseOnEvent : public ::ScriptModuleMinecraft::ScriptItemCustomComponentAfterEvent,
                                             public ::ScriptModuleMinecraft::ScriptItemUseOnEvent {
public:
    // ScriptItemCustomComponentUseOnEvent inner types declare
    // clang-format off
    struct IntermediateStorage;
    // clang-format on

    // ScriptItemCustomComponentUseOnEvent inner types define
    struct IntermediateStorage : public ::ScriptModuleMinecraft::ScriptItemCustomComponentIntermediateStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack const>    mItemStack;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 24, ::WeakEntityRef const> mEntity;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::WeakEntityRef const> mEntity;
#endif // @header-generator platform
        ::ll::TypedStorage<8, 8, ::Block const&>         mBlock;
        ::ll::TypedStorage<8, 8, ::BlockSource&>         mRegion;
        ::ll::TypedStorage<4, 12, ::BlockPos const>      mBlockPos;
        ::ll::TypedStorage<1, 1, uchar const>            mFace;
        ::ll::TypedStorage<4, 12, ::Vec3 const>          mFaceLocation;
        // NOLINTEND

    public:
        // prevent constructor by default
        IntermediateStorage& operator=(IntermediateStorage const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        IntermediateStorage(IntermediateStorage const&);
#endif // @header-generator platform
        IntermediateStorage();
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~IntermediateStorage();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
    };

    using EventConnectorsType = ::ScriptModuleMinecraft::ScriptCustomComponentPubSubConnectors<
#if defined(LL_PLAT_A) // @header-generator platform
        void(bool&, const ItemStack&, ItemStack&, Actor&, BlockPos, uchar, const Vec3&)>;
#else // @header-generator platform
        void(bool&, ::ItemStack const&, ::ItemStack&, ::Actor&, ::BlockPos, uchar, ::Vec3 const&)>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32> mEntity;
    ::ll::UntypedStorage<8, 32> mUsedBlockPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemCustomComponentUseOnEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptItemCustomComponentUseOnEvent();
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> mEntity;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>>
        mUsedBlockPermutation;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
