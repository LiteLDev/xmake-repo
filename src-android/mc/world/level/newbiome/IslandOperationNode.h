#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Pos2d.h"
#include "mc/world/level/newbiome/RootOperationNode.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"
#include "mc/world/level/newbiome/operation_node_values/Terrain.h"

class IslandOperationNode : public ::RootOperationNode<OperationNodeValues::Terrain, Pos2d> {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IslandOperationNode();

    virtual void _fillArea(::OperationNodeDetails::WorkingData<OperationNodeValues::Terrain, char>&, ::Pos2d const&, ::Pos2d const&) const;
    // clang-format on
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
        ::OperationNodeDetails::WorkingData<OperationNodeValues::Terrain, char>&,
        ::Pos2d const&,
        ::Pos2d const&
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
