#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFloatRange.h"
#include "mc/server/commands/CommandIntegerRange.h"

class CommandRationalRange {
public:
    // CommandRationalRange inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    enum class ValueType : int {
        UNDEFINED = 0,
        INT       = 1,
        FLOAT     = 2,
#else // @header-generator platform
    enum class BoundType : uchar {
        Undefined = 0,
        Min       = 1,
        Max       = 2,
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    enum BoundType : uchar {
        UNDEFINED = 0,
        MIN       = 1,
        MAX       = 2,
#else // @header-generator platform
    enum class ValueType : int {
        Undefined = 0,
        Int       = 1,
        Float     = 2,
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 16, std::variant<CommandIntegerRange, CommandFloatRange>> mRange;
    ::ll::TypedStorage<4, 4, ::CommandRationalRange::ValueType>                     mValueType;
    ::ll::TypedStorage<1, 1, ::CommandRationalRange::BoundType>                     mBoundType;
    ::ll::TypedStorage<1, 1, bool>                                                  mInvert;
    ::ll::TypedStorage<1, 1, bool>                                                  mInclusive;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::std::variant<::CommandIntegerRange, ::CommandFloatRange>> mRange;
    ::ll::TypedStorage<4, 4, ::CommandRationalRange::ValueType>                           mValueType;
    ::ll::TypedStorage<1, 1, ::CommandRationalRange::BoundType>                           mBoundType;
    ::ll::TypedStorage<1, 1, bool>                                                        mInvert;
    ::ll::TypedStorage<1, 1, bool>                                                        mInclusive;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const&);
#else // @header-generator platform
    MCAPI ::CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const& valueType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<int, float> getMaxValue() const;
#else // @header-generator platform
    MCAPI bool isWithinRange(::std::variant<int, float> const& value) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::variant<int, float> getMinValue() const;
#else // @header-generator platform
    MCAPI void setInvert(bool val);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool hasBoundType(::CommandRationalRange::BoundType const&) const;

    MCNAPI bool isOfValueType(::CommandRationalRange::ValueType const&) const;

    MCNAPI bool isWithinRange(std::variant<int, float> const&) const;

    MCNAPI void setInvert(bool);

    MCNAPI void setValue(std::variant<int, float> const&, ::CommandRationalRange::BoundType const&);
#else // @header-generator platform
    MCAPI void setValue(::std::variant<int, float> const& value, ::CommandRationalRange::BoundType const& type);
#endif // @header-generator platform
    // NOLINTEND
};
