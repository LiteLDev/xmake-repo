#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ICandidacyHeuristic.h"
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class SubChunkPos;
namespace PointLighting { struct ManagedPointLight; }
// clang-format on

namespace PointLighting {

struct LightDistanceToPlayerHeuristic : public ::PointLighting::ICandidacyHeuristic {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3> mPlayerPos;
    ::ll::TypedStorage<4, 4, float>   mMinDistance;
    // NOLINTEND

public:
    // prevent constructor by default
    LightDistanceToPlayerHeuristic();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LightDistanceToPlayerHeuristic();

    virtual bool reject(::SubChunkPos const&) const;

    virtual float computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LightDistanceToPlayerHeuristic(::Vec3, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Vec3, float);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $reject(::SubChunkPos const&) const;

    MCNAPI float $computeScore(::BlockPos const&, ::PointLighting::ManagedPointLight const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PointLighting
