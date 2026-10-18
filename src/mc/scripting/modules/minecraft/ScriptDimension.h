#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/TypedObjectHandle.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/scripting/modules/minecraft/ScriptWeatherType.h"
#include "mc/util/CloneMode.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockSource;
#else // @header-generator platform
#endif // @header-generator platform
class Dimension;
class Level;
class Vec2;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
class VecXZ;
struct PlaySoundOptions;
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActor; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActorIterator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptActorType; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBiomeFilter; }
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlock; }
namespace ScriptModuleMinecraft { class ScriptBlockFilter; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockRaycastHit; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptEntityRaycastHit; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptListBlockVolume; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptMolangVariableMap; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { class ScriptPlayerIterator; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptSoundInstance; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { class ScriptVector; }
namespace ScriptModuleMinecraft { struct ScriptActorQueryOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBiomeSearchOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockFillOptions; }
namespace ScriptModuleMinecraft { struct ScriptBlockQueryOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptBlockRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptCommandError; }
namespace ScriptModuleMinecraft { struct ScriptCommandResult; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptEntityRaycastOptions; }
namespace ScriptModuleMinecraft { struct ScriptExplosionOptions; }
#else // @header-generator platform
#endif // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace ScriptModuleMinecraft { struct ScriptSpawnEntityOptions; }
#else // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct JSON; }
namespace Scripting { struct NumberRange; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting { struct PropertyOutOfBoundsError; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Scripting { struct UnsupportedAPIError; }
#else // @header-generator platform
#endif // @header-generator platform
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

#if defined(LL_PLAT_A) // @header-generator platform
    using SpawnEntityResult = ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::InvalidArgumentError,
        ScriptModuleMinecraft::ScriptActorSpawnError>;

#else // @header-generator platform
#endif // @header-generator platform
    using GetBlocksResult = ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptListBlockVolume>,
        ScriptModuleMinecraft::ScriptUnloadedChunksError,
        Scripting::InvalidArgumentError,
        Scripting::ArgumentOutOfBoundsError,
        Scripting::Error>;
#else // @header-generator platform
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptListBlockVolume>,
        ::ScriptModuleMinecraft::ScriptUnloadedChunksError,
        ::Scripting::InvalidArgumentError,
        ::Scripting::ArgumentOutOfBoundsError,
        ::Scripting::Error>;

    using SpawnEntityResult = ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>;
#endif // @header-generator platform

    using SpawnEntityResult_Internal = ::Scripting::Result<
#if defined(LL_PLAT_A) // @header-generator platform
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>,
        ScriptModuleMinecraft::ScriptInvalidActorError,
        Scripting::InvalidArgumentError,
        ScriptModuleMinecraft::ScriptActorSpawnError>;
#else // @header-generator platform
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<Dimension*>>     mDimension;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Dimension*>>   mDimension;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    ScriptDimension& operator=(ScriptDimension const&);
    ScriptDimension();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDimension();
#else // @header-generator platform
    virtual ~ScriptDimension() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::nonstd::expected<
        ::std::vector<::Vec3>,
        ::std::variant<::ScriptModuleMinecraft::ScriptUnloadedChunksError, ::Scripting::Error>>
    _getBlockPositions(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockVolumeBase> const& blockVolumeBase,
        ::ScriptModuleMinecraft::ScriptBlockFilter const&                                           filter,
        bool                                                                                        allowUnloadedChunks
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError,
        ::ScriptModuleMinecraft::ScriptActorSpawnError>
    _spawnEntity(
        ::std::variant<::ScriptModuleMinecraft::ScriptActorType, ::std::string> const& identifier,
        ::std::variant<::BlockPos, ::Vec3> const&                                      pos,
        ::Vec2 const&                                                                  rotation,
        bool                                                                           initialPersistence,
        bool                                                                           allowActorDefinitionSpawnEvent,
        ::std::string const&                                                           spawnEvent
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>>
    getBlockBelow(
        ::Scripting::WeakLifetimeScope,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptBlockRaycastOptions> const&
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getBlock(::Scripting::WeakLifetimeScope scope, ::Vec3 const& position) const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockAbove(
        ::Scripting::WeakLifetimeScope                                             scope,
        ::Vec3 const&                                                              pos,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Dimension& getDimension() const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>>
    getBlockBelow(
        ::Scripting::WeakLifetimeScope                                             scope,
        ::Vec3 const&                                                              pos,
        ::std::optional<::ScriptModuleMinecraft::ScriptBlockRaycastOptions> const& options
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::DimensionType getDimensionId() const;
#else // @header-generator platform
    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    getEntitiesAtBlockLocation_V010(::BlockPos const& pos) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>
           getEntitiesAtBlockLocation_V010(::BlockPos const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<int, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getLightLevel(::Vec3 const& location) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<int, Scripting::InvalidArgumentError, ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getLightLevel(::Vec3 const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::
        Result<int, ::Scripting::InvalidArgumentError, ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getSkyLightLevel(::Vec3 const& location) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::
        Result<int, Scripting::InvalidArgumentError, ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getSkyLightLevel(::Vec3 const&) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptDimension& operator=(::ScriptModuleMinecraft::ScriptDimension&&);

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptSoundInstance>,
        Scripting::PropertyOutOfBoundsError,
        Scripting::EngineError>
#else // @header-generator platform
    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptSoundInstance>,
        ::Scripting::PropertyOutOfBoundsError,
        ::Scripting::EngineError>
#endif // @header-generator platform
    playSound(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::WeakLifetimeScope const&,
        std::string const&,
        ::Vec3 const&,
        std::optional<ScriptModuleMinecraft::ScriptWorldSoundOptions>
#else // @header-generator platform
        ::Scripting::WeakLifetimeScope const&                             scope,
        ::std::string const&                                              soundID,
        ::Vec3 const&                                                     location,
        ::std::optional<::ScriptModuleMinecraft::ScriptWorldSoundOptions> soundOptions
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<Scripting::Promise<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptCommandResult>,
        ScriptModuleMinecraft::ScriptCommandError>>
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::Scripting::Promise<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCommandResult>,
        ::ScriptModuleMinecraft::ScriptCommandError>>
#endif // @header-generator platform
    runCommandAsync(
#if defined(LL_PLAT_A) // @header-generator platform
        ::Scripting::DependencyLocator&,
        ::Scripting::ContextConfig const&,
        ::Scripting::ScriptObjectFactory&,
        std::string const&
#else // @header-generator platform
        ::Scripting::DependencyLocator&   locator,
        ::Scripting::ContextConfig const& contextConfig,
        ::Scripting::ScriptObjectFactory& factory,
        ::std::string const&              commandString
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Scripting::Result_deprecated<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(::ScriptModuleMinecraft::ScriptItemStack const&, std::variant<BlockPos, Vec3> const&) const;
#else // @header-generator platform
    MCAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>
    spawnItem_V010(
        ::ScriptModuleMinecraft::ScriptItemStack const& scriptItemStack,
        ::std::variant<::BlockPos, ::Vec3> const&       pos
    ) const;
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
    MCNAPI static ::Scripting::EnumBinding bindScriptWeatherType();
#else // @header-generator platform
    MCAPI static ::Scripting::EnumBinding bindScriptWeatherType();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::Dimension&, ::Scripting::WeakLifetimeScope const&);

    MCNAPI static ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::DimensionType, ::Level&, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>
    getOrCreateHandle(::DimensionType id, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
