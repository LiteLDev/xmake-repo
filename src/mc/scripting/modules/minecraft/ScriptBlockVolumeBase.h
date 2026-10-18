#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/block/BlockVolumeBase.h"
#endif // @header-generator platform

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeIterable.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
#else // @header-generator platform
#endif // @header-generator platform
class BlockSource;
class BlockVolumeBase;
class BoundingBox;
#if defined(LL_PLAT_A) // @header-generator platform
class ChunkPos;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
                              public ::Scripting::WeakHandleFromThis<ScriptModuleMinecraft::ScriptBlockVolumeBase> {
#else // @header-generator platform
                              public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptBlockVolumeBase> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<std::unique_ptr<BlockVolumeBase>>> mBlockVolumeBase;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::BlockVolumeBase>>> mBlockVolumeBase;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptBlockVolumeBase();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptBlockVolumeBase();
#else // @header-generator platform
    virtual ~ScriptBlockVolumeBase() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope) = 0;
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BaseBlockLocationIterator> createBlockLocationIterator() = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Vec3> getFoundBlocks(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;
#else // @header-generator platform
    virtual ::std::vector<::Vec3> getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool containsBlock(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptBlockVolumeBase(std::unique_ptr<BlockVolumeBase>);
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::BoundingBox> getBoundingBox() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void forEach(std::function<bool(const BlockPos&)>) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::Vec3>, ::Scripting::ArgumentOutOfBoundsError>
    getClosest(uint count, ::Vec3 const& location) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<BoundingBox> getBoundingBox() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result<::std::vector<::Vec3>, ::Scripting::ArgumentOutOfBoundsError>
    getFarthest(uint count, ::Vec3 const& location) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int getCapacity() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::Vec3> getMax() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::set<ChunkPos> getChunks() const;

    MCNAPI ::Scripting::Result<std::vector<Vec3>, Scripting::ArgumentOutOfBoundsError>
    getClosest(uint, ::Vec3 const&) const;

    MCNAPI ::Scripting::Result<std::vector<Vec3>, Scripting::ArgumentOutOfBoundsError>
    getFarthest(uint, ::Vec3 const&) const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getMax() const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getMin() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::Vec3> getMin() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Vec3> $getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const&,
        ::BlockSource const&,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&
#else // @header-generator platform
    MCAPI ::std::vector<::Vec3> $getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const&,
        ::BlockSource const&,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&
#else // @header-generator platform
    MCAPI bool $containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
