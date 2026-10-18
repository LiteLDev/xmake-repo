#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/server/commands/CommandRationalRange.h"

struct HasPropertyFilter {
public:
    // HasPropertyFilter inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    using OptionalValueVariant = std::optional<std::variant<CommandRationalRange, bool, std::string>>;
#else // @header-generator platform
    using OptionalValueVariant = ::std::optional<::std::variant<::CommandRationalRange, bool, ::std::string>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ValueVariant = std::variant<CommandRationalRange, bool, std::string>;
#else // @header-generator platform
    using ValueVariant = ::std::variant<::CommandRationalRange, bool, ::std::string>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 40, ::HashedString>                                                       mPropertyName;
    ::ll::TypedStorage<1, 1, bool>                                                                  mInverted;
    ::ll::TypedStorage<8, 48, std::optional<std::variant<CommandRationalRange, bool, std::string>>> mValue;
#else // @header-generator platform
    ::ll::TypedStorage<8, 48, ::HashedString> mPropertyName;
    ::ll::TypedStorage<1, 1, bool>            mInverted;
    ::ll::TypedStorage<8, 48, ::std::optional<::std::variant<::CommandRationalRange, bool, ::std::string>>> mValue;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    HasPropertyFilter();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~HasPropertyFilter();
#else // @header-generator platform
    MCAPI ~HasPropertyFilter();
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
