#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class IPersonaRepository;
// clang-format on

namespace persona::edu {

class Context {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IPersonaRepository&>           mPersonaRepo;
    ::ll::TypedStorage<8, 16, std::weak_ptr<IOptionRegistry>> mWeakOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    Context& operator=(Context const&);
    Context(Context const&);
    Context();
};

} // namespace persona::edu
