#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/util/CloneMode.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Dimension;
class Level;
class Vec2;
class Vec3;
class VecXZ;
struct PlaySoundOptions;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptBiomeFilter; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
namespace ScriptModuleMinecraft { class ScriptSoundInstance; }
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
namespace ScriptModuleMinecraft { struct ScriptBiomeSearchOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockQueryOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace ScriptModuleMinecraft { struct ScriptSpawnEntityOptions; }
namespace ScriptModuleMinecraft { struct ScriptUnloadedChunksError; }
namespace ScriptModuleMinecraft { struct ScriptWorldSoundOptions; }
namespace Scripting { class DependencyLocator; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
namespace Scripting { struct JSON; }
namespace Scripting { struct NumberRange; }
namespace Scripting { struct PropertyOutOfBoundsError; }
namespace Scripting { struct UnsupportedAPIError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimension {
public:
    // ScriptDimension inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptDimension inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::DimensionType> mId;
        // NOLINTEND
    };

    using SpawnEntityResult = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::InvalidArgumentError,
        ScriptModuleMinecraft::ScriptActorSpawnError>;

    using GetBlocksResult = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptListBlockVolume>,
        ScriptModuleMinecraft::ScriptUnloadedChunksError,
        Scripting::InvalidArgumentError,
        Scripting::ArgumentOutOfBoundsError,
        Scripting::Error>;

    using SpawnEntityResult_Internal = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError,
        ScriptModuleMinecraft::ScriptActorSpawnError>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Dimension*>>     mDimension;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimension& operator=(ScriptDimension const&);
    ScriptDimension();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDimension();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::nonstd::
        expected<std::vector<Vec3>, std::variant<ScriptModuleMinecraft::ScriptUnloadedChunksError, Scripting::Error>>
        _getBlockPositions(
            ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockVolumeBase> const&,
            ::ScriptModuleMinecraft::ScriptBlockFilter const&,
            bool
        ) const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError,
        ScriptModuleMinecraft::ScriptActorSpawnError>
    _spawnEntity(
        std::variant<ScriptModuleMinecraft::ScriptActorType, std::string> const&,
        std::variant<BlockPos, Vec3> const&,
        ::Vec2 const&,
        bool,
        bool,
        std::string const&
    ) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(::Scripting::WeakLifetimeScope, ::Vec3 const&) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>>
    getBlockAbove(
        ::Scripting::WeakLifetimeScope,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&
    ) const;

    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>>
    getBlockBelow(
        ::Scripting::WeakLifetimeScope,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&
    ) const;

    MCNAPI ::Dimension& getDimension() const;

    MCNAPI ::DimensionType getDimensionId() const;

    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>
           getEntitiesAtBlockLocation_V010(::BlockPos const&) const;

    MCNAPI ::Scripting::
        Result<int, Scripting::InvalidArgumentError, ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getLightLevel(::Vec3 const&) const;

    MCNAPI ::Scripting::
        Result<int, Scripting::InvalidArgumentError, ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getSkyLightLevel(::Vec3 const&) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptDimension& operator=(::ScriptModuleMinecraft::ScriptDimension&&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSoundInstance>,
        Scripting::PropertyOutOfBoundsError,
        Scripting::EngineError>
    playSound(
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptWorldSoundOptions>
    );

    MCNAPI ::Scripting::Result_deprecated<Scripting::Promise<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
        ScriptModuleMinecraft::ScriptCommandError>>
    runCommandAsync(
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::ScriptObjectFactory&,
        std::string const&
    );

    MCNAPI ::Scripting::Result_deprecated<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(::ScriptModuleMinecraft::ScriptItemStack const&, std::variant<BlockPos, Vec3> const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();

    MCNAPI static ::Scripting::EnumBinding bindScriptWeatherType();

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::Dimension&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::DimensionType, ::Level&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
