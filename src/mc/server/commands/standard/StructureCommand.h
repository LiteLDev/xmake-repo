#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/standard/StructureActionType.h"
#include "mc/util/AnimationMode.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/StructureRedstoneSaveMode.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class DimensionHeightRange;
struct ActorUniqueID;
#else // @header-generator platform
class Level;
class StructureEditorData;
#endif // @header-generator platform
// clang-format on

class StructureCommand : public ::Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::StructureActionType>       mAction;
    ::ll::TypedStorage<1, 1, ::StructureRedstoneSaveMode> mSaveMode;
    ::ll::TypedStorage<1, 1, ::Rotation>                  mRotation;
    ::ll::TypedStorage<1, 1, ::Mirror>                    mMirror;
    ::ll::TypedStorage<1, 1, ::AnimationMode>             mAnimationMode;
    ::ll::TypedStorage<4, 4, float>                       mAnimationTimeSeconds;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                mName;
    ::ll::TypedStorage<8, 24, std::string>                mSeed;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string>              mName;
    ::ll::TypedStorage<8, 32, ::std::string>              mSeed;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>          mFrom;
    ::ll::TypedStorage<4, 16, ::CommandPosition>          mTo;
    ::ll::TypedStorage<4, 4, float>                       mIntegrity;
    ::ll::TypedStorage<1, 1, bool>                        mSeedSpecified;
    ::ll::TypedStorage<1, 1, bool>                        mIncludeEntities;
    ::ll::TypedStorage<1, 1, bool>                        mIncludeBlocks;
    ::ll::TypedStorage<1, 1, bool>                        mWaterlogged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~StructureCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI uint _generateSeed() const;
#else // @header-generator platform
    MCAPI void _editorLoad(
        ::CommandOrigin const& origin,
        ::CommandOutput&       output,
        ::Level&               level,
        ::std::string const&   fullName,
        ::BlockPos const&      loadPosition,
        ::StructureEditorData& settings
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _getFullName() const;

    MCNAPI ::ActorUniqueID _getPlayerId(::CommandOrigin const&) const;
#else // @header-generator platform
    MCAPI ::std::string _getFullName() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry, bool isEditorWorld);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
