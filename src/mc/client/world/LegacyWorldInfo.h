#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/world/LocalWorldInfo.h"

// auto generated forward declare list
// clang-format off
struct LevelSummary;
// clang-format on

struct LegacyWorldInfo : public ::LocalWorldInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mIdentifier;
    ::ll::TypedStorage<8, 8, ulong>        mStorageRequiredSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LegacyWorldInfo();

    MCNAPI std::string const& getIdentifier() const;

    MCNAPI ulong getStorageRequiredSize() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};
#else // @header-generator platform
struct LegacyWorldInfo {};
#endif // @header-generator platform
