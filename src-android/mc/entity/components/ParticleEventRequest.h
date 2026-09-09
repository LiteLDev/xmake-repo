#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/BreakingItemParticleData.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
// clang-format on

struct ParticleEventRequest {
public:
    // ParticleEventRequest inner types declare
    // clang-format off
    struct BasicData;
    struct MolangData;
    struct TerrainData;
    struct BreakingItemData;
    struct TerrainSlideData;
    // clang-format on

    // ParticleEventRequest inner types define
    struct BasicData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ParticleType>                mType;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mDir;
        ::ll::TypedStorage<4, 4, int>                           mData;
        ::ll::TypedStorage<8, 16, std::shared_ptr<CompoundTag>> mTag;
        ::ll::TypedStorage<1, 1, bool>                          mIsGlobal;
        // NOLINTEND

    public:
        // prevent constructor by default
        BasicData& operator=(BasicData const&);
        BasicData();
    };

    struct MolangData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>      mEffect;
        ::ll::TypedStorage<4, 12, ::Vec3>              mPos;
        ::ll::TypedStorage<8, 56, ::MolangVariableMap> mVariables;
        // NOLINTEND

    public:
        // prevent constructor by default
        MolangData& operator=(MolangData const&);
        MolangData(MolangData const&);
        MolangData();
    };

    struct TerrainData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPos;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
        ::ll::TypedStorage<4, 4, float>                         mIntensity;
        ::ll::TypedStorage<4, 4, float>                         mVelocityScalar;
        ::ll::TypedStorage<4, 4, float>                         mEmitterRadius;
        // NOLINTEND

    public:
        // prevent constructor by default
        TerrainData& operator=(TerrainData const&);
        TerrainData(TerrainData const&);
        TerrainData();
    };

    struct BreakingItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                     mPos;
        ::ll::TypedStorage<4, 16, ::BreakingItemParticleData> mParticleData;
        ::ll::TypedStorage<8, 56, ::ResolvedItemIconInfo>     mTextureInfo;
        // NOLINTEND

    public:
        // prevent constructor by default
        BreakingItemData& operator=(BreakingItemData const&);
        BreakingItemData();
    };

    struct TerrainSlideData : public ::ParticleEventRequest::TerrainData {
    public:
        // prevent constructor by default
        TerrainSlideData& operator=(TerrainSlideData const&);
        TerrainSlideData(TerrainSlideData const&);
        TerrainSlideData();
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 120, std::variant<ParticleEventRequest::BasicData, ParticleEventRequest::MolangData, ParticleEventRequest::TerrainData, ParticleEventRequest::TerrainSlideData, ParticleEventRequest::BreakingItemData>> mData;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventRequest& operator=(ParticleEventRequest const&);
    ParticleEventRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ParticleEventRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ParticleEventRequest
    addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool);

    MCNAPI static ::ParticleEventRequest addParticleEffect(::HashedString, ::Vec3 const&, ::MolangVariableMap);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
