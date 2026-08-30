#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/level/block/components/ClientBlockComponentDirectData.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/block/IClientBlockData.h"

// auto generated forward declare list
// clang-format off
class BlockGraphics;
// clang-format on

struct ClientBlockData : public ::IClientBlockData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ClientBlockComponentDirectData> mDirectData;
    ::ll::TypedStorage<8, 8, ::BlockGraphics const*>            mBlockGraphics;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientBlockData();

    virtual void visit(::brstd::function_ref<void(const ClientBlockData&)>) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $visit(::brstd::function_ref<void(const ClientBlockData&)>) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
