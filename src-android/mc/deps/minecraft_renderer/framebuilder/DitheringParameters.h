#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

namespace mce::framebuilder {

struct DitheringParameters {
public:
    // DitheringParameters inner types declare
    // clang-format off
    struct Parameters;
    // clang-format on

    // DitheringParameters inner types define
    enum class Type : int {
        Actor        = 0,
        MeshFallback = 1,
        RenderChunk  = 2,
    };

    struct Parameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mMinDistance;
        ::ll::TypedStorage<4, 4, float> mMaxDistance;
        ::ll::TypedStorage<4, 4, int>   mStep;
        // NOLINTEND
    };

    using ParametersByType = ::brstd::flat_map<
        mce::framebuilder::DitheringParameters::Type,
        mce::framebuilder::DitheringParameters::Parameters,
        std::less<mce::framebuilder::DitheringParameters::Type>,
        std::vector<mce::framebuilder::DitheringParameters::Type>,
        std::vector<mce::framebuilder::DitheringParameters::Parameters>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mParametersByType;
    // NOLINTEND

public:
    // prevent constructor by default
    DitheringParameters& operator=(DitheringParameters const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DitheringParameters();

    MCNAPI ::brstd::flat_map<
        mce::framebuilder::DitheringParameters::Type,
        mce::framebuilder::DitheringParameters::Parameters,
        std::less<mce::framebuilder::DitheringParameters::Type>,
        std::vector<mce::framebuilder::DitheringParameters::Type>,
        std::vector<mce::framebuilder::DitheringParameters::Parameters>> const&
    getParametersByType() const;

    MCNAPI ~DitheringParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce::framebuilder
