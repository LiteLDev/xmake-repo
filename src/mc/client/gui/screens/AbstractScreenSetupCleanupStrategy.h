#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class AbstractScreenSetupCleanupStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractScreenSetupCleanupStrategy() = default;

    virtual void setupScreen(::ScreenContext&);

    virtual void cleanupScreen(::ScreenContext&);

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $cleanupScreen(::ScreenContext&);
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"

// auto generated forward declare list
// clang-format off
class ScreenContext;
// clang-format on

class AbstractScreenSetupCleanupStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractScreenSetupCleanupStrategy() = default;

    virtual void setupScreen(::ScreenContext& screenContext);

    virtual void cleanupScreen(::ScreenContext& screenContext);

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $cleanupScreen(::ScreenContext& screenContext);
    // NOLINTEND
};
#else // @header-generator platform
class AbstractScreenSetupCleanupStrategy {};
#endif // @header-generator platform
#endif // @header-generator platform
