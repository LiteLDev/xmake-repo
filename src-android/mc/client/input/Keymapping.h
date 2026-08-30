#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
