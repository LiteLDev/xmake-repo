#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFloatRange.h"
#include "mc/server/commands/CommandIntegerRange.h"

class CommandRationalRange {
public:
    // CommandRationalRange inner types define
    enum class ValueType : int {
        UNDEFINED = 0,
        INT       = 1,
        FLOAT     = 2,
    };

    enum BoundType : uchar {
        UNDEFINED = 0,
        MIN       = 1,
        MAX       = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, std::variant<CommandIntegerRange, CommandFloatRange>> mRange;
    ::ll::TypedStorage<4, 4, ::CommandRationalRange::ValueType>                     mValueType;
    ::ll::TypedStorage<1, 1, ::CommandRationalRange::BoundType>                     mBoundType;
    ::ll::TypedStorage<1, 1, bool>                                                  mInvert;
    ::ll::TypedStorage<1, 1, bool>                                                  mInclusive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const&);

    MCNAPI std::variant<int, float> getMaxValue() const;

    MCNAPI std::variant<int, float> getMinValue() const;

    MCNAPI bool hasBoundType(::CommandRationalRange::BoundType const&) const;

    MCNAPI bool isOfValueType(::CommandRationalRange::ValueType const&) const;

    MCNAPI bool isWithinRange(std::variant<int, float> const&) const;

    MCNAPI void setInvert(bool);

    MCNAPI void setValue(std::variant<int, float> const&, ::CommandRationalRange::BoundType const&);
    // NOLINTEND
};
