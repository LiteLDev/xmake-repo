#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/Pos2d.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/newbiome/RootOperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

#if defined(LL_PLAT_A) // @header-generator platform
class AddOceanTemperatureOperationNode : public ::RootOperationNode<BiomeTemperatureCategory, Pos2d> {
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Pos2d;
// clang-format on

class AddOceanTemperatureOperationNode : public ::RootOperationNode<::BiomeTemperatureCategory, ::Pos2d> {
#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~AddOceanTemperatureOperationNode();

    virtual void _fillArea(::OperationNodeDetails::WorkingData<BiomeTemperatureCategory, char>&, ::Pos2d const&, ::Pos2d const&) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::BiomeTemperatureCategory, char>& operationNodeData,
        ::Pos2d const&                                                         origin,
        ::Pos2d const&                                                         size
    ) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<BiomeTemperatureCategory, char>&,
        ::Pos2d const&,
        ::Pos2d const&
#else // @header-generator platform
    MCAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::BiomeTemperatureCategory, char>& operationNodeData,
        ::Pos2d const&                                                         origin,
        ::Pos2d const&                                                         size
#endif // @header-generator platform
    ) const;
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND
#else // @header-generator platform
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
