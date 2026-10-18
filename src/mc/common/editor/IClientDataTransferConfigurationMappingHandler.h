#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

#if defined(LL_PLAT_C) // @header-generator platform
class IClientDataTransferConfigurationMappingHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk6c63eb;
    // NOLINTEND

public:
    // prevent constructor by default
    IClientDataTransferConfigurationMappingHandler& operator=(IClientDataTransferConfigurationMappingHandler const&);
    IClientDataTransferConfigurationMappingHandler(IClientDataTransferConfigurationMappingHandler const&);
    IClientDataTransferConfigurationMappingHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientDataTransferConfigurationMappingHandler() = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class IClientDataTransferConfigurationMappingHandler {};
#endif // @header-generator platform

} // namespace Editor::Services
#endif // @header-generator platform
