#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/AbstractScreenSetupCleanupStrategy.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
// clang-format on

class DefaultUIScreenSetupCleanupStrategy : public ::AbstractScreenSetupCleanupStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mClient;
    // NOLINTEND

public:
    // prevent constructor by default
    DefaultUIScreenSetupCleanupStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultUIScreenSetupCleanupStrategy();

    virtual void setupScreen(::ScreenContext&);

    virtual void cleanupScreen(::ScreenContext&);

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DefaultUIScreenSetupCleanupStrategy(
        ::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<IClientInstance>> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $setupScreen(::ScreenContext&);

    MCNAPI void $cleanupScreen(::ScreenContext&);

    MCNAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/client/gui/screens/AbstractScreenSetupCleanupStrategy.h"
#include "mc/client/renderer/screen/EyeRenderingModeBit.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
// clang-format on

class DefaultUIScreenSetupCleanupStrategy : public ::AbstractScreenSetupCleanupStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>> mClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DefaultUIScreenSetupCleanupStrategy() /*override*/ = default;

    virtual void setupScreen(::ScreenContext& screenContext) /*override*/;

    virtual void cleanupScreen(::ScreenContext& screenContext) /*override*/;

    virtual ::EyeRenderingModeBit getEyeRenderingMode() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setupScreen(::ScreenContext& screenContext);

    MCAPI void $cleanupScreen(::ScreenContext& screenContext);

    MCAPI ::EyeRenderingModeBit $getEyeRenderingMode() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
class DefaultUIScreenSetupCleanupStrategy {};
#endif // @header-generator platform
#endif // @header-generator platform
