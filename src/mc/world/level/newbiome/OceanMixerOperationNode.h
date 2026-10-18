#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/Pos2d.h"
#include "mc/world/level/biome/Biome.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/MixerOperationNode.h"
#include "mc/world/level/newbiome/OperationGraphResult.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/world/level/newbiome/OperationNode.h"
#endif // @header-generator platform
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Biome;
#endif // @header-generator platform
class BiomeRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
template<typename T0, typename T1> class OperationNode;
#else // @header-generator platform
class Pos2d;
#endif // @header-generator platform
// clang-format on

class OceanMixerOperationNode
#if defined(LL_PLAT_A) // @header-generator platform
: public ::MixerOperationNode<const Biome*, Pos2d, const Biome*, BiomeTemperatureCategory> {
#else // @header-generator platform
: public ::MixerOperationNode<::Biome const*, ::Pos2d, ::Biome const*, ::BiomeTemperatureCategory> {
#endif // @header-generator platform
public:
    // OceanMixerOperationNode inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using OceanData = ::OperationGraphResult<BiomeTemperatureCategory>;
#else // @header-generator platform
    using OceanData = ::OperationGraphResult<::BiomeTemperatureCategory>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mGenericShallowOcean;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mGenericDeepOcean;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mShallowOceanBiomes;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mDeepOceanBiomes;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::Biome const*>                                        mGenericShallowOcean;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                        mGenericDeepOcean;
    ::ll::TypedStorage<8, 120, ::std::vector<::std::pair<::Biome const*, uint>>[5]> mShallowOceanBiomes;
    ::ll::TypedStorage<8, 120, ::std::vector<::std::pair<::Biome const*, uint>>[5]> mDeepOceanBiomes;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMixerOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~OceanMixerOperationNode();
#else // @header-generator platform
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw,
        ::OperationGraphResult<::BiomeTemperatureCategory>                   oceanData
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void _fillArea(::OperationNodeDetails::WorkingData<const Biome*, const Biome*>&, ::Pos2d const&, ::Pos2d const&, int, ::OperationGraphResult<BiomeTemperatureCategory>) const;

    virtual std::tuple<Pos2d, Pos2d> _getAreaRead(::Pos2d const&, ::Pos2d const&) const;
    // clang-format on
#else // @header-generator platform
    virtual ::std::tuple<::Pos2d, ::Pos2d> _getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI OceanMixerOperationNode(
        uint,
        std::shared_ptr<OperationNode<const Biome*, Pos2d>>&,
        std::shared_ptr<OperationNode<BiomeTemperatureCategory, Pos2d>>&,
        ::BiomeRegistry const&,
        ::Biome const&,
        ::Biome const&
#else // @header-generator platform
    MCAPI OceanMixerOperationNode(
        uint                                                                     seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>&             biomeLayer,
        ::std::shared_ptr<::OperationNode<::BiomeTemperatureCategory, ::Pos2d>>& oceanLayer,
        ::BiomeRegistry const&                                                   registry,
        ::Biome const&                                                           genericShallowOcean,
        ::Biome const&                                                           genericDeepOcean
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(
        uint,
        std::shared_ptr<OperationNode<const Biome*, Pos2d>>&,
        std::shared_ptr<OperationNode<BiomeTemperatureCategory, Pos2d>>&,
        ::BiomeRegistry const&,
        ::Biome const&,
        ::Biome const&
#else // @header-generator platform
    MCAPI void* $ctor(
        uint                                                                     seedMixup,
        ::std::shared_ptr<::OperationNode<::Biome const*, ::Pos2d>>&             biomeLayer,
        ::std::shared_ptr<::OperationNode<::BiomeTemperatureCategory, ::Pos2d>>& oceanLayer,
        ::BiomeRegistry const&                                                   registry,
        ::Biome const&                                                           genericShallowOcean,
        ::Biome const&                                                           genericDeepOcean
#endif // @header-generator platform
    );
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<const Biome*, const Biome*>&,
        ::Pos2d const&,
        ::Pos2d const&,
        int,
        ::OperationGraphResult<BiomeTemperatureCategory>
#else // @header-generator platform
    MCAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw,
        ::OperationGraphResult<::BiomeTemperatureCategory>                   oceanData
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::tuple<Pos2d, Pos2d> $_getAreaRead(::Pos2d const&, ::Pos2d const&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI ::std::tuple<::Pos2d, ::Pos2d> $_getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
