#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/Pos2d.h"
#include "mc/world/level/biome/Biome.h"
#else // @header-generator platform
#include "mc/world/level/newbiome/MixerOperationNode.h"
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
template<typename T0, typename T1, typename T2> class UnaryOperationNode;
template<typename T0, typename T1> class OperationNode;
#ifndef LL_GENERATED_ANDROID_BASE_STUB_UNARYOPERATIONNODE
#define LL_GENERATED_ANDROID_BASE_STUB_UNARYOPERATIONNODE
template<typename T0, typename T1, typename T2> class UnaryOperationNode {};
#endif
#else // @header-generator platform
class Pos2d;
#endif // @header-generator platform
// clang-format on

#if defined(LL_PLAT_A) // @header-generator platform
class RegionHillsOperationNode : public ::UnaryOperationNode<const Biome*, Pos2d, const Biome*> {
#else // @header-generator platform
class RegionHillsOperationNode : public ::MixerOperationNode<::Biome const*, ::Pos2d, ::Biome const*> {
#endif // @header-generator platform
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 16>                      mRiverOperationNode;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&> mBiomeRegistry;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OperationNode<int, ::Pos2d>>> mRiverOperationNode;
    ::ll::TypedStorage<8, 8, ::BiomeRegistry const&>                            mBiomeRegistry;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    RegionHillsOperationNode& operator=(RegionHillsOperationNode const&);
    RegionHillsOperationNode(RegionHillsOperationNode const&);
    RegionHillsOperationNode();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~RegionHillsOperationNode();
#else // @header-generator platform
    virtual void _fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw
    ) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    virtual ::std::tuple<::Pos2d, ::Pos2d> _getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const /*override*/;
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
        int
#else // @header-generator platform
    MCAPI void $_fillArea(
        ::OperationNodeDetails::WorkingData<::Biome const*, ::Biome const*>& operationNodeData,
        ::Pos2d const&                                                       origin,
        ::Pos2d const&                                                       size,
        int                                                                  pw
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::tuple<Pos2d, Pos2d> $_getAreaRead(::Pos2d const&, ::Pos2d const&) const;
#else // @header-generator platform
    MCAPI ::std::tuple<::Pos2d, ::Pos2d> $_getAreaRead(::Pos2d const& origin, ::Pos2d const& size) const;


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
