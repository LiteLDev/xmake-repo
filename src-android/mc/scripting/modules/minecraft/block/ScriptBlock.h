#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockComponents; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope> mScope;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                  mBlockSource;
    ::ll::TypedStorage<4, 12, ::BlockPos>                     mPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlock& operator=(ScriptBlock const&);
    ScriptBlock(ScriptBlock const&);
    ScriptBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptBlock(::ScriptModuleMinecraft::ScriptBlock&&);

    MCNAPI ScriptBlock(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&);

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    above(int) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    below(int) const;

    MCNAPI ::Vec3 bottomCenter() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::Error>
        canBeDestroyedByLiquidSpread(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::Error>
        canContainLiquid(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Vec3 center() const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    east(int) const;

    MCNAPI ::Block const& getBlock() const;

    MCNAPI ::BlockPos const& getBlockPos() const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::BaseScriptBlockComponent>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getComponent_V2(::ScriptModuleMinecraft::ScriptBlockComponents const&, std::string_view);

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    MCNAPI ::Scripting::
        Result<int, Scripting::InvalidArgumentError, ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getLightLevel() const;

    MCNAPI ::Scripting::Result<
        std::string,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getLocalizationKey() const;

    MCNAPI ::Scripting::Result_deprecated<Vec3> getLocation() const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockPermutation>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPermutation() const;

    MCNAPI ::Scripting::
        Result<int, Scripting::InvalidArgumentError, ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError>
        getSkyLightLevel() const;

    MCNAPI ::Scripting::Result<
        Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getType() const;

    MCNAPI ::Scripting::Result<
        std::string,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTypeId() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType> getType_010() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getWaterlogged() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isAir() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isLiquid() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::Error>
        isLiquidBlocking(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isSolid() const;

    MCNAPI ::Scripting::Result<
        bool,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::Error>
        liquidSpreadCausesSpawn(::SharedTypes::v1_26_0::LiquidType) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    north(int) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    offset(::Vec3 const&) const;

    MCNAPI ::ScriptModuleMinecraft::ScriptBlock& operator=(::ScriptModuleMinecraft::ScriptBlock&&);

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    south(int) const;

    MCNAPI ::Scripting::Result<
        std::optional<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlock>>,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    west(int) const;

    MCNAPI ~ScriptBlock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(std::shared_ptr<ScriptModuleMinecraft::ScriptBlockComponents> const&);

    MCNAPI static ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutationStatic(::BlockSource&, ::BlockPos const&, ::ScriptModuleMinecraft::ScriptBlockPermutation const&);

    MCNAPI static ::Scripting::Result<
        void,
        ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        Scripting::Error>
    setTypeStatic(
        ::BlockSource&,
        ::BlockPos const&,
        std::variant<Scripting::StrongTypedObjectHandle<ScriptModuleMinecraft::ScriptBlockType>, std::string> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlock&&);

    MCNAPI void* $ctor(::BlockSource&, ::BlockPos, ::Scripting::WeakLifetimeScope const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
