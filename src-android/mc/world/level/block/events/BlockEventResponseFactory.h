#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/IPackLoadScoped.h"
#include "mc/util/EventResponseFactory.h"

// auto generated forward declare list
// clang-format off
struct PackLoadInfo;
// clang-format on

class BlockEventResponseFactory : public ::EventResponseFactory, public ::IPackLoadScoped {
public:
    // prevent constructor by default
    BlockEventResponseFactory& operator=(BlockEventResponseFactory const&);
    BlockEventResponseFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockEventResponseFactory();

    virtual void initializeFactory(::PackLoadInfo const&);

    virtual void initSchema();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $initializeFactory(::PackLoadInfo const&);

    MCNAPI void $initSchema();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
