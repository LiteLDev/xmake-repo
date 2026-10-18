#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on
#endif // @header-generator platform

template <typename T0>
#if defined(LL_PLAT_A) // @header-generator platform
class WildcardCommandSelector {};
#else // @header-generator platform
class WildcardCommandSelector : public CommandSelector<T0> {
public:
    using CommandSelector<T0>::CommandSelector;
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::WildcardCommandSelector<::Actor>>();
// clang-format on
#endif // @header-generator platform
