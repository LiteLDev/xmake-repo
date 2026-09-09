#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ControlOption.h"

class FloatControlOption : public ::ControlOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>     mFloatSetter;
    ::ll::UntypedStorage<8, 48>     mFloatGetter;
    ::ll::TypedStorage<4, 4, float> mMinValue;
    ::ll::TypedStorage<4, 4, float> mMaxValue;
    ::ll::TypedStorage<4, 4, float> mDefaultValue;
    // NOLINTEND

public:
    // prevent constructor by default
    FloatControlOption();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FloatControlOption();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FloatControlOption(uint, std::function<void(float)>, std::function<float()>, float, float, float);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, std::function<void(float)>, std::function<float()>, float, float, float);
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
