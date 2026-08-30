#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class ListBlockVolume;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptListBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptListBlockVolume();

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope);

    virtual std::unique_ptr<BaseBlockLocationIterator> createBlockLocationIterator();
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptListBlockVolume(std::vector<Vec3> const&);

    MCNAPI explicit ScriptListBlockVolume(std::vector<BlockPos> const&);

    MCNAPI void add(std::vector<Vec3> const&);

    MCNAPI void remove(std::vector<Vec3> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<Vec3> const&);

    MCNAPI void* $ctor(std::vector<BlockPos> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator>
        $getBlockLocationIterator(::Scripting::WeakLifetimeScope);

    MCNAPI std::unique_ptr<BaseBlockLocationIterator> $createBlockLocationIterator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
