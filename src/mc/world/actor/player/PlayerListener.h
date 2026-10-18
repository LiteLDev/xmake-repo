#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerListener() = default;

    virtual void onWillChangeDimension(::Player&);

    virtual void onDimensionChanged(::Player&);

    virtual void onPlayerDestruction(::Player&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onWillChangeDimension(::Player&);

    MCNAPI void $onDimensionChanged(::Player&);

    MCNAPI void $onPlayerDestruction(::Player&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class PlayerListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerListener() = default;

    virtual void onWillChangeDimension(::Player& player);

    virtual void onDimensionChanged(::Player& player);

    virtual void onPlayerDestruction(::Player& player);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onWillChangeDimension(::Player& player);

    MCFOLD void $onDimensionChanged(::Player& player);

    MCFOLD void $onPlayerDestruction(::Player& player);
    // NOLINTEND
};
#else // @header-generator platform
class PlayerListener {};
#endif // @header-generator platform
#endif // @header-generator platform
