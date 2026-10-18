#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/platform/MultiplayerLockedContext.h"

struct IGameMultiplayerDisabledTextProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameMultiplayerDisabledTextProvider();

    virtual std::string getTextTitle(::MultiplayerLockedContext) const = 0;

    virtual std::string getTextBody(::MultiplayerLockedContext) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<IGameMultiplayerDisabledTextProvider> createProvider();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
struct IGameMultiplayerDisabledTextProvider {};
#endif // @header-generator platform
