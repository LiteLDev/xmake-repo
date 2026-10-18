#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

#else // @header-generator platform
#endif // @header-generator platform
namespace Scripting {

struct ArgumentOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::optional<double>> value;
    ::ll::TypedStorage<8, 16, std::optional<double>> minValue;
    ::ll::TypedStorage<8, 16, std::optional<double>> maxValue;
    ::ll::TypedStorage<4, 4, int>                    index;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 16> mUnkc8e614;
    ::ll::UntypedStorage<8, 16> mUnk676da1;
    ::ll::UntypedStorage<8, 16> mUnk952d53;
    ::ll::UntypedStorage<4, 4>  mUnk34f2c4;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    ArgumentOutOfBoundsError& operator=(ArgumentOutOfBoundsError const&);
    ArgumentOutOfBoundsError(ArgumentOutOfBoundsError const&);
#endif // @header-generator platform
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentOutOfBoundsError(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string const&,
        int,
        std::optional<double>,
        std::optional<double>,
        std::optional<double>
#else // @header-generator platform
        ::std::string const&    propertyName,
        int                     index_,
        ::std::optional<double> value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
#endif // @header-generator platform
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, int, std::optional<double>, std::optional<double>, std::optional<double>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string const&    propertyName,
        int                     index_,
        ::std::optional<double> value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
