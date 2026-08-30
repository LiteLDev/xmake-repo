#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct PropertyOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, double>                 value;
    ::ll::TypedStorage<8, 16, std::optional<double>> minValue;
    ::ll::TypedStorage<8, 16, std::optional<double>> maxValue;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PropertyOutOfBoundsError(std::string const&, std::optional<double>, std::optional<double>);

    MCNAPI PropertyOutOfBoundsError(std::string const&, double, std::optional<double>, std::optional<double>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, std::optional<double>, std::optional<double>);

    MCNAPI void* $ctor(std::string const&, double, std::optional<double>, std::optional<double>);
    // NOLINTEND
};

} // namespace Scripting
