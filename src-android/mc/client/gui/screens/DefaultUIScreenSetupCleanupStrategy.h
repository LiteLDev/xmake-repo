#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
