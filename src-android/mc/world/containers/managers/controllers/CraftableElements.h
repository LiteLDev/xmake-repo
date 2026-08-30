#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ElementType.h"

class CraftableElements {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<uint, ElementType>> mCraftableElements;
    ::ll::TypedStorage<8, 40, std::unordered_map<uchar, uint>>       mElementKeyToParticleKey;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftableElements();

    virtual void registerElements();

    virtual void _registerElement(int, int, ::ElementType);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CraftableElements();

    MCNAPI ::ElementType getElement(int, int, int);

    MCNAPI bool particlesFromElement(::ElementType, int&, int&, int&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerElements();

    MCNAPI void $_registerElement(int, int, ::ElementType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
