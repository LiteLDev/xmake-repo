#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

// auto generated forward declare list
// clang-format off
struct BiomeComponentBase;
// clang-format on

class BiomeComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24>    mComponentList;
#else // @header-generator platform
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::pair<::Bedrock::typeid_t<void>, ::std::unique_ptr<::BiomeComponentBase>>>>
                                   mComponentList;
#endif // @header-generator platform
    ::ll::TypedStorage<1, 1, bool> mAllowAddingComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _addingComponentsIsAllowed() const;

    MCNAPI bool _hasComponent(::Bedrock::typeid_t<void>) const;

    MCNAPI void _removeComponent(::Bedrock::typeid_t<void>);

    MCNAPI void finalizeComponents();

    MCNAPI ~BiomeComponentStorage();
#else // @header-generator platform
    MCAPI ~BiomeComponentStorage();
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
