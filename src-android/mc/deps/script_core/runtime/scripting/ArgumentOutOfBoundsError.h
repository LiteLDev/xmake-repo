#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/BaseError.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ErrorBinding; }
// clang-format on

namespace Scripting {

struct ArgumentOutOfBoundsError : public ::Scripting::BaseError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, std::optional<double>> value;
    ::ll::TypedStorage<8, 16, std::optional<double>> minValue;
    ::ll::TypedStorage<8, 16, std::optional<double>> maxValue;
    ::ll::TypedStorage<4, 4, int>                    index;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentOutOfBoundsError();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentOutOfBoundsError(
        std::string const&,
        int,
        std::optional<double>,
        std::optional<double>,
        std::optional<double>
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::string const&, int, std::optional<double>, std::optional<double>, std::optional<double>);
    // NOLINTEND
};

} // namespace Scripting
