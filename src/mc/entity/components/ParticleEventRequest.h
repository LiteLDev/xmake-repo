#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/world/actor/BreakingItemParticleData.h"
#include "mc/world/item/ResolvedItemIconInfo.h"
#include "mc/world/level/BlockPos.h"

#else // @header-generator platform
#endif // @header-generator platform
// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Block;
class CompoundTag;
#else // @header-generator platform
class HashedString;
class MolangVariableMap;
class Vec3;
#endif // @header-generator platform
// clang-format on

struct ParticleEventRequest {
public:
    // ParticleEventRequest inner types declare
    // clang-format off
    struct BasicData;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct BreakingItemData;
#endif // @header-generator platform
    struct MolangData;
    struct TerrainData;
#if defined(LL_PLAT_A) // @header-generator platform
    struct BreakingItemData;
#else // @header-generator platform
#endif // @header-generator platform
    struct TerrainSlideData;
    // clang-format on

    // ParticleEventRequest inner types define
    struct BasicData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::ParticleType>                mType;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mDir;
        ::ll::TypedStorage<4, 4, int>                           mData;
        ::ll::TypedStorage<8, 16, std::shared_ptr<CompoundTag>> mTag;
        ::ll::TypedStorage<1, 1, bool>                          mIsGlobal;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4>  mUnk9592ec;
        ::ll::UntypedStorage<4, 12> mUnk5ed19b;
        ::ll::UntypedStorage<4, 12> mUnkd4cecb;
        ::ll::UntypedStorage<4, 4>  mUnkd1dbbf;
        ::ll::UntypedStorage<8, 16> mUnk81b715;
        ::ll::UntypedStorage<1, 1>  mUnk8fbf2d;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        BasicData& operator=(BasicData const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        BasicData(BasicData const&);
#endif // @header-generator platform
        BasicData();
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    struct BreakingItemData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk5a4bf7;
        ::ll::UntypedStorage<4, 16> mUnkb9e8fd;
        ::ll::UntypedStorage<8, 64> mUnka77f79;
        // NOLINTEND

    public:
        // prevent constructor by default
        BreakingItemData& operator=(BreakingItemData const&);
        BreakingItemData(BreakingItemData const&);
        BreakingItemData();
#endif // @header-generator platform
    };

    struct MolangData {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 40, ::HashedString>      mEffect;
        ::ll::TypedStorage<4, 12, ::Vec3>              mPos;
        ::ll::TypedStorage<8, 56, ::MolangVariableMap> mVariables;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 48> mUnkb99c1a;
        ::ll::UntypedStorage<4, 12> mUnkb40aba;
        ::ll::UntypedStorage<8, 56> mUnk80ccba;
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 12, ::BlockPos>                   mBlockPos;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const Block*>> mBlock;
        ::ll::TypedStorage<4, 12, ::Vec3>                       mPos;
        ::ll::TypedStorage<4, 4, float>                         mIntensity;
        ::ll::TypedStorage<4, 4, float>                         mVelocityScalar;
        ::ll::TypedStorage<4, 4, float>                         mEmitterRadius;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 12> mUnk9daf0f;
        ::ll::UntypedStorage<8, 8>  mUnk130d0e;
        ::ll::UntypedStorage<4, 12> mUnkbf3dee;
        ::ll::UntypedStorage<4, 4>  mUnk562272;
        ::ll::UntypedStorage<4, 4>  mUnkc2c1ae;
        ::ll::UntypedStorage<4, 4>  mUnkc753fa;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        TerrainData& operator=(TerrainData const&);
        TerrainData(TerrainData const&);
        TerrainData();
    };

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    struct TerrainSlideData : public ::ParticleEventRequest::TerrainData {};
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        128,
        ::std::variant<
            ::ParticleEventRequest::BasicData,
            ::ParticleEventRequest::MolangData,
            ::ParticleEventRequest::TerrainData,
            ::ParticleEventRequest::TerrainSlideData,
            ::ParticleEventRequest::BreakingItemData>>
        mData;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::ParticleEventRequest
    addParticle(::ParticleType, ::Vec3 const&, ::Vec3 const&, int, ::CompoundTag const*, bool);

    MCNAPI static ::ParticleEventRequest addParticleEffect(::HashedString, ::Vec3 const&, ::MolangVariableMap);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::ParticleEventRequest
    addParticleEffect(::HashedString effect, ::Vec3 const& emitterPosition, ::MolangVariableMap molangVariables);
#endif // @header-generator platform
    // NOLINTEND
};
