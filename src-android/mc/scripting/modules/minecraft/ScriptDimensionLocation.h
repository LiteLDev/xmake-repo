#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct WorldPosition;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDimensionLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>     mDimension;
    ::ll::TypedStorage<4, 4, float> mX;
    ::ll::TypedStorage<4, 4, float> mY;
    ::ll::TypedStorage<4, 4, float> mZ;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDimensionLocation();

    MCNAPI ScriptDimensionLocation(
        ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension> const&,
        float,
        float,
        float
    );

    MCNAPI ::Vec3 getLocation() const;

    MCNAPI ::WorldPosition getWorldPosition() const;

    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptDimensionLocation const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void*
    $ctor(::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension> const&, float, float, float);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
