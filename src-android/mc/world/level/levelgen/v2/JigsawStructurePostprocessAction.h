#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/IRequestAction.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class CompoundTag;
class Dimension;
class JigsawStructureElementRegistry;
class ServerLevel;
namespace br::worldgen { class PoolElementStructureSection; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class JigsawStructurePostprocessAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<br::worldgen::PoolElementStructureSection>> mSection;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                mOriginPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                             mChunkBounds;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                             mRegionOverride;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawReplacement>                          mJigsawReplacement;
    ::ll::TypedStorage<1, 1, bool>                                                       mIncludeEntities;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                             mLiquidSettings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~JigsawStructurePostprocessAction();

    virtual void execute(::ServerLevel&, ::Dimension&);

    virtual void serialize(::CompoundTag&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::CompoundTag const&);

    MCNAPI static std::unique_ptr<JigsawStructurePostprocessAction>
    load(::CompoundTag const&, ::JigsawStructureElementRegistry const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<cereal::ReflectionCtx>& mCerealContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::ServerLevel&, ::Dimension&);

    MCNAPI void $serialize(::CompoundTag&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
