#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/Result.h"
#include "mc/world/attribute/AttributeModifier.h"

// auto generated forward declare list
// clang-format off
class AttributeInstance;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct AttributeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                           mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                           mMinValue;
    ::ll::TypedStorage<4, 4, float>                           mMaxValue;
    ::ll::TypedStorage<4, 4, float>                           mDefaultValue;
    ::ll::TypedStorage<4, 4, float>                           mDefaultMinValue;
    ::ll::TypedStorage<4, 4, float>                           mDefaultMaxValue;
    ::ll::TypedStorage<8, 40, ::HashedString>                 mName;
    ::ll::TypedStorage<8, 24, std::vector<AttributeModifier>> mModifiers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributeData();

    MCNAPI explicit AttributeData(::AttributeInstance const&);

    MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);

    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~AttributeData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::AttributeInstance const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
