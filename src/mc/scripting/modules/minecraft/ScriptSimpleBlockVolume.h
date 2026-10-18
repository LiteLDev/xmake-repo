#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/block/SimpleBlockVolume.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
class BlockSource;
#if defined(LL_PLAT_A) // @header-generator platform
class SimpleBlockVolume;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    // prevent constructor by default
    ScriptSimpleBlockVolume& operator=(ScriptSimpleBlockVolume const&);
    ScriptSimpleBlockVolume();

public:
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptSimpleBlockVolume();
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<BaseBlockLocationIterator> createBlockLocationIterator();
#else // @header-generator platform
    virtual ::std::vector<::Vec3> getFoundBlocks(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<Vec3> getFoundBlocks(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;

    virtual bool containsBlock(::ScriptModuleMinecraft::ScriptChunkValidator const&, ::BlockSource const&, ::ScriptModuleMinecraft::ScriptBlockFilter const&) const;
    // clang-format on
#else // @header-generator platform
    virtual bool containsBlock(
        ::ScriptModuleMinecraft::ScriptChunkValidator const& chunkValidator,
        ::BlockSource const&                                 region,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&    filter
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSimpleBlockVolume(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);
#else // @header-generator platform
    MCAPI ScriptSimpleBlockVolume(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptSimpleBlockVolume(::Vec3 const&, ::Vec3 const&);

    MCNAPI ::Vec3 getFrom() const;

    MCNAPI ::Vec3 getTo() const;

    MCNAPI ::ScriptModuleMinecraft::ScriptSimpleBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);

    MCNAPI void setFrom(::Vec3 const&);

    MCNAPI void setTo(::Vec3 const&);
#else // @header-generator platform
    MCAPI ScriptSimpleBlockVolume(::Vec3 const& from, ::Vec3 const& to);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::ClassBinding bind();
#else // @header-generator platform
    MCAPI static ::Scripting::ClassBinding bind();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindEnums();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindEnums();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const&);
#else // @header-generator platform
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptSimpleBlockVolume const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::Vec3 const&, ::Vec3 const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::Vec3 const& from, ::Vec3 const& to);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator>
        $getBlockLocationIterator(::Scripting::WeakLifetimeScope);
#else // @header-generator platform
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    $getBlockLocationIterator(::Scripting::WeakLifetimeScope scope);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<BaseBlockLocationIterator> $createBlockLocationIterator();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::BaseBlockLocationIterator> $createBlockLocationIterator();
#endif // @header-generator platform

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
