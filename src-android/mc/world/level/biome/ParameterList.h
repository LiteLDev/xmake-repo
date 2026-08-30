#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeNoiseTarget.h"
#include "mc/world/level/biome/RTree.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct BiomeHashType;
struct BiomeIdType;
struct TargetPoint;
// clang-format on

class ParameterList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<BiomeNoiseTarget>> mNoiseTargets;
    ::ll::TypedStorage<8, 168, std::optional<RTree>>         mTree;
    // NOLINTEND

public:
    // prevent constructor by default
    ParameterList& operator=(ParameterList const&);
    ParameterList(ParameterList const&);
    ParameterList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ParameterList(std::vector<BiomeNoiseTarget> const&);

    MCNAPI ~ParameterList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<BiomeNoiseTarget> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
