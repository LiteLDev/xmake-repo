#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptBlockVolumeBase.h"

// auto generated forward declare list
// clang-format off
class BaseBlockLocationIterator;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class ListBlockVolume;
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ScriptListBlockVolume();
#else // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockLocationIterator>
    getBlockLocationIterator(::Scripting::WeakLifetimeScope scope) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockLocationIterator> getBlockLocationIterator(::Scripting::WeakLifetimeScope);

    virtual std::unique_ptr<BaseBlockLocationIterator> createBlockLocationIterator();
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::BaseBlockLocationIterator> createBlockLocationIterator() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptListBlockVolume(std::vector<Vec3> const&);
#else // @header-generator platform
    MCAPI ScriptListBlockVolume();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit ScriptListBlockVolume(std::vector<BlockPos> const&);
#else // @header-generator platform
    MCAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void add(std::vector<Vec3> const&);
#else // @header-generator platform
    MCAPI ScriptListBlockVolume(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void remove(std::vector<Vec3> const&);
#else // @header-generator platform
    MCAPI void add(::std::vector<::Vec3> const& locations);

    MCAPI ::ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);

    MCAPI ::ScriptModuleMinecraft::ScriptListBlockVolume&
    operator=(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);

    MCAPI void remove(::std::vector<::Vec3> const& locations);
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<Vec3> const&);
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::vector<BlockPos> const&);
    // NOLINTEND
#else // @header-generator platform
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume&& rhs);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCFOLD void* $ctor(::ScriptModuleMinecraft::ScriptListBlockVolume const& rhs);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
