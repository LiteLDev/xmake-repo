#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct RenderDistanceConfiguration {
public:
    // RenderDistanceConfiguration inner types declare
    // clang-format off
    struct RenderDistanceConfig;
    // clang-format on

    // RenderDistanceConfiguration inner types define
    struct RenderDistanceConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<int>> mRenderDistanceLevels;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::RenderDistanceConfiguration::RenderDistanceConfig> mDeferredRenderDistanceConfig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::vector<int> getDeferredRenderDistanceLevels() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND
};
