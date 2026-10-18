#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ControlOption.h"

// auto generated forward declare list
// clang-format off
class Vec2;
// clang-format on

class PointControlOption : public ::ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>     mXSetter;
    ::ll::UntypedStorage<8, 48>     mYSetter;
    ::ll::UntypedStorage<8, 48>     mXGetter;
    ::ll::UntypedStorage<8, 48>     mYGetter;
    ::ll::TypedStorage<4, 4, float> mDefaultX;
    ::ll::UntypedStorage<4, 12>     mDefaultY;
    // NOLINTEND

public:
    // prevent constructor by default
    PointControlOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PointControlOption();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PointControlOption(
        uint,
        std::function<void(float)>,
        std::function<void(float)>,
        std::function<float()>,
        std::function<float()>,
        float,
        float
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        uint,
        std::function<void(float)>,
        std::function<void(float)>,
        std::function<float()>,
        std::function<float()>,
        float,
        float
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/input/ControlOption.h"

class PointControlOption : public ::ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mXSetter;
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mYSetter;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>     mXGetter;
    ::ll::TypedStorage<8, 64, ::std::function<float()>>     mYGetter;
    ::ll::TypedStorage<4, 4, float>                         mDefaultX;
    ::ll::TypedStorage<4, 4, float>                         mDefaultY;
    // NOLINTEND

public:
    // prevent constructor by default
    PointControlOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PointControlOption(
        uint                         controlOptionId,
        ::std::function<void(float)> xSetter,
        ::std::function<void(float)> ySetter,
        ::std::function<float()>     xGetter,
        ::std::function<float()>     yGetter,
        float                        defaultX,
        float                        defaultY
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        uint                         controlOptionId,
        ::std::function<void(float)> xSetter,
        ::std::function<void(float)> ySetter,
        ::std::function<float()>     xGetter,
        ::std::function<float()>     yGetter,
        float                        defaultX,
        float                        defaultY
    );
    // NOLINTEND
};
#else // @header-generator platform
class PointControlOption {};
#endif // @header-generator platform
#endif // @header-generator platform
