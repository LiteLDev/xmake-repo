#if defined(LL_PLAT_C) || defined(LL_PLAT_A) // @header-generator platform
#if defined(LL_PLAT_A) // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockBakedMaterialDataComponent;
struct ClientBlockTypeComponentStorage;
// clang-format on

struct ClientBlockComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, std::unique_ptr<const BlockBakedMaterialDataComponent>>  mBakedMaterial;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const ClientBlockTypeComponentStorage>> mShared;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientBlockComponentStorage& operator=(ClientBlockComponentStorage const&);
    ClientBlockComponentStorage(ClientBlockComponentStorage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ClientBlockComponentStorage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#endif // @header-generator platform
#else // @header-generator platform
#endif // @header-generator platform
