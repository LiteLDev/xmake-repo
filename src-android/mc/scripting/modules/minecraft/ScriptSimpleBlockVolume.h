#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"
#include "mc/world/level/block/SimpleBlockVolume.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockSource;
class SimpleBlockVolume;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptChunkValidator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptSimpleBlockVolume : public ::ScriptModuleMinecraft::ScriptBlockVolumeBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptSimpleBlockVolume();

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope);

    virtual std::unique_ptr<BaseBlockLocationIterator> createBlockLocationIterator();

    virtual std::vector<Vec3> getFoundBlocks(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;

    virtual bool containsBlock(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSimpleBlockVolume(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCNAPI ScriptSimpleBlockVolume(::Vec3 const&, ::Vec3 const&);

    MCNAPI ::Vec3 getFrom() const;

    MCNAPI ::Vec3 getTo() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptSimpleBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCNAPI void setFrom(::Vec3 const&);

    MCNAPI void setTo(::Vec3 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindEnums();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&);
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

    MCNAPI std::vector<Vec3> $getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const&,
        ::BlockSource const&,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&
    ) const;

    MCNAPI bool $containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const&,
        ::BlockSource const&,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
