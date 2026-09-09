#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/providers/IntProviderType.h"

// auto generated forward declare list
// clang-format off
class IRandom;
struct IntProvider;
// clang-format on

struct UniformInt : public ::IntProviderType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mMinInclusive;
    ::ll::TypedStorage<4, 4, int> mMaxInclusive;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformInt();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UniformInt();

    virtual int sample(::IRandom&) const;

    virtual int maxValue() const;

    virtual int minValue() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::IntProvider of(int, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $sample(::IRandom&) const;

    MCNAPI int $maxValue() const;

    MCNAPI int $minValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
