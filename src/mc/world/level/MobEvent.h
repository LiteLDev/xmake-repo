#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEvent {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 24, std::string> mLocalizableName;
    ::ll::TypedStorage<1, 1, bool>         mEnabled;
    ::ll::TypedStorage<1, 1, bool>         mIsDefaultSet;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<8, 32, ::std::string> mLocalizableName;
    ::ll::TypedStorage<1, 1, bool>           mEnabled;
    ::ll::TypedStorage<1, 1, bool>           mIsDefaultSet;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
    MobEvent(MobEvent const&);
#else // @header-generator platform
    MobEvent();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getLocalizableName() const;

    MCNAPI bool isEnabled() const;

    MCNAPI ~MobEvent();
#else // @header-generator platform
    MCAPI MobEvent(::std::string name, ::std::string localizableName, bool val);
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // constructor thunks
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(::std::string name, ::std::string localizableName, bool val);
#endif // @header-generator platform
    // NOLINTEND
};
