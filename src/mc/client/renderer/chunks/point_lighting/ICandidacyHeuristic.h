#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace PointLighting { struct ManagedPointLight; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace PointLighting { struct ManagedPointLight; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace PointLighting {

struct ICandidacyHeuristic {
public:
    // ICandidacyHeuristic inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class Statefulness : int {
        Stateful   = 0,
        Persistent = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PointLighting::ICandidacyHeuristic::Statefulness> mStatefulness;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICandidacyHeuristic();

    virtual bool reject(::SubChunkPos const&) const;

    virtual float computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    enum class Statefulness : int {
        Stateful   = 0,
        Persistent = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PointLighting::ICandidacyHeuristic::Statefulness> mStatefulness;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICandidacyHeuristic() = default;

    virtual bool reject(::SubChunkPos const& subChunkPos) const;

    virtual float computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const&) const = 0;
    // NOLINTEND
#else // @header-generator platform
    enum class Statefulness : int {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace PointLighting
