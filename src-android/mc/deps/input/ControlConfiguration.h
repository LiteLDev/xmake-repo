#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ControlOption;
class FloatControlOption;
class PointControlOption;
class Vec2;
// clang-format on

class ControlConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                mConfigId;
    ::ll::TypedStorage<4, 4, uint>                                mConfigCategory;
    ::ll::TypedStorage<4, 4, uint>                                mConfigGroup;
    ::ll::TypedStorage<8, 8, std::unique_ptr<PointControlOption>> mPosition;
    ::ll::TypedStorage<8, 8, std::unique_ptr<FloatControlOption>> mScale;
    ::ll::UntypedStorage<8, 32>                                   mSubOptions;
    ::ll::UntypedStorage<8, 48>                                   mEnabled;
    ::ll::TypedStorage<1, 1, bool>                                mOverlapping;
    ::ll::TypedStorage<1, 1, bool>                                mActive;
    ::ll::TypedStorage<4, 4, float>                               mBaseWidth;
    ::ll::TypedStorage<4, 4, float>                               mBaseHeight;
    ::ll::TypedStorage<4, 4, float>                               mAspectRatio;
    ::ll::TypedStorage<1, 1, bool>                                mKeepAspectRatio;
    ::ll::TypedStorage<4, 4, float>                               mInitialDx;
    ::ll::TypedStorage<4, 4, float>                               mInitialDy;
    // NOLINTEND

public:
    // prevent constructor by default
    ControlConfiguration();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ControlConfiguration(
        uint,
        uint,
        uint,
        std::function<bool()>,
        std::unique_ptr<PointControlOption>,
        std::unique_ptr<FloatControlOption>,
        float,
        float,
        float,
        bool
    );

    MCNAPI void addSubOption(std::unique_ptr<ControlOption>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint,
        uint,
        uint,
        std::function<bool()>,
        std::unique_ptr<PointControlOption>,
        std::unique_ptr<FloatControlOption>,
        float,
        float,
        float,
        bool
    );
    // NOLINTEND
};
