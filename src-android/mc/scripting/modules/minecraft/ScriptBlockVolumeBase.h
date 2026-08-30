#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockPos;
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
class ChunkPos;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockLocationIterator; }
namespace ScriptModuleMinecraft { class ScriptChunkValidator; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockVolumeBase : public ::ScriptModuleMinecraft::ScriptBlockVolumeIterable,
                              public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptBlockVolumeBase> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<BlockVolumeBase>>> mBlockVolumeBase;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlockVolumeBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ScriptBlockVolumeBase();

    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope) = 0;

    virtual std::unique_ptr<BaseBlockLocationIterator> createBlockLocationIterator() = 0;

    virtual std::vector<Vec3> getFoundBlocks(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;

    virtual bool containsBlock(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ScriptBlockVolumeBase(std::unique_ptr<BlockVolumeBase>);

    MCNAPI void forEach(std::function<bool(const BlockPos&)>) const;

    MCNAPI ::Scripting::Result_deprecated<BoundingBox> getBoundingBox() const;

    MCNAPI int getCapacity() const;

    MCNAPI std::set<ChunkPos> getChunks() const;

    MCNAPI ::Scripting::Result<std::vector<Vec3>, Scripting::ArgumentOutOfBoundsError>
    getClosest(uint, ::Vec3 const&) const;

    MCNAPI ::Scripting::Result<std::vector<Vec3>, Scripting::ArgumentOutOfBoundsError>
    getFarthest(uint, ::Vec3 const&) const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getMax() const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getMin() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<BlockVolumeBase>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
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
