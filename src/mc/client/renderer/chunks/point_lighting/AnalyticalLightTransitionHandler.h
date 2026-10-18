#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/AnalyticLightResources.h"
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace mce { struct PointLightParameters; }
// clang-format on

#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace PointLighting { struct AnalyticLightResources; }
namespace mce { struct PointLightParameters; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
namespace PointLighting {

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class AnalyticalLightTransitionHandler
: public ::PointLighting::ILightLODResourceProvider<::PointLighting::AnalyticLightResources> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool atCapacity() const /*override*/;

    virtual bool canReserve(::BlockPos const&) const /*override*/;

    virtual bool acquired(::BlockPos const&) const /*override*/;

    virtual void reserve(
        ::BlockPos const&,
        ::mce::PointLightParameters const&,
        float const,
        ::PointLighting::AnalyticLightResources&
    ) /*override*/;

    virtual void release(::BlockPos const&, ::PointLighting::AnalyticLightResources&) /*override*/;

    virtual void advance(::BlockPos const&, ::PointLighting::AnalyticLightResources&, float) /*override*/;

    virtual void finalize(::BlockPos const&, ::PointLighting::AnalyticLightResources&) /*override*/;
    // NOLINTEND
};
#else // @header-generator platform
class AnalyticalLightTransitionHandler {};
#endif // @header-generator platform
#endif // @header-generator platform

} // namespace PointLighting
