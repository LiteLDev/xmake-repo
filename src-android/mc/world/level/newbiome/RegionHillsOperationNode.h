#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Pos2d.h"
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/newbiome/operation_node_details/WorkingData.h"

// auto generated forward declare list
// clang-format off
class BiomeRegistry;
template<typename T0, typename T1, typename T2> class UnaryOperationNode;
template<typename T0, typename T1> class OperationNode;
#ifndef LL_GENERATED_ANDROID_BASE_STUB_UNARYOPERATIONNODE
#define LL_GENERATED_ANDROID_BASE_STUB_UNARYOPERATIONNODE
template<typename T0, typename T1, typename T2> class UnaryOperationNode {};
#endif
// clang-format on

class RegionHillsOperationNode : public ::UnaryOperationNode<const Biome*, Pos2d, const Biome*> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>                      mRiverOperationNode;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&> mBiomeRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    RegionHillsOperationNode& operator=(RegionHillsOperationNode const&);
    RegionHillsOperationNode(RegionHillsOperationNode const&);
    RegionHillsOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RegionHillsOperationNode();

    virtual void _fillArea(::OperationNodeDetails::WorkingData<const Biome*, const Biome*>&, ::Pos2d const&, ::Pos2d const&, int) const;

    virtual std::tuple<Pos2d, Pos2d> _getAreaRead(::Pos2d const&, ::Pos2d const&) const;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RegionHillsOperationNode(
        uint,
        std::shared_ptr<OperationNode<const Biome*, Pos2d>>&,
        std::shared_ptr<OperationNode<int, Pos2d>>&,
        ::BiomeRegistry const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint,
        std::shared_ptr<OperationNode<const Biome*, Pos2d>>&,
        std::shared_ptr<OperationNode<int, Pos2d>>&,
        ::BiomeRegistry const&
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
        int
    ) const;

    MCNAPI std::tuple<Pos2d, Pos2d> $_getAreaRead(::Pos2d const&, ::Pos2d const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
