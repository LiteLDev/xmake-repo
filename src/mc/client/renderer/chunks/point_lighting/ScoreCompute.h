#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace PointLighting::UpdatePhases {

struct ScoreCompute {
public:
    // ScoreCompute inner types declare
    // clang-format off
    struct PerHeuristicState;
    // clang-format on

    // ScoreCompute inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PerHeuristicState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, std::function<bool(const SubChunkPos&)>> mFilter;
        ::ll::TypedStorage<8, 8, ulong>                                    mLightContainerFilteredSize;
        ::ll::TypedStorage<8, 8, ulong>                                    mLightContainerOffset;
        ::ll::TypedStorage<4, 4, float>                                    mMaxScore;
        ::ll::TypedStorage<8, 40, std::unordered_map<BlockPos, float>>     mHeuristicScores;
        ::ll::UntypedStorage<1, 16>                                        mNormalized;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerHeuristicState& operator=(PerHeuristicState const&);
        PerHeuristicState(PerHeuristicState const&);
        PerHeuristicState();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PerHeuristicState(std::function<bool(const SubChunkPos&)>, ulong const);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(std::function<bool(const SubChunkPos&)>, ulong const);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mCurrentScores;
    ::ll::UntypedStorage<8, 528> mPerHeuristicState;
    // NOLINTEND

public:
    // prevent constructor by default
    ScoreCompute& operator=(ScoreCompute const&);
    ScoreCompute(ScoreCompute const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScoreCompute();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PerHeuristicState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<bool(::SubChunkPos const&)>> mFilter;
        ::ll::TypedStorage<8, 8, uint64>                                       mLightContainerFilteredSize;
        ::ll::TypedStorage<8, 8, uint64>                                       mLightContainerOffset;
        ::ll::TypedStorage<4, 4, float>                                        mMaxScore;
        ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>>     mHeuristicScores;
        ::ll::TypedStorage<1, 1, bool>                                         mNormalized;
        // NOLINTEND

    public:
        // prevent constructor by default
        PerHeuristicState();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI
        PerHeuristicState(::std::function<bool(::SubChunkPos const&)> filter, uint64 const lightContainerFilteredSize);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::function<bool(::SubChunkPos const&)> filter, uint64 const lightContainerFilteredSize);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, float>> mCurrentScores;
    ::ll::
        TypedStorage<8, 656, ::Bedrock::small_vector<::PointLighting::UpdatePhases::ScoreCompute::PerHeuristicState, 4>>
            mPerHeuristicState;
    // NOLINTEND
#else // @header-generator platform
    struct PerHeuristicState {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace PointLighting::UpdatePhases
