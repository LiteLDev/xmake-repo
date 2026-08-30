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
class DimensionHeightRange;
struct ActorUniqueID;
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
    ::ll::TypedStorage<8, 24, std::string>                mName;
    ::ll::TypedStorage<8, 24, std::string>                mSeed;
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
    virtual ~StructureCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint _generateSeed() const;

    MCNAPI std::string _getFullName() const;

    MCNAPI ::ActorUniqueID _getPlayerId(::CommandOrigin const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
