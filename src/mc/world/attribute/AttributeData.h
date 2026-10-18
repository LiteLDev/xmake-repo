#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/platform/Result.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/attribute/AttributeModifier.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class AttributeInstance;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class AttributeModifier;
#endif // @header-generator platform
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct AttributeData {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                           mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                           mMinValue;
    ::ll::TypedStorage<4, 4, float>                           mMaxValue;
    ::ll::TypedStorage<4, 4, float>                           mDefaultValue;
    ::ll::TypedStorage<4, 4, float>                           mDefaultMinValue;
    ::ll::TypedStorage<4, 4, float>                           mDefaultMaxValue;
    ::ll::TypedStorage<8, 40, ::HashedString>                 mName;
    ::ll::TypedStorage<8, 24, std::vector<AttributeModifier>> mModifiers;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, float>                               mCurrentValue;
    ::ll::TypedStorage<4, 4, float>                               mMinValue;
    ::ll::TypedStorage<4, 4, float>                               mMaxValue;
    ::ll::TypedStorage<4, 4, float>                               mDefaultValue;
    ::ll::TypedStorage<4, 4, float>                               mDefaultMinValue;
    ::ll::TypedStorage<4, 4, float>                               mDefaultMaxValue;
    ::ll::TypedStorage<8, 48, ::HashedString>                     mName;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeModifier>> mModifiers;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    AttributeData();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI AttributeData();
#else // @header-generator platform
    MCAPI explicit AttributeData(::AttributeInstance const& instance);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit AttributeData(::AttributeInstance const&);
#else // @header-generator platform
    MCAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Result<void, std::error_code> read(::ReadOnlyBinaryStream&);
#else // @header-generator platform
    MCAPI void write(::BinaryStream& stream) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void write(::BinaryStream&) const;

    MCNAPI ~AttributeData();
#else // @header-generator platform
    MCAPI ~AttributeData();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::AttributeInstance const&);
#else // @header-generator platform
    MCAPI void* $ctor(::AttributeInstance const& instance);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
