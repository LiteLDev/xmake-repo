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

struct PropertyOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, double>                 value;
    ::ll::TypedStorage<8, 16, std::optional<double>> minValue;
    ::ll::TypedStorage<8, 16, std::optional<double>> maxValue;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk932921;
    ::ll::UntypedStorage<8, 16> mUnk57acd1;
    ::ll::UntypedStorage<8, 16> mUnk442b6c;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    PropertyOutOfBoundsError& operator=(PropertyOutOfBoundsError const&);
    PropertyOutOfBoundsError(PropertyOutOfBoundsError const&);
#endif // @header-generator platform
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertyOutOfBoundsError(std::string const&, std::optional<double>, std::optional<double>);
#else // @header-generator platform
    MCNAPI PropertyOutOfBoundsError(
        ::std::string const&    propertyName,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI PropertyOutOfBoundsError(std::string const&, double, std::optional<double>, std::optional<double>);
#else // @header-generator platform
    MCNAPI PropertyOutOfBoundsError(
        ::std::string const&    propertyName,
        double                  value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, std::optional<double>, std::optional<double>);
#else // @header-generator platform
    MCNAPI void*
    $ctor(::std::string const& propertyName, ::std::optional<double> minValue_, ::std::optional<double> maxValue_);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::string const&, double, std::optional<double>, std::optional<double>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string const&    propertyName,
        double                  value_,
        ::std::optional<double> minValue_,
        ::std::optional<double> maxValue_
    );
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace Scripting
