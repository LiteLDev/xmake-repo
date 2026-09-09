#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/_TickPtr.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Level;
// clang-format on

class TempEPtrBase : public ::_TickPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Actor*>        tmp;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mEntityId;
    ::ll::TypedStorage<8, 8, ::Level*>        mLevel;
    ::ll::TypedStorage<1, 1, bool>            mHasLocked;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TempEPtrBase();

    virtual void invalidate();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TempEPtrBase(::TempEPtrBase const&);

    MCNAPI ::Actor* _lock() const;

    MCNAPI void _set(::Actor*);

    MCNAPI bool isValid() const;

    MCNAPI ::TempEPtrBase& operator=(::TempEPtrBase const&);

    MCNAPI void unset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::TempEPtrBase const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $invalidate();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
