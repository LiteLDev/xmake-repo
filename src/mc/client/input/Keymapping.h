#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
class Keymapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>      mAction;
    ::ll::TypedStorage<8, 24, std::vector<int>> mKeys;
    ::ll::TypedStorage<1, 1, bool>              mAllowRemap;
    ::ll::TypedStorage<1, 1, bool>              mIsSharedKey;
    // NOLINTEND

public:
    // prevent constructor by default
    Keymapping();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Keymapping(::Keymapping const&);

    MCNAPI Keymapping(std::string const&, int);

    MCNAPI Keymapping(std::string const&, std::vector<int> const&);

    MCNAPI Keymapping(std::string const&, int, bool, bool);

    MCNAPI Keymapping(std::string const&, std::vector<int> const&, bool, bool);

    MCNAPI int getKeyCount() const;

    MCNAPI std::vector<int> const& getKeys() const;

    MCNAPI bool isAltKey() const;

    MCNAPI bool isAssigned() const;

    MCNAPI void operator=(::Keymapping const&);

    MCNAPI void setKeys(std::vector<int> const&);

    MCNAPI void unassign();

    MCNAPI void unassign(int);

    MCNAPI ~Keymapping();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static float const& DO_NOT_REPEAT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Keymapping const&);

    MCNAPI void* $ctor(std::string const&, int);

    MCNAPI void* $ctor(std::string const&, std::vector<int> const&);

    MCNAPI void* $ctor(std::string const&, int, bool, bool);

    MCNAPI void* $ctor(std::string const&, std::vector<int> const&, bool, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
class Keymapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mAction;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mKeys;
    ::ll::TypedStorage<1, 1, bool>                mAllowRemap;
    ::ll::TypedStorage<1, 1, bool>                mIsSharedKey;
    // NOLINTEND

public:
    LLNDAPI bool isAssigned() const;
    LLNDAPI bool isAltKey() const;
    LLNDAPI bool isRemappable() const;
    LLNDAPI bool isSharedKey() const;

    LLNDAPI Keymapping(std::string const& action, std::vector<int> const& defaultKeys);
    LLNDAPI Keymapping(std::string const& action, std::vector<int> const& defaultKeys, bool allowRemap, bool sharedKey);

public:
    // prevent constructor by default
    Keymapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Keymapping(::Keymapping const&);

    MCAPI Keymapping(::std::string const& action, int defaultKey);

    MCAPI Keymapping(::std::string const& action, int defaultKey, bool allowRemap, bool sharedKey);

    MCAPI void operator=(::Keymapping const& rhs);

    MCAPI ~Keymapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Keymapping const&);

    MCAPI void* $ctor(::std::string const& action, int defaultKey);

    MCAPI void* $ctor(::std::string const& action, int defaultKey, bool allowRemap, bool sharedKey);

    MCAPI void*
    $ctor(::std::string const& action, ::std::vector<int> const& defaultKeys, bool allowRemap, bool sharedKey);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
#else // @header-generator platform
class Keymapping {};
#endif // @header-generator platform
#endif // @header-generator platform
