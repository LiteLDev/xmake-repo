#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace mce { struct PointLightParameters; }
// clang-format on

namespace PointLighting {

class AnalyticalLightTransitionHandler
: public ::PointLighting::ILightLODResourceProvider<PointLighting::AnalyticLightResources> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual bool atCapacity() const;

    virtual bool canReserve(::BlockPos const&) const;

    virtual void reserve(::BlockPos const&, ::mce::PointLightParameters const&, float const, ::PointLighting::AnalyticLightResources&);

    virtual bool acquired(::BlockPos const&) const;

    virtual void advance(::BlockPos const&, ::PointLighting::AnalyticLightResources&, float);

    virtual void finalize(::BlockPos const&, ::PointLighting::AnalyticLightResources&);

    virtual void release(::BlockPos const&, ::PointLighting::AnalyticLightResources&);
    // clang-format on
    // NOLINTEND
};

} // namespace PointLighting
