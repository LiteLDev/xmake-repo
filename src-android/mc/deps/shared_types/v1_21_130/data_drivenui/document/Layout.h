#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_130::DataDrivenUI { struct ContainerLayout; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Context; }
namespace SharedTypes::v1_21_130::DataDrivenUI { struct Panel; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_130::DataDrivenUI {

struct Layout {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mMarkup;
    // NOLINTEND

public:
    // prevent constructor by default
    Layout();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Layout();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& NAME();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_130::DataDrivenUI
