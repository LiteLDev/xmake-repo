#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/levelgen/v2/PoolElementStructureSection.h"

#endif // @header-generator platform

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
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<br::worldgen::PoolElementStructureSection>> mSection;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                mOriginPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                             mChunkBounds;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                             mRegionOverride;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawReplacement>                          mJigsawReplacement;
    ::ll::TypedStorage<1, 1, bool>                                                       mIncludeEntities;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                             mLiquidSettings;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::br::worldgen::PoolElementStructureSection>> mSection;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                    mOriginPos;
    ::ll::TypedStorage<4, 24, ::BoundingBox>                                                 mChunkBounds;
    ::ll::TypedStorage<8, 8, ::BlockSource*>                                                 mRegionOverride;
    ::ll::TypedStorage<1, 1, ::br::worldgen::JigsawReplacement>                              mJigsawReplacement;
    ::ll::TypedStorage<1, 1, bool>                                                           mIncludeEntities;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings>                                 mLiquidSettings;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~JigsawStructurePostprocessAction();
#else // @header-generator platform
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::ServerLevel&, ::Dimension&);

    virtual void serialize(::CompoundTag&);
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isValidTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static bool isValidTag(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<JigsawStructurePostprocessAction>
    load(::CompoundTag const&, ::JigsawStructureElementRegistry const&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::JigsawStructurePostprocessAction>
    load(::CompoundTag const& tag, ::JigsawStructureElementRegistry const& elementReg);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<cereal::ReflectionCtx>& mCerealContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::cereal::ReflectionCtx>& mCerealContext();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::CompoundTag&);
#else // @header-generator platform
    MCAPI void $serialize(::CompoundTag& tag);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
