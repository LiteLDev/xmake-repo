#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/IScriptSerializable.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class LevelStorage;
class StructureManager;
class StructureTemplate;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptStructureManager; }
namespace ScriptModuleMinecraft { struct ScriptInvalidStructureError; }
namespace Scripting { struct ClassBinding; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct EngineError; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStructureTemplate : public ::ScriptModuleMinecraft::IScriptSerializable {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string const>              mId;
    ::ll::UntypedStorage<8, 24>                               mStructureManager;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                 mLevelStorage;
    ::ll::UntypedStorage<8, 32>                               mScriptStructureManager;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string const>                               mId;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>> mStructureManager;
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                    mScope;
    ::ll::TypedStorage<8, 8, ::LevelStorage&>                                    mLevelStorage;
    ::ll::TypedStorage<8, 32, ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager>>
        mScriptStructureManager;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStructureTemplate& operator=(ScriptStructureTemplate const&);
    ScriptStructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptStructureTemplate();
#else // @header-generator platform
    virtual ::std::string const& getContentType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getContentType() const;
#else // @header-generator platform
    virtual ~ScriptStructureTemplate() /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result<Vec3, ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;
#else // @header-generator platform
    MCAPI ScriptStructureTemplate(::ScriptModuleMinecraft::ScriptStructureTemplate const&);

    MCAPI ScriptStructureTemplate(
        ::std::string const&                                                                id,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structureManager,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager> scriptStructureManager,
        ::LevelStorage&                                                                     levelStorage
    );

    MCAPI ::Scripting::InvalidArgumentError
    _createBoundsError(int index, ::BlockPos const& pos, ::BlockPos const& size) const;

    MCAPI ::Scripting::Result<::Vec3, ::ScriptModuleMinecraft::ScriptInvalidStructureError> getSize() const;

    MCAPI ::StructureTemplate* getStructureTemplate() const;
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
    MCNAPI static ::Scripting::EnumBinding bindAnimationModeEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindAnimationModeEnum();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindMirrorEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindMirrorEnum();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindRotationEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindRotationEnum();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::EnumBinding bindStructureSaveModeEnum();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindStructureSaveModeEnum();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptStructureTemplate const&);

    MCAPI void* $ctor(
        ::std::string const&                                                                id,
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                                   structureManager,
        ::Scripting::WeakLifetimeScope                                                      scope,
        ::Scripting::WeakTypedObjectHandle<::ScriptModuleMinecraft::ScriptStructureManager> scriptStructureManager,
        ::LevelStorage&                                                                     levelStorage
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getContentType() const;
#else // @header-generator platform
    MCFOLD ::std::string const& $getContentType() const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
