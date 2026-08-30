#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/lighting/gradient/LightGradientColor.h"

class LightGradientStorage {
public:
    // LightGradientStorage inner types define
    using Handle = ushort;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::array<LightGradientColor, 16>>> mGradients;
    ::ll::TypedStorage<8, 24, std::map<ulong, ushort>>                         mExistingGradients;
    // NOLINTEND

public:
    // prevent constructor by default
    LightGradientStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ushort addGradient(std::array<LightGradientColor, 16> const&);

    MCNAPI ~LightGradientStorage();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::array<LightGradientColor, 16> const& DEFAULT_GRADIENT();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
