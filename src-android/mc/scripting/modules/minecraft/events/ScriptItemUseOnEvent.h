#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptItemUseOnEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>                                     mScriptItem;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationRelative;
    ::ll::UntypedStorage<8, 32>                                     mBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptItemUseOnEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptItemUseOnEvent(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        uchar,
        ::Vec3,
        ::BlockPos,
        ::BlockSource&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptItemStack>,
        uchar,
        ::Vec3,
        ::BlockPos,
        ::BlockSource&,
        ::Scripting::WeakLifetimeScope const&
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
