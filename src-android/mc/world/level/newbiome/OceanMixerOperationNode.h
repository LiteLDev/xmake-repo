#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Pos2d.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/MixerOperationNode.h"
#include "mc/world/level/newbiome/OperationGraphResult.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
template<typename T0, typename T1> class OperationNode;
// clang-format on

class OceanMixerOperationNode
: public ::MixerOperationNode<const Biome*, Pos2d, const Biome*, BiomeTemperatureCategory> {
public:
    // OceanMixerOperationNode inner types define
    using OceanData = ::OperationGraphResult<BiomeTemperatureCategory>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mGenericShallowOcean;
    ::ll::TypedStorage<8, 8, ::Biome const*>                                  mGenericDeepOcean;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mShallowOceanBiomes;
    ::ll::TypedStorage<8, 120, std::vector<std::pair<const Biome*, uint>>[5]> mDeepOceanBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    OceanMixerOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~OceanMixerOperationNode();

    virtual void _fillArea(::OperationNodeDetails::WorkingData<const Biome*, const Biome*>&, ::Pos2d const&, ::Pos2d const&, int, ::OperationGraphResult<BiomeTemperatureCategory>) const;

    virtual std::tuple<Pos2d, Pos2d> _getAreaRead(::Pos2d const&, ::Pos2d const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI OceanMixerOperationNode(
        uint,
        std::shared_ptr<OperationNode<const Biome*, Pos2d>>&,
        std::shared_ptr<OperationNode<BiomeTemperatureCategory, Pos2d>>&,
        ::BiomeRegistry const&,
        ::Biome const&,
        ::Biome const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint,
        std::shared_ptr<OperationNode<const Biome*, Pos2d>>&,
        std::shared_ptr<OperationNode<BiomeTemperatureCategory, Pos2d>>&,
        ::BiomeRegistry const&,
        ::Biome const&,
        ::Biome const&
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<const Biome*, const Biome*>&,
        ::Pos2d const&,
        ::Pos2d const&,
        int,
        ::OperationGraphResult<BiomeTemperatureCategory>
    ) const;

    MCNAPI std::tuple<Pos2d, Pos2d> $_getAreaRead(::Pos2d const&, ::Pos2d const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
