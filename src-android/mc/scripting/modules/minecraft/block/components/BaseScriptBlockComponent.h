#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/components/ScriptComponent.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class BaseScriptBlockComponent : public ::ScriptModuleMinecraft::ScriptComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockSource*> mBlockSource;
    ::ll::TypedStorage<8, 8, ::Block const*> mBlock;
    ::ll::TypedStorage<4, 12, ::BlockPos>    mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseScriptBlockComponent& operator=(BaseScriptBlockComponent const&);
    BaseScriptBlockComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseScriptBlockComponent();

    virtual bool _isValid() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    BaseScriptBlockComponent(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&, std::string const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&, std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
