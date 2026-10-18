#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EffectDuration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<int> getValue() const;

    MCNAPI int getValueForSerialization() const;

    MCNAPI bool isInfinite() const;

    MCNAPI bool operator!=(int) const;

    MCNAPI ::EffectDuration operator*(float) const;

    MCNAPI ::EffectDuration operator+(::EffectDuration const&) const;

    MCNAPI ::EffectDuration& operator+=(::EffectDuration const&);

    MCNAPI ::EffectDuration& operator-=(int);

    MCNAPI ::EffectDuration operator/(float) const;

    MCNAPI bool operator<(::EffectDuration const&) const;

    MCNAPI bool operator<(int) const;

    MCNAPI bool operator<=(::EffectDuration const&) const;

    MCNAPI bool operator<=(int) const;

    MCNAPI bool operator>(int) const;

    MCNAPI bool operator>=(::EffectDuration const&) const;

    MCNAPI void scaleAndRoundUp(float);

    MCNAPI bool tickDown();

    MCNAPI std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::EffectDuration const& INFINITE_DURATION();
    // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
};
