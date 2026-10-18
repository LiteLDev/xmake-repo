#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandSelectorBase.h"
#include "mc/server/commands/CommandSelectorResults.h"
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
template <typename T0>
class CommandSelector {};
#else // @header-generator platform
// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

template <typename T>
class CommandSelector : CommandSelectorBase {
public:
    CommandSelector() : CommandSelectorBase(std::is_same_v<T, Player>) {}
    MCAPI CommandSelectorResults<T> results(CommandOrigin const& a0) const;
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandSelector<::Actor>>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandSelector<::Player>>();
// clang-format on
#endif // @header-generator platform
