#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystems { class IActorAdapter; }
// clang-format on

namespace VanillaSystems {

struct ActorAdapterComponent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<VanillaSystems::IActorAdapter*>> mAdapter;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::VanillaSystems::IActorAdapter*>> mAdapter;
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace VanillaSystems
