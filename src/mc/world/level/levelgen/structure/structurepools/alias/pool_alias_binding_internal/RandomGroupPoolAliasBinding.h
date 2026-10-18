#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/deps/core/math/SimpleWeightedEntry.h"
#endif // @header-generator platform
#include "mc/world/level/levelgen/structure/structurepools/alias/PoolAliasBinding.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { template<typename T0> class SimpleWeightedEntry; }
#else // @header-generator platform
class IRandom;
#endif // @header-generator platform
// clang-format on

namespace PoolAliasBindingInternal {

class RandomGroupPoolAliasBinding : public ::PoolAliasBinding {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mGroups;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::Core::SimpleWeightedEntry<::std::vector<::std::shared_ptr<::PoolAliasBinding>>>>>
        mGroups;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void
    appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const
        /*override*/;

    virtual void forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const
        /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void
    $appendResolvedAliases(::IRandom& random, ::PoolAliasBinding::PoolAliasLookup& inOutResolvedAliases) const;

    MCAPI void $forAllTargets(::std::function<void(::std::string const&, ::std::string const&)> const& fn) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace PoolAliasBindingInternal
