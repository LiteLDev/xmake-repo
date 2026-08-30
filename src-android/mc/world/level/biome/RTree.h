#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/Biome.h"
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
struct BiomeNoiseTarget;
struct ClimateParameters;
struct TargetPoint;
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
        ::ll::TypedStorage<8, 112, std::array<ClimateUtils::Parameter, 7>> mParameterSpace;
        ::ll::UntypedStorage<8, 24>                                        mChildren;
        ::ll::TypedStorage<8, 16, std::optional<const Biome*>>             mBiome;
        ::ll::TypedStorage<8, 8, long>                                     mTotalMagnitude;
        // NOLINTEND

    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void search(::ClimateUtils::TargetSpace const&, std::pair<const RTree::Node*, long>&) const;

        MCNAPI ~Node();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static std::optional<RTree::Node> branch(std::vector<RTree::Node>&&);

        MCNAPI static void sort(std::vector<RTree::Node>&, int, bool);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<RTree::Node> build(std::vector<RTree::Node>&&);

    MCNAPI static std::optional<RTree> create(std::vector<BiomeNoiseTarget> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
