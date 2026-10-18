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
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockRaycastHit {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 32>                                     mBlock;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing> mFace;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mFaceLocationRelative;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>> mBlock;
    ::ll::TypedStorage<4, 4, ::ScriptModuleMinecraft::ScriptFacing>                                       mFace;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationAbsolute;
    ::ll::TypedStorage<4, 12, ::Vec3> mFaceLocationRelative;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockRaycastHit();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlockRaycastHit(
        ::BlockSource&                        source,
        ::BlockPos const&                     pos,
        uchar                                 face,
        ::Vec3 const&                         faceLocation,
        ::Scripting::WeakLifetimeScope const& scope
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::InterfaceBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockSource&                        source,
        ::BlockPos const&                     pos,
        uchar                                 face,
        ::Vec3 const&                         faceLocation,
        ::Scripting::WeakLifetimeScope const& scope
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
