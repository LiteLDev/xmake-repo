#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ActorIndex.h"
#include "mc/client/renderer/actor/v2/ActorUniformBits.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/client/renderer/actor/v2/ActorIndex.h"
#include "mc/client/renderer/actor/v2/ActorUniformBits.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

struct ActorDerivitiveData {
public:
    // ActorDerivitiveData inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformEntry;
#else // @header-generator platform
#endif // @header-generator platform
    struct TileLightInformation;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct UniformEntry;
#endif // @header-generator platform
    // clang-format on

    // ActorDerivitiveData inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct UniformEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::ActorIndex>       mActorIdx;
        ::ll::TypedStorage<4, 4, uint>               mEnabledBits;
        ::ll::TypedStorage<4, 4, uint>               mColorOverrideOffset;
        ::ll::TypedStorage<1, 1, ::ActorUniformBits> mBits;
        // NOLINTEND
    };
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct TileLightInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>              mPos;
        ::ll::TypedStorage<4, 24, ::AABB>              mAabb;
        ::ll::TypedStorage<4, 4, float>                mHeightOffset;
        bool                                           mIsItem             : 1;
        bool                                           mHasUpsideDownLight : 1;
        ::ll::TypedStorage<8, 8, ::BlockSource const*> mBlockSource;
        // NOLINTEND
    };
#else // @header-generator platform
    struct TileLightInformation {};
#endif // @header-generator platform
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    struct TileLightInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>              mPos;
        ::ll::TypedStorage<4, 24, ::AABB>              mAabb;
        ::ll::UntypedStorage<4, 4>                     mHeightOffset;
        bool                                           mIsItem             : 1;
        bool                                           mHasUpsideDownLight : 1;
        ::ll::TypedStorage<8, 8, ::BlockSource const*> mBlockSource;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<ActorDerivitiveData::TileLightInformation>> mTileLightInfo;
    ::ll::TypedStorage<8, 24, std::vector<glm::vec<4, float, (glm::qualifier)0>>>     mColorOverrides;
    ::ll::TypedStorage<8, 24, std::vector<ActorDerivitiveData::UniformEntry>>         mUniformEntries;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ActorDerivitiveData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct UniformEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 8, ::ActorIndex>       mActorIdx;
        ::ll::TypedStorage<4, 4, uint>               mEnabledBits;
        ::ll::TypedStorage<4, 4, uint>               mColorOverrideOffset;
        ::ll::TypedStorage<1, 1, ::ActorUniformBits> mBits;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDerivitiveData::TileLightInformation>> mTileLightInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec4>>                                 mColorOverrides;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDerivitiveData::UniformEntry>>         mUniformEntries;
    // NOLINTEND
#else // @header-generator platform
    struct UniformEntry {};
#endif // @header-generator platform
#endif // @header-generator platform
};
