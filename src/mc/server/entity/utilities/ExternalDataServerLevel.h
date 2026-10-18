#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/input/InputMode.h"
#include "mc/entity/utilities/ExternalDataInterface.h"
#include "mc/input/ClientPlayMode.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
struct AdventureSettings;
// clang-format on

struct ExternalDataServerLevel : public ::ExternalDataInterface {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<8, 24> mLevel;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnke4525e;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ExternalDataServerLevel& operator=(ExternalDataServerLevel const&);
    ExternalDataServerLevel(ExternalDataServerLevel const&);
    ExternalDataServerLevel();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ExternalDataServerLevel();
#else // @header-generator platform
    virtual ~ExternalDataServerLevel() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const;
#else // @header-generator platform
    virtual bool isInWorldAndNotShowingAnyMenuScreens() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPausingGame() const;
#else // @header-generator platform
    virtual bool isPausingGame() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::AdventureSettings const& getAdventureSettings() const;
#else // @header-generator platform
    virtual ::AdventureSettings const& getAdventureSettings() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::ClientPlayMode getPlayMode() const;
#else // @header-generator platform
    virtual ::ClientPlayMode getPlayMode() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::InputMode getInputMode() const;
#else // @header-generator platform
    virtual float getSmoothRotationSpeed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::GameType getDefaultGameType() const;
#else // @header-generator platform
    virtual ::InputMode getInputMode() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual float getSmoothRotationSpeed() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ExternalDataServerLevel(::gsl::not_null<Bedrock::NonOwnerPointer<const ILevel>>);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<const ILevel>>);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    virtual ::GameType getDefaultGameType() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInWorldAndNotShowingAnyMenuScreens() const;

    MCNAPI bool $isPausingGame() const;

    MCNAPI ::AdventureSettings const& $getAdventureSettings() const;

    MCNAPI ::ClientPlayMode $getPlayMode() const;

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    MCNAPI float $getSmoothRotationSpeed() const;

#endif // @header-generator platform
    MCNAPI ::InputMode $getInputMode() const;

    MCNAPI ::GameType $getDefaultGameType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI float $getSmoothRotationSpeed() const;
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
