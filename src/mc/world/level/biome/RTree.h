#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/biome/Biome.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class Biome;
#endif // @header-generator platform
struct BiomeNoiseTarget;
#if defined(LL_PLAT_A) // @header-generator platform
struct ClimateParameters;
struct TargetPoint;
#else // @header-generator platform
#endif // @header-generator platform
namespace ClimateUtils { struct TargetSpace; }
// clang-format on

class RTree {
public:
    // RTree inner types declare
    // clang-format off
    class Node;
    struct Hint;
    // clang-format on

    // RTree inner types define
    class Node {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 112, std::array<ClimateUtils::Parameter, 7>> mParameterSpace;
        ::ll::UntypedStorage<8, 24>                                        mChildren;
        ::ll::TypedStorage<8, 16, std::optional<const Biome*>>             mBiome;
        ::ll::TypedStorage<8, 8, long>                                     mTotalMagnitude;
#else // @header-generator platform
        ::ll::TypedStorage<8, 112, ::std::array<::ClimateUtils::Parameter, 7>> mParameterSpace;
        ::ll::TypedStorage<8, 24, ::std::vector<::RTree::Node>>                mChildren;
        ::ll::TypedStorage<8, 16, ::std::optional<::Biome const*>>             mBiome;
        ::ll::TypedStorage<8, 8, int64>                                        mTotalMagnitude;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node();
#else // @header-generator platform
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void search(::ClimateUtils::TargetSpace const&, std::pair<const RTree::Node*, long>&) const;

        MCNAPI ~Node();
#else // @header-generator platform
        MCAPI void
        search(::ClimateUtils::TargetSpace const& target, ::std::pair<::RTree::Node const*, int64>& closestLeaf) const;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static std::optional<RTree::Node> branch(std::vector<RTree::Node>&&);
#else // @header-generator platform
        MCAPI static ::std::optional<::RTree::Node> branch(::std::vector<::RTree::Node>&& children);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void sort(std::vector<RTree::Node>&, int, bool);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI static void sort(::std::vector<::RTree::Node>& children, int dimension, bool absolute);
#endif // @header-generator platform
        // NOLINTEND
    };

    struct Hint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RTree::Node const*> node;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::RTree::Node const> mRoot;
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // prevent constructor by default
    RTree& operator=(RTree const&);
    RTree(RTree const&);
    RTree();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RTree();
    // NOLINTEND

public:
#else // @header-generator platform
#endif // @header-generator platform
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<RTree::Node> build(std::vector<RTree::Node>&&);
#else // @header-generator platform
    MCAPI static ::std::optional<::RTree::Node> build(::std::vector<::RTree::Node>&& children);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::optional<RTree> create(std::vector<BiomeNoiseTarget> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static ::std::optional<::RTree> create(::std::vector<::BiomeNoiseTarget> const& biomes);
#endif // @header-generator platform
    // NOLINTEND
};
