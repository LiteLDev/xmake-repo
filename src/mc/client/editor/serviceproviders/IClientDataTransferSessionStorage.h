#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

#if defined(LL_PLAT_C) // @header-generator platform
class IClientDataTransferSessionStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkc3c7a9;
    ::ll::UntypedStorage<1, 1> mUnk401b44;
    // NOLINTEND

public:
    // prevent constructor by default
    IClientDataTransferSessionStorage& operator=(IClientDataTransferSessionStorage const&);
    IClientDataTransferSessionStorage(IClientDataTransferSessionStorage const&);
    IClientDataTransferSessionStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientDataTransferSessionStorage() = default;
    // NOLINTEND
};
#else // @header-generator platform
class IClientDataTransferSessionStorage {};
#endif // @header-generator platform

} // namespace Editor::Services
#endif // @header-generator platform
