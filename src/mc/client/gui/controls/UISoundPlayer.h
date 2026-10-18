#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class UISoundPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UISoundPlayer() = default;

    virtual void play(std::string const&, float, float) const;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class UISoundPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UISoundPlayer() = default;

    virtual void play(::std::string const& name, float volume, float pitch) const;
    // NOLINTEND
};
#else // @header-generator platform
class UISoundPlayer {};
#endif // @header-generator platform
#endif // @header-generator platform
