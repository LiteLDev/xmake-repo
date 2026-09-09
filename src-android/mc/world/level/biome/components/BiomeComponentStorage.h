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
    ::ll::UntypedStorage<8, 24>    mComponentList;
    ::ll::TypedStorage<1, 1, bool> mAllowAddingComponents;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _addingComponentsIsAllowed() const;

    MCNAPI bool _hasComponent(::Bedrock::typeid_t<void>) const;

    MCNAPI void _removeComponent(::Bedrock::typeid_t<void>);

    MCNAPI void finalizeComponents();

    MCNAPI ~BiomeComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
