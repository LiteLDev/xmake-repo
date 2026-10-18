#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"

class IMultiPlayerServices {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMultiPlayerServices() = default;

    virtual bool isMultiPlayerInitialized() const = 0;

    virtual bool checkMultiPlayerPermission(std::optional<Social::MultiplayerServiceIdentifier>) = 0;

    virtual bool isPlayingLevel() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"

class IMultiPlayerServices {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMultiPlayerServices() = default;

    virtual bool isMultiPlayerInitialized() const = 0;

    virtual bool checkMultiPlayerPermission(::std::optional<::Social::MultiplayerServiceIdentifier> service) = 0;

    virtual bool isPlayingLevel() const = 0;
    // NOLINTEND
};
#else // @header-generator platform
class IMultiPlayerServices {};
#endif // @header-generator platform
#endif // @header-generator platform
