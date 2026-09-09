#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptTickingArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>              mDimension;
    ::ll::TypedStorage<4, 24, ::BoundingBox> mBoundingBox;
    ::ll::TypedStorage<8, 24, std::string>   mIdentifier;
    ::ll::TypedStorage<4, 4, int>            mNumberOfChunks;
    ::ll::TypedStorage<1, 1, bool>           mIsFullyLoaded;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::ScriptModuleMinecraft::ScriptTickingArea const&) const;

    MCNAPI ~ScriptTickingArea();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
